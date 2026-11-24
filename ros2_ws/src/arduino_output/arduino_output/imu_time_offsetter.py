import rclpy
from rclpy.node import Node
from interfaces.msg import IMU, MultiArrayTime
import serial
from builtin_interfaces.msg import Time
import math, time
import numpy as np

class Offsetter(Node):
    def __init__(self):
        super().__init__("IMU_Offsetter")
        self.emg_subscriber = self.create_subscription(MultiArrayTime, 
                                                       "/exo/raw_EMG",
                                                         self.emg_initialiser,
                                                           10)
        self.imu_subscriber = self.create_subscription(IMU, '/imu/raw_imu',self.imu_initialiser, 10)
        self.imu_publisher = self.create_publisher(IMU, '/imu/imu_offset',10)
                
        self.init = True
        self.buffer_emg = []
        self.buffer_imu = []
        self.offset_ns = 0

    def emg_initialiser(self, msg):
        if self.init and len(self.buffer_emg) < 200 and len(self.buffer_imu) != 0:
            self.buffer_emg.append(msg.header.stamp.sec + msg.header.stamp.nanosec / 1e9)
            return

    def imu_initialiser(self,msg):
        
        if self.init:
            sec = msg.header.stamp.sec
            nanosec = msg.header.stamp.nanosec
            
            if len(self.buffer_imu) < 200:
                self.buffer_imu.append(sec + nanosec / 1e9 ) 

            if len(self.buffer_imu) >= 200 and len(self.buffer_emg) >= 200:
                emg = np.array(self.buffer_emg)
                imu = np.array(self.buffer_imu)

                # Sampling period
                emg_period = np.median(np.diff(emg))
                imu_period = np.median(np.diff(imu))

                # Find forventet offset fra første timestamps
                initial_offset = emg[0] - imu[0]

                # Test forskellige offsets omkring initial_offset
                offsets_to_test = np.arange(
                    initial_offset - 0.1,
                    initial_offset + 0.1,
                    0.001
                )

                best_offset = None
                best_error = float('inf')

                for offset in offsets_to_test:

                    corrected_imu = imu + offset

                    errors = []

                    for t in corrected_imu:
                        errors.append(np.min(np.abs(emg - t)))

                    error = np.median(errors)

                    if error < best_error:
                        best_error = error
                        best_offset = offset

                self.offset_ns = int(best_offset * 1e9)
                self.init = False   
                self.get_logger().info(
                    f"Calculated offset: {best_offset:.6f} s"
                )

                self.get_logger().info(
                    f"Matching error: {best_error*1000:.3f} ms"
                )



                
                
                
                #self.init = False
                #emg = np.array(self.buffer_emg[100:200])
                #imu = np.array(self.buffer_imu[100:200])
                #offset = emg - imu
                #self.offset_ns = int(np.median(offset) * 1e9)
                #self.get_logger().info(f"IMU OFFSET: {np.median(offset)}")


                #self.get_logger().info(
                #    f"EMG period: {np.median(np.diff(emg))*1000:.3f} ms"
                #)

                #self.get_logger().info(
                #    f"IMU period: {np.median(np.diff(imu))*1000:.3f} ms"
                #)

                #self.get_logger().info(
                #    f"Offset STD: {np.std(offset)*1000:.3f} ms"
                #)
                #self.get_logger().info(f"EMG first: {self.buffer_emg[0]}")
                #self.get_logger().info(f"IMU first: {self.buffer_imu[0]}")

                #self.get_logger().info(f"EMG last: {self.buffer_emg[-1]}")
                #self.get_logger().info(f"IMU last: {self.buffer_imu[-1]}")

                #self.get_logger().info(
                #    f"First difference: {self.buffer_emg[0] - self.buffer_imu[0]}"
                #)

                #self.get_logger().info(
                #    f"Last difference: {self.buffer_emg[-1] - self.buffer_imu[-1]}"
#)



        if not self.init:

            total_ns = (
                msg.header.stamp.sec * 1_000_000_000
                + msg.header.stamp.nanosec
                + self.offset_ns
            )

            new_msg = IMU()
            new_msg.imu = msg.imu
            new_msg.header.stamp.sec = total_ns // 1_000_000_000
            new_msg.header.stamp.nanosec = total_ns % 1_000_000_000
            self.imu_publisher.publish(new_msg)
                    # Initial offset estimate
                    #initial_offset = emg[0] - imu[0]

                    #temp = []

                    #for i in range(len(imu)):

                    #    differences = np.abs(emg - (imu[i] + initial_offset))

                    #    idx = np.argmin(differences)

                    #    if differences[idx] < 0.010:
                    #        temp.append(emg[idx] - imu[i])

                    #if len(temp) > 0:
                    #    self.mean = np.median(temp)
                    #    self.get_logger().info(f"Offset: {self.mean:.6f}")
                    #else:
                    #    self.get_logger().warning("No matching timestamps found")

                    #self.mean = np.median(temp)
                    #initial_guess = np.median(emg-imu)
                    #for i in range(len(emg)):
                        #   diff = emg[i] - imu[i]
                        #  if abs(diff - initial_guess) > 0.01:
                        #     pass
                        #else:
                            #   temp.append(diff)
                    #self.mean = np.median(np.array(temp))
                    #offset = np.array(self.buffer_emg[20:120]) - np.array(self.buffer_imu[20:120])
                    #self.mean = np.mean(offset)
                    

    


def main(args=None):
    rclpy.init(args=args)
    serial_node = Offsetter()
    rclpy.spin(serial_node)
    serial_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

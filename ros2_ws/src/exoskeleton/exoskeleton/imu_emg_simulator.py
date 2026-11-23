import rclpy
from rclpy.node import Node
import numpy as np
from interfaces import MultiArrayTime, IMU
class SimulatorNode(Node):
    def __init__(self):
        super().__init__("Simulator_Node")
        self.emg_mu = 0.0
        self.emg_sigma = 0.1
        self.imu_publisher = self.create_publisher(IMU, 'arduino_output', 10)
        self.emg_publisher = self.create_publisher(MultiArrayTime, '/exo/raw_EMG', 10)
        timer_period = 1/20
        self.create_timer(timer_period, self.timer_callback)
        self.data = np.zeros([8,25])
        self.emg_channels = 8

    def timer_callback(self):
            for i in range(8):
                 self.data[i] = np.random.normal(self.emg_mu, self.emg_sigma, 25)
                      
        # Extract the EMG data from the board data using the specified EMG channels
            emg_data = self.data
                    # Preserve the SDK timestamp of the last sample, not publishing time

            msg = MultiArrayTime()
            msg.rows = int(emg_data.shape[0])
            msg.cols = int(emg_data.shape[1])
            msg.data = emg_data.flatten().tolist()

            msg.header.stamp = self.get_clock().now().to_msg()

            self.emg_publisher.publish(msg)
            msg = IMU()
            msg.imu.orientation.x = 0.0
            msg.imu.orientation.y = 0.0
            msg.imu.orientation.z = 0.0
            msg.imu.orientation.w = 1.0
            msg.imu.angular_velocity.x = 0.0
            msg.imu.angular_velocity.y = 0.0
            msg.imu.angular_velocity.z = 1.0
            msg.imu.linear_acceleration.x = 0.0
            msg.imu.linear_acceleration.y = -9.81
            msg.imu.linear_acceleration.z = 0.0
            msg.header.stamp = self.get_clock().now().to_msg()
            self.imu_publisher.publish(msg)



def main(args=None):
    rclpy.init(args=args)
    node = SimulatorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

        


    
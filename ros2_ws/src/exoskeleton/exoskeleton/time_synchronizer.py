import rclpy
from rclpy.node import Node
from message_filters import Subscriber, ApproximateTimeSynchronizer
from interfaces.msg import MultiArrayTime, MultiArray, IMU

class Time_synchronizer(Node):
    def __init__(self):
        super().__init__("Time_synchronizer")
        self.declare_parameter("QOS", 10)
        self.declare_parameter("Queue_size", 2)
        self.declare_parameter("Max_delay", 0.01)
        self.declare_parameter("EMG_publisher", "/exo/synced_EMG")
        self.declare_parameter("IMU_publisher", "/exo/synced_IMU")
        self.declare_parameter("EMG_subscriber", "/exo/raw_EMG")
        self.declare_parameter("IMU_subscriber", "/imu/imu_offset")
        
        self.QOS = self.get_parameter("QOS").value
        self.queue_size = self.get_parameter("Queue_size").value
        self.max_delay = self.get_parameter("Max_delay").value
        self.EMG_publisher_path = self.get_parameter("EMG_publisher").value
        self.IMU_publisher_path = self.get_parameter("IMU_publisher").value
        self.EMG_subsriber_path = self.get_parameter("EMG_subscriber").value
        self.IMU_subsriber_path = self.get_parameter("IMU_subscriber").value
    
        self.EMG_pub = self.create_publisher(MultiArray, self.EMG_publisher_path, self.QOS)
        self.IMU_pub = self.create_publisher(IMU, self.IMU_publisher_path, self.QOS)
        self.EMG_sub = Subscriber(self, MultiArrayTime, self.EMG_subsriber_path)
        self.IMU_sub = Subscriber(self, IMU, self.IMU_subsriber_path)

        self.time_sync = ApproximateTimeSynchronizer([self.EMG_sub, self.IMU_sub], self.queue_size, self.max_delay)
        self.time_sync.registerCallback(self.SyncCallback)
        self.counter = 0

    def SyncCallback(self, emg, imu):
        emg_msg = MultiArray()
        emg_msg.data = emg.data
        emg_msg.cols = emg.cols
        emg_msg.rows = emg.rows
        emg_msg.counter = self.counter

        imu_msg = IMU()
        imu_msg.imu.orientation.x = imu.imu.orientation.x
        imu_msg.imu.orientation.y = imu.imu.orientation.y
        imu_msg.imu.orientation.z = imu.imu.orientation.z
        imu_msg.imu.orientation.w = imu.imu.orientation.w
        imu_msg.imu.angular_velocity.x = imu.imu.angular_velocity.x
        imu_msg.imu.angular_velocity.y = imu.imu.angular_velocity.y
        imu_msg.imu.angular_velocity.z = imu.imu.angular_velocity.z
        imu_msg.imu.linear_acceleration.x = imu.imu.linear_acceleration.x
        imu_msg.imu.linear_acceleration.y = imu.imu.linear_acceleration.y
        imu_msg.imu.linear_acceleration.z = imu.imu.linear_acceleration.z
        imu_msg.counter = self.counter

        self.EMG_pub.publish(emg_msg)
        self.IMU_pub.publish(imu_msg)
        self.counter += 1



def main(args=None):
    rclpy.init(args=args)
    node = Time_synchronizer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()






import rclpy
from rclpy.node import Node
from message_filters import Subscriber, ApproximateTimeSynchronizer
from interfaces import MultiArrayTime, MultiArray, IMU

class Time_synchronizer(Node):
    def __init__(self):
        super().__init__("Time_synchronizer")
        self.declare_parameter("QOS", 10)
        self.declare_parameter("Queue_size", 10)
        self.declare_parameter("Max_delay", 0.005)
        self.declare_parameter("EMG_publisher", "/exo/synced_EMG")
        self.declare_parameter("IMU_publisher", "/exo/synced_IMU")
        self.declare_parameter("EMG_subscriber", "raw_EMG")
        self.declare_parameter("IMU_subscriber", "arduino_output")
        


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
        emg_msg.col = emg.cols
        emg_msg.row = emg.rows
        emg_msg.header = self.counter

        imu_msg = IMU()
        imu_msg.text = imu.text
        imu_msg.header = self.counter

        self.EMG_pub.publish(emg_msg)
        self.IMU_pub.publish(imu_msg)
        self.counter += 1

    






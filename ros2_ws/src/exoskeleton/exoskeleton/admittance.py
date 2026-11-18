import rclpy
import numpy as np
from rclpy.node import Node
from candle_ros2.msg import MotionCmd
from std_msgs.msg import Float32
from interfaces.msg import Int8WithHeader, IMU, MultiArray
from scipy.spatial.transform import Rotation

class AdmittanceNode(Node):
    def __init__(self):
        super().__init__('Admittance_Node')
        self.declare_parameter("Virtual_mass", 1.0)
        self.declare_parameter("Base_K", 1.0)
        self.declare_parameter("Max_K", 10.0)
        self.declare_parameter("Controller_update_rate", 1/10)
        self.declare_parameter("Range_of_motion", [-100,100])
        self.declare_parameter("Quality_of_service", 10)
        self.declare_parameter("ROM_buffer", 15)
        self.declare_parameter("Factor_coefficient", 0.5)
        self.declare_parameter("Motion_command_topic", "/md/motion_command")
        self.declare_parameter("Torque_estimator", "/Torque_estimator")
        self.declare_parameter("Classification", "/exo/classification")
        self.declare_parameter("IMU", "/exo/synced_IMU")
        self.declare_parameter("EMG", "/exo/processed_EMG")

        self.M = self.get_parameter("Virtual_mass").value
        self.base_K = self.K = self.get_parameter("Base_K").value
        self.max_K = self.get_parameter("Max_K").value
        self.Ts = self.get_parameter("Controller_update_rate").value
        self.rom = np.deg2rad(self.get_parameter("Range_of_motion").value)
        self.qos = self.get_parameter("Quality_of_service").value
        self.buffer = np.deg2rad(self.get_parameter("ROM_buffer").value)
        self.factor_coefficient = self.get_parameter("Factor_coefficient").value
        self.motion_command = self.get_parameter("Motion_command_topic").value
        self.torque_estimator = self.get_parameter("Torque_estimator").value
        self.classification_topic = self.get_parameter("Classification").value
        self.imu_topic = self.get_parameter("IMU").value
        self.emg_topic = self.get_parameter("EMG").value
        
        self.tau = 0.0
        self.B = 1.0
        self.theta = 0.0
        self.theta_prev = 0.0
        self.theta_last = 0.0
        self.vel = 0.0
        self.vel_prev = 0.0

        self.classification = 0.0
        self.classification_buffer = {}
        self.imu_buffer = {}
        self.emg_buffer = {}
        self.theta_measured = 0.0

        self.publish_motor_command = self.create_publisher(MotionCmd, self.motion_command, self.qos)
        self.torque_subsriber = self.create_subscription(Float32, self.torque_estimator, self.torque_estimator_callback, self.qos)
        self.classification_subscriber = self.create_subscription(Int8WithHeader, self.classification_topic, self.classification_callback, self.qos)
        self.imu_subscriber = self.create_subscription(IMU, self.imu_topic, self.imu_callback, self.qos)
        self.processed_emg_subscriber = self.create_subscription(MultiArray, self.emg_topic, self.emg_callback, self.qos)
        self.motor_timer = self.create_timer(self.Ts, self.motor_timer_callback)  

    def update_parameters(self):
        dist_lower = self.theta_measured - self.rom[0]
        dist_upper = self.rom[1] - self.theta_measured
        if dist_lower < self.buffer:
            x = 1.0 - max(dist_lower, 0.0) / self.buffer
            factor = self.factor_coefficient * (1.0 - np.cos(x * np.pi))
            self.K = self.base_K + (self.max_K - self.base_K) * factor
            self.B = 2 * np.sqrt(self.M * self.K)
        elif dist_upper < self.buffer:
            x = 1.0 - max(dist_upper, 0.0) / self.buffer
            factor = self.factor_coefficient * (1.0 - np.cos(x * np.pi))
            self.K = self.base_K + (self.max_K - self.base_K) * factor
            self.B = 2 * np.sqrt(self.M * self.K)
        else:
            self.K = 0.0
            self.B = 10 * self.M
        

    def admittance(self):
        self.theta_last = self.theta_prev
        self.theta_prev = self.theta
        self.vel_prev = self.vel
        #self.theta = (self.tau * self.Ts**2 + self.theta_prev * (2*self.M + self.B * self.Ts) - self.M * self.theta_last) / (self.M + self.B * self.Ts + self.K * self.Ts**2)
        self.vel = (self.tau * self.Ts + self.M * self.vel_prev - self.K*self.Ts * self.theta_measured) / (self.M + self.B * self.Ts)
        self.vel = np.clip(self.vel, -8.0, 8.0) #Min and max velocity of the motor
        self.theta = self.theta_prev + self.vel * self.Ts
        self.theta = np.clip(self.theta, self.rom[0], self.rom[1])
        
    def motor_timer_callback(self):
        self.update_parameters()
        self.admittance()
        msg = MotionCmd()
        msg.device_ids = [17]
        msg.target_position = [0.0]
        msg.target_velocity = [self.vel]
        msg.target_torque = [0.0]
        self.publish_motor_command.publish(msg)
        self.get_logger().info(f"Publishing: {msg}")

    def torque_estimator_callback(self,msg):
        self.get_logger().info(f"Recieved {msg.data}")
        self.tau = msg.data

    def classification_callback(self, msg):
        counter = msg.header    
        self.classification_buffer[counter] = msg        
        self.check_sync(counter)

    def imu_callback(self, msg):
        counter = msg.counter
        self.imu_buffer[counter] = msg
        self.check_sync(counter)     
        return

    def emg_callback(self, msg):
        counter = msg.counter
        self.emg_buffer[counter] = msg
        self.check_sync(counter)

    def restructure_data(self, msg):
            try:
                data = np.reshape(msg.data, (msg.rows, msg.cols))
            except Exception as e:
                self.get_logger().error(f"Failed to reshape data back into {(msg.rows, msg.cols)} matrix")
                self.get_logger().error(f"Messange length: {len(msg.data)}")
                self.get_logger().error(f"Error: {e}")
                raise
            return data

    def check_sync(self, counter):
        if counter in self.imu_buffer and counter in self.classification_buffer and counter in self.emg_buffer:

            classification_msg = self.classification_buffer.pop(counter)
            imu_msg = self.imu_buffer.pop(counter)
            emg_msg = self.emg_buffer.pop(counter)

            temp = classification_msg.data
            if temp == 0:
                self.classification = 0
            elif temp == 1:
                self.classification = 1
            elif temp == 2:
                self.classification = -1

            q = imu_msg.orientation
            r = Rotation.from_quat([q.x,q.y,q.z,q.w])
            roll = r.as_euler('xyz', degrees=False)[0]
            self.theta_measured = roll

            emg_data = self.restructure_data(emg_msg)
            intensity = np.sqrt(np.mean(emg_data ** 2))
            self.tau = intensity * self.classification
            self.get_logger().debug(f"Synced Counter: {counter}, Classification: {self.classification}, Roll: {np.rad2deg(self.theta_measured)} deg, Intensity (RMS): {intensity}")
        
def main(args=None):
    rclpy.init(args=args)

    node = AdmittanceNode()
    rclpy.spin(node)
    
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

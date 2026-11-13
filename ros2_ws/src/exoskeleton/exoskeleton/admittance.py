import rclpy
import numpy as np
from rclpy.node import Node
from candle_ros2.msg import MotionCmd
from std_msgs.msg import Float32

class AdmittanceNode(Node):
    def __init__(self):
        super().__init__('Admittance_Node')
        self.declare_parameter("Virtual_mass", 1.0)
        self.declare_parameter("Base_K", 0.1)
        self.declare_parameter("Max_K", 5.0)
        self.declare_parameter("Controller_update_rate", 1/10)
        self.declare_parameter("Range_of_motion", [-100,100])
        self.declare_parameter("Quality_of_service", 10)
        self.declare_parameter("ROM_buffer", 15)
        self.declare_parameter("Factor_coefficient", 0.5)
        self.declare_parameter("Motion_command_topic", "/md/motion_command")
        self.declare_parameter("Torque_estimator", "/Torque_estimator")

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


        self.tau = 0.0
        self.B = 1.0
        self.theta = 0.0
        self.theta_prev = 0.0
        self.theta_last = 0.0
        self.vel = 0.0
        self.vel_prev = 0.0
        self.publish_motor_command = self.create_publisher(MotionCmd, self.motion_command, self.qos)
        self.torque_subsriber = self.create_subscription(Float32, self.torque_estimator, self.torque_estimator_callback, self.qos)
    
        self.motor_timer = self.create_timer(self.Ts, self.motor_timer_callback)  

    def update_parameters(self):
        dist_lower = self.theta - self.rom[0]
        dist_upper = self.rom[1] - self.theta
        if dist_lower < self.buffer:
            x = 1.0 - max(dist_lower, 0.0) / self.buffer
            factor = self.factor_coefficient * (1.0 - np.cos(x * np.pi))
            self.K = self.base_K + (self.max_K - self.base_K) * factor
        elif dist_upper < self.buffer:
            x = 1.0 - max(dist_upper, 0.0) / self.buffer
            factor = self.factor_coefficient * (1.0 - np.cos(x * np.pi))
            self.K = self.base_K + (self.max_K - self.base_K) * factor
        else:
            self.K = self.base_K
        self.B = 2 * np.sqrt(self.M * self.K)

    def admittance(self):
        self.theta_last = self.theta_prev
        self.theta_prev = self.theta
        self.vel_prev = self.vel
        #self.theta = (self.tau * self.Ts**2 + self.theta_prev * (2*self.M + self.B * self.Ts) - self.M * self.theta_last) / (self.M + self.B * self.Ts + self.K * self.Ts**2)
        self.vel = (self.tau + self.M * self.vel_prev - self.K*self.Ts * self.theta) / (self.M + self.B * self.Ts)
        self.theta = self.theta_prev + self.vel * self.Ts
        self.theta = np.clip(self.theta, self.rom[0], self.rom[1])
        
    def motor_timer_callback(self):
        self.update_parameters()
        self.admittance()
        msg = MotionCmd()
        msg.device_ids = [17]
        msg.target_position = [self.theta]
        msg.target_velocity = [1]
        msg.target_torque = [1]
        self.publish_motor_command.publish(msg)
        self.get_logger().info(f"Publishing: {msg}")

    def torque_estimator_callback(self,msg):
        self.get_logger().info(f"Recieved {msg.data}")
        self.tau = msg.data

def main(args=None):
    rclpy.init(args=args)

    node = AdmittanceNode()
    rclpy.spin(node)
    
    node.destroy_node()
    rclpy.shutdown()



if __name__ == '__main__':
    main()

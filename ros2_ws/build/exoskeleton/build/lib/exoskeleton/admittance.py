import rclpy
import numpy as np
from rclpy.node import Node
from candle_ros2.msg import MotionCmd
from std_msgs.msg import Float32

class AdmittanceNode(Node):
    def __init__(self):
        super().__init__('Admittance_Node')
        self.tau = 0.0
        self.M = 1.0
        self.base_K = self.K = 0.1
        self.max_K = 5.0
        self.B = 1.0
        self.theta = 0.0
        self.theta_prev = 0.0
        self.theta_last = 0.0
        self.Ts = 1/10
        self.rom = np.deg2rad([-100,100])
        self.buffer = np.deg2rad(15.0)
        self.factor_coefficient = 0.5
        self.vel = 0.0
        self.vel_prev = 0.0
        QOS = 10
        self.publish_motor_command = self.create_publisher(MotionCmd, '/md/motion_command', QOS)
        self.torque_subsriber = self.create_subscription(Float32, 'Torque_estimator', self.torque_estimator_callback, QOS)
        timer_period = 1/10 # seconds
        self.motor_timer = self.create_timer(timer_period, self.motor_timer_callback)  

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

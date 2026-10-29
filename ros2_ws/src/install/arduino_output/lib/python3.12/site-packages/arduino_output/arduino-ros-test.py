import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial
arduinoData = serial.Serial('/dev/ttyACM0',9600)

class SerialPublisher(Node):
    def __init__(self):
        super().__init__("arduino_output")

        # Create publisher for arduino output
        self.subscription = self.create_subscription(String,'arduino_output', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        

        self.get_logger().info("Serial node initialized")

    def timer_callback(self):
        msg = String()
        msg.data = 'Recieved: %d' % self.arduinoData
        self.publisher_.publish(arduinoData)
        self.get_logger().info('Publishing: "%s"' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    serial_node = SerialPublisher()
    rclpy.spin(serial_node)
    serial_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
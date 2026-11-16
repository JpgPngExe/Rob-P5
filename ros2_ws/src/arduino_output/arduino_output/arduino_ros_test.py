import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial
from message_filters import Subscriber, ApproximateTimeSynchronizer
from rclpy.clock import Clock


class SerialPublisher(Node):
    def __init__(self):
        super().__init__("arduino_output")

        self.arduinoData = serial.Serial('/dev/ttyACM0',115200,)
        # Create publisher for arduino output
        self.publisher = self.create_publisher(String,'arduino_output', 10)
        timer_period = 0.0001  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)


        self.get_logger().info("Serial node initialized")

    def timer_callback(self):
        line = self.arduinoData.readline()
        text = line.decode('utf-8', errors='replace').strip()
        imu = String()

        #sync stuff
        self.now = Clock().now().to_msg()
        imu.header.stamp = self.now


        #self.get_logger().info(f'in_waiting={self.arduinoData.in_waiting}, raw_len={len(line)}, text="{text}"')

       
        imu.data = text
        self.publisher.publish(imu)

def main(args=None):
    rclpy.init(args=args)
    serial_node = SerialPublisher()
    rclpy.spin(serial_node)
    serial_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
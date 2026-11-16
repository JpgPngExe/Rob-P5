import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from interfaces import IMU
import serial


class SerialPublisher(Node):
    def __init__(self):
        super().__init__("arduino_output")

        self.arduinoData = serial.Serial('/dev/ttyACM0',115200,)
        # Create publisher for arduino output
        self.publisher = self.create_publisher(IMU,'arduino_output', 10)
        timer_period = 0.0001  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)


        self.get_logger().info("Serial node initialized")

    def timer_callback(self):
        line = self.arduinoData.readline()
        text = line.decode('utf-8', errors='replace').strip()

        #self.get_logger().info(f'in_waiting={self.arduinoData.in_waiting}, raw_len={len(line)}, text="{text}"')
        values = [float(x) for x in text.split(',')]
        msg = IMU()
        msg.orientation.x = values[0]
        msg.orientation.y = values[1]
        msg.orientation.z = values[2]
        msg.orientation.w = values[3]
        msg.angular_velocity.x = values[4]
        msg.angular_velocity.y = values[5]
        msg.angular_velocity.z = values[6]
        msg.linear_acceleration.x = values[7]
        msg.linear_acceleration.y = values[8]
        msg.linear_acceleration.z = values[9]
        msg.header.stamp = values[10]
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    serial_node = SerialPublisher()
    rclpy.spin(serial_node)
    serial_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
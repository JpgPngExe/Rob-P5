import rclpy
from rclpy.node import Node
from interfaces.msg import IMU
import serial
from builtin_interfaces.msg import Time


class SerialPublisher(Node):
    def __init__(self):
        super().__init__("arduino_output")

        self.arduinoData = serial.Serial('/dev/ttyACM0',115200,)
        # Create publisher for arduino output
        self.publisher = self.create_publisher(IMU,'arduino_output', 10)
        timer_period = 0.01  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)


        self.get_logger().info("Serial node initialized")

    def timer_callback(self):
        line = self.arduinoData.readline()
        text = line.decode('utf-8', errors='replace').strip()
        if not text:
            return
        #imu = String()

        #sync stuff
        #self.now = Clock().now().to_msg()
        #imu.header.stamp = self.now


        #self.get_logger().info(f'in_waiting={self.arduinoData.in_waiting}, raw_len={len(line)}, text="{text}"')
        #imu.data = text
        #self.publisher.publish(imu)
        try:
            values = [float(x) for x in text.split(',')]
        except ValueError:
            self.get_logger().warning(f"Invalid serial data: {text!r}")
            return
        if len(values) != 11:
            self.get_logger().warning(f"Expected 11 values, got {len(values)}")
            return

        msg = IMU()
        msg.imu.orientation.x = float(values[0])
        msg.imu.orientation.y = float(values[1])
        msg.imu.orientation.z = float(values[2])
        msg.imu.orientation.w = float(values[3])
        msg.imu.angular_velocity.x = float(values[4])
        msg.imu.angular_velocity.y = float(values[5])
        msg.imu.angular_velocity.z = float(values[6])
        msg.imu.linear_acceleration.x = float(values[7])
        msg.imu.linear_acceleration.y = float(values[8])
        msg.imu.linear_acceleration.z = float(values[9])
        epoch = float(values[10])
        stamp = Time()
        stamp.sec = int(epoch)
        stamp.nanosec = int((epoch - stamp.sec) * 1000000000)
        msg.imu.header.stamp = stamp
        self.publisher.publish(msg)
        #self.get_logger().info(f'in_waiting={self.arduinoData.in_waiting}, raw_len={len(line)}, msg="{msg}"')
        


def main(args=None):
    rclpy.init(args=args)
    serial_node = SerialPublisher()
    rclpy.spin(serial_node)
    serial_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

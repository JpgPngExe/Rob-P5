import rclpy
from rclpy.node import Node
from interfaces.msg import IMU, MultiArrayTime
import serial
from builtin_interfaces.msg import Time
import math, time
import numpy as np

class SerialPublisher(Node):
    def __init__(self):
        super().__init__("arduino_output")
        timer_period = 0.05  # seconds
        try:
            self.arduinoData = serial.Serial('/dev/ttyACM0',115200,)
            self.get_logger().info("Connected to ESP32 on /dev/ttyACM0")
        except serial.SerialException:
            try:
                self.arduinoData = serial.Serial('/dev/ttyACM1',115200,)
                self.get_logger().info("Connected to ESP32 on /dev/ttyACM0")
            except serial.SerialException as e:
                self.get_logger().error(f"Failed to connect ESP32: {e}")
                raise
        # Create publisher for arduino output
        self.publisher = self.create_publisher(IMU,'/imu/raw_imu', 10)
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.get_logger().info("Serial node initialized")



    def timer_callback(self):
        now_ns = time.time_ns()
        line = self.arduinoData.readline()
        while self.arduinoData.in_waiting > 0:
            new_line = self.arduinoData.readline()
            if new_line.endswith(b'\n'):
                line = new_line
        text = line.decode('utf-8', errors='replace').strip()
        if not text:
            return

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
        stamp.sec = math.floor(epoch)
        stamp.nanosec = math.floor((epoch - stamp.sec) * 1e9)
        msg.header.stamp = stamp
        self.publisher.publish(msg)
        self.get_logger().debug(f"Time between collecting sample IMU and ROS gets the data {now_ns - (msg.header.stamp.sec * 1e9
            + msg.header.stamp.nanosec)}")
        #self.get_logger().info(f'in_waiting={self.arduinoData.in_waiting}, raw_len={len(line)}, msg="{msg}"')
        


def main(args=None):
    rclpy.init(args=args)
    serial_node = SerialPublisher()
    rclpy.spin(serial_node)
    serial_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

import serial
import threading
import time


class ClockSyncNode(Node):

    def __init__(self):
        super().__init__('clock_sync_node')

        # Serial connection
        self.ser = serial.Serial(
            '/dev/ttyACM0',
            921600,
            timeout=0.1
        )
        self.rtt = self.create_publisher(Float32, 'esp_rtt', 10)
        self.offset = self.create_publisher(Float32, 'esp_offset', 10)
        time.sleep(2)

        self.lock = threading.Lock()

        self.sequence_id = 0
        self.pending_requests = {}

        self.offsets = []
        self.delays = []

        # Send PING every 100 ms
        self.timer = self.create_timer(
            0.1,
            self.send_ping
        )

        # Thread for incoming serial data
        self.reader_thread = threading.Thread(
            target=self.read_serial,
            daemon=True
        )

        self.reader_thread.start()

        self.get_logger().info("Clock synchronization started")

    def get_ros_time_ns(self):
        return self.get_clock().now().nanoseconds

    def send_ping(self):

        with self.lock:

            self.sequence_id += 1
            msg_id = self.sequence_id

            # t1: ROS send time
            t1 = self.get_ros_time_ns()

            self.pending_requests[msg_id] = t1

            message = f"PING,{msg_id},{t1}\n"

            self.ser.write(message.encode())

    def read_serial(self):

        while rclpy.ok():

            try:
                line = self.ser.readline().decode().strip()

                if not line:
                    continue

                if not line.startswith("PONG"):
                    continue

                parts = line.split(',')

                if len(parts) != 4:
                    continue

                msg_id = int(parts[1])
                t2 = int(parts[2])
                t3 = int(parts[3])

                # t4: ROS receive time
                t4 = self.get_ros_time_ns()

                with self.lock:

                    if msg_id not in self.pending_requests:
                        continue

                    t1 = self.pending_requests.pop(msg_id)
                self.get_logger().info(
                f"t1: {t1 / 1e9:.6f} | "
                f"t2: {t2 / 1e9:.6f} | "
                f"t3: {t3 / 1e9:.6f} | "
                f"t4: {t4 / 1e9:.6f}"
            )

                # Calculate RTT
                rtt = (t4 - t1) - (t3 - t2)

                # Calculate clock offset
                offset = ((t2 - t1) + (t3 - t4)) / 2

                self.offsets.append(offset)
                self.delays.append(rtt)

                # Keep last 1000 measurements
                self.offsets = self.offsets[-1000:]
                self.delays = self.delays[-1000:]

                # Convert ns to ms
                offset_ms = offset / 1e6
                rtt_ms = rtt / 1e6

                self.get_logger().info(
                    f"ID: {msg_id} | "
                    f"Offset: {offset_ms:.3f} ms | "
                    f"RTT: {rtt_ms:.3f} ms"
                )
                rtt_msg = Float32()
                rtt_msg.data = rtt_ms
                self.rtt.publish(rtt_msg)
                offset_msg = Float32()
                offset_msg.data = offset_ms
                self.offset.publish(offset_msg)

                if len(self.offsets) % 100 == 0:

                    avg_offset = sum(self.offsets) / len(self.offsets)
                    avg_delay = sum(self.delays) / len(self.delays)
                    rtt_msg = Float32()
                    rtt_msg.data = avg_delay / 1e6
                    self.rtt.publish(rtt_msg)
                    offset_msg = Float32()
                    offset_msg.data = avg_offset / 1e6
                    self.offset.publish(offset_msg)

                    self.get_logger().info(
                        f"Average offset: {avg_offset / 1e6:.3f} ms | "
                        f"Average RTT: {avg_delay / 1e6:.3f} ms"
                    )

            except Exception as e:
                self.get_logger().error(str(e))


def main(args=None):

    rclpy.init(args=args)

    node = ClockSyncNode()

    try:
        rclpy.spin(node)

    except KeyboardInterrupt:
        pass

    finally:
        node.ser.close()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

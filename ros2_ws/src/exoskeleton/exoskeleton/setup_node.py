import rclpy
from rclpy.node import Node
from candle_ros2.srv import GenericPds, AddDevices, SetMode, Generic
from candle_ros2.msg import VelocityPidCmd, Pid, MotionCmd
from std_srvs.srv import Trigger
import time
"""
Hvis EMGen skal initialiseres, skal man køre kommandoen:
ros2 run exoskeleton setup_node
Komando efter ROS2 run:   --ros-args -p Setup_Node:emg:=true
"""

class SetupNode(Node):

    def __init__(self):
        super().__init__('Setup_Node')

        self.declare_parameter("emg", False)
        emg = self.get_parameter("emg").value

        self.pds_id = 100
        self.ps_module = 2
        self.mds_id = 17
        self.mds_mode = "VELOCITY_PID"
        self.initialisation_motor_complete = False
        self.initialisation_emg_complete = False
        if not emg:
            self.get_logger().info("EMG initialisation skipped")
            self.initialisation_emg_complete = True
        self.ps_module_command =f"/pds/id_{self.pds_id}/enable_ps_{self.ps_module}"
        self.get_logger().info('Setup node started!')
        self.pds_add_client = self.create_client(AddDevices, "/pds/add_pds")
        self.enable_ps_client = self.create_client(GenericPds, self.ps_module_command)
        self.add_mds_client = self.create_client(AddDevices, "/md/add_mds")
        self.set_mode_client = self.create_client(SetMode, "/md/set_mode")
        self.enable_mds_client = self.create_client(Generic, "/md/enable")
        self.velocity_pid_pub = self.create_publisher(VelocityPidCmd,'/md/velocity_command',10)
        self.motion_publisher = self.create_publisher(MotionCmd,'/md/motion_command',10)
        self.get_logger().info("Recieved argument emg: " + str(emg))
        self.add_pds()

        # Create a client to call the start_emg service in Read_EMG
        self.start_emg_client = self.create_client(Trigger, "/exo/start_emg")
        if emg:
            self.connect_mindrove()
        

    def add_pds(self):
        while not self.pds_add_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for /pds/add_pds")
        request = AddDevices.Request()
        request.device_ids = [self.pds_id]
        future = self.pds_add_client.call_async(request)
        future.add_done_callback(self.add_pds_callback)

    def enable_ps(self):
        while not self.enable_ps_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info(f"Wainting for /pds/id_{self.pds_id}/enable_ps_{self.ps_module}")
        request = GenericPds.Request()
        future = self.enable_ps_client.call_async(request)
        future.add_done_callback(self.enable_ps_callback)
    
    def add_mds(self):
        while not self.add_mds_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for /md/add_mds")
        request = AddDevices.Request()
        request.device_ids = [self.mds_id]
        future = self.add_mds_client.call_async(request)
        future.add_done_callback(self.add_mds_callback)

    def set_mode(self):
        while not self.set_mode_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for /md/set_mode")
        request = SetMode.Request()
        request.device_ids = [self.mds_id]
        request.mode = [self.mds_mode]
        future = self.set_mode_client.call_async(request)
        future.add_done_callback(self.set_mode_callback)

    def enable_mds(self):
        while not self.enable_mds_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for /md/enable")
        request = Generic.Request()
        request.device_ids = [self.mds_id]
        future = self.enable_mds_client.call_async(request)
        future.add_done_callback(self.enable_mds_callback)

    def set_velocity_pid(self):
        msg = VelocityPidCmd()
        msg.device_ids = [self.mds_id]

        pid = Pid()
        pid.kp = 1.5
        pid.ki = 0.001
        pid.kd = 0.002
        pid.i_windup = 0.250
        pid.max_output = 100.0

        msg.velocity_pid = [pid]

        self.velocity_pid_pub.publish(msg)

    def publish_velocity(self):
        msg = MotionCmd()

        msg.device_ids = [17]
        msg.target_position = [0.0]
        msg.target_velocity = [0.0]
        msg.target_torque = [0.0]

        self.motion_publisher.publish(msg)


    def connect_mindrove(self):
        # Wait for the start service in Read_EMG
        while not self.start_emg_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for start_emg")

        # Ask Read_EMG to connect and start streaming
        request = Trigger.Request()
        future = self.start_emg_client.call_async(request)
        future.add_done_callback(self.connect_mindrove_callback)

    def add_pds_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info(f"Service reponse: {response}")
            if all(response.success):
                self.enable_ps()
            else:
                self.get_logger().error("Adding PDS failed!")
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")

    def enable_ps_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info(f"Service reponse: {response}")
            if all(response.success):
                self.add_mds()
            else:
                self.get_logger().error("Enabling Power Stage failed!")
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")
    
    def add_mds_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info(f"Service reponse: {response}")
            if all(response.success):
                self.set_mode()
            else:
                self.get_logger().error("Adding MDS failed")
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")

    def set_mode_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info(f"Service reponse: {response}")
            if all(response.success):
                self.enable_mds()
            else:
                self.get_logger().error(f"Changing MDS operating mode failed")
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")
            
    def enable_mds_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info(f"Service reponse: {response}")
            if all(response.success):
                self.get_logger().info(f"Initialisation complete")
                self.initialisation_motor_complete = True
                while self.velocity_pid_pub.get_subscription_count() == 0:
                    self.get_logger().info("Waiting for velocity PID subscriber...")
                self.set_velocity_pid()
                #time.sleep(0.5)
                self.publish_velocity()
                self.get_logger().info("Velocity PID parameters published")
            else:
                self.get_logger().error(f"Initialisation failed")
        except Exception as e:
            self.get_logger().error(f"Service call failed: {e}")

    def connect_mindrove_callback(self, future):
        try:
            # Get the result from Read_EMG
            response = future.result()
            self.get_logger().info(response.message)

            if response.success:
                self.get_logger().info("Initialisation complete")
                self.initialisation_emg_complete = True
            else:
                self.get_logger().error("EMG initialisation failed")

        except Exception as e:
            self.get_logger().error(f"EMG service call failed: {e}")


    
    

def main(args=None):
    rclpy.init(args=args)

    node = SetupNode()

    while rclpy.ok() and (not node.initialisation_motor_complete or not node.initialisation_emg_complete):
        rclpy.spin_once(node, timeout_sec=0.1)
    
    node.destroy_node()
    rclpy.shutdown()



if __name__ == '__main__':
    main()

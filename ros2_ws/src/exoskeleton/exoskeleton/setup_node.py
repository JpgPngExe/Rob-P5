import rclpy
from rclpy.node import Node
from candle_ros2.srv import GenericPds, AddDevices, SetMode, Generic
from std_srvs.srv import Trigger

emg =False

class SetupNode(Node):

    def __init__(self):
        super().__init__('Setup_Node')
        
        self.pds_id = 100
        self.ps_module = 2
        self.mds_id = 17
        self.mds_mode = "POSITION_PID"
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

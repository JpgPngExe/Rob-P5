import rclpy
from rclpy.node import Node
from std_srvs.srv import Trigger
from mindrove.board_shim import BoardShim, BoardIds, MindRoveInputParams
from interfaces.msg import MultiArray

class read_emg(Node):
    def __init__(self):
        super().__init__('Read_EMG')

        # Declare parameters for sampling rate and output topic
        self.board_id = BoardIds.MINDROVE_WIFI_BOARD
        self.emg_channels = BoardShim.get_exg_channels(BoardIds.MINDROVE_WIFI_BOARD)[:8] # Get the indices of the first eight EMG channels
        self.sampling_rate = BoardShim.get_sampling_rate(BoardIds.MINDROVE_WIFI_BOARD)   # Get the device's sampling rate in Hz
        self.timestamp_channel = BoardShim.get_timestamp_channel(BoardIds.MINDROVE_WIFI_BOARD) # Get the index of the timestamp channel
        
        # Declare parameters for sampling rate and output topic
        self.declare_parameter('output_topic', 'Raw_EMG')
        self.declare_parameter('read_period', 0.05)

        # Get the parameter values
        self.output_topic = self.get_parameter('output_topic').get_parameter_value().string_value
        self.read_period = self.get_parameter('read_period').get_parameter_value().double_value

        # Create a publisher for the EMG data
        self.board_id = BoardIds.MINDROVE_WIFI_BOARD
        self.mindrove_connection = None
        self.streaming = False

        # Create a timer to read data from the MindRove at the specified period
        self.read_timer = self.create_timer(
            self.read_period,
            self.read_mindrove,
            autostart=False
        )

        # Create a service to start the EMG data stream
        self.start_emg_service = self.create_service(
            Trigger,
            'start_emg',
            self.connect_mindrove
        )

        # Create a publisher for the EMG data
        self.raw_emg_publisher = self.create_publisher(
            MultiArray, 
            self.output_topic, 
            10
        )

        self.get_logger().info('Read EMG Node has been started')
        
    def connect_mindrove(self, request, response):
        if self.streaming:
            response.success = True
            response.message = "MindRove is already streaming"
            return response
        try:
            # Create a connection to the MindRove board
            parameters = MindRoveInputParams()
            parameters.ip_address = "192.168.4.2"

            # Create a connection to the MindRove board
            self.mindrove_connection = BoardShim(BoardIds.MINDROVE_WIFI_BOARD, parameters)
            self.mindrove_connection.prepare_session()
            self.mindrove_connection.start_stream()

            # Start the timer to read data from the MindRove at the specified period    
            self.streaming = True
            self.read_timer.reset()

            # If the connection is successful, set the response to indicate success
            response.success = True
            response.message = "Connected to MindRove successfully"  

            self.get_logger().info('EMG_Read have started EMG stream')  

        except Exception as e:    
            # If the connection fails, set the response to indicate failure and log the error        
            response.success = False
            response.message = f"Failed to connect to MindRove: {e}"
            self.get_logger().error(response.message)
        return response

    def read_mindrove(self):
        """Read and publish all samples available since the previous read"""

        # If the streaming is not active, return early
        if not self.streaming:
            self.get_logger().warn('MindRove is not streaming. EMG not started yet or has been stopped.')
            return

        try:
            # Get the latest data from the MindRove board
            data = self.mindrove_connection.get_board_data()
            if data.shape[1] == 0:
                return

            # Extract the EMG data from the board data using the specified EMG channels
            emg_data = data[self.emg_channels, :]

            # Preserve the SDK timestamp of the last sample, not publishing time
            latest_timestamp = data[self.timestamp_channel, -1]

            # Create a MultiArray message to publish the EMG data
            msg = MultiArray()
            msg.rows = int(emg_data.shape[0])
            msg.cols = int(emg_data.shape[1])
            msg.data = emg_data.flatten().tolist()
            msg.timestamp = float(latest_timestamp)
            self.raw_emg_publisher.publish(msg)

            self.get_logger().debug(f'Published EMG data at timestamp {latest_timestamp}')

        except Exception as e:
            self.get_logger().error(f'Failed to read or publish EMG: {e}')

    def destroy_node(self):
        """Stop the stream and release the MindRove session before shutting down"""
        if self.mindrove_connection is not None:
            try:
                if self.streaming:
                    self.mindrove_connection.stop_stream()
                self.mindrove_connection.release_session()
                self.get_logger().info('EMG_Read have stopped EMG stream and released MindRove session')
            except Exception as e:
                self.get_logger().error(f'Failed to release MindRove session: {e}')
        self.streaming = False
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = read_emg()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()




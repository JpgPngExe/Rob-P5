import rclpy
from rclpy.node import Node
import numpy as np
from scipy import signal
from mindrove.board_shim import BoardShim, BoardIds
from interfaces.msg import MultiArray, MultiArrayTime

class signal_processing(Node):
    def __init__(self):
        super().__init__('Signal_Processing')

        self.sampling_rate = BoardShim.get_sampling_rate(BoardIds.MINDROVE_WIFI_BOARD)   # Sampling rate in Hz
        self.n_channels = 8                                                              # Number of EMG channels

        # Declare parameters for topics and segmentation
        self.declare_parameter('input_topic', 'Raw_EMG')
        self.declare_parameter('output_topic', 'Processed_EMG')
        self.declare_parameter('window_ms', 200.0)     # Length of each window in ms
        self.declare_parameter('increment_ms', 50.0)   # Time between two windows in ms (50 ms = 20 Hz)

        # Get the parameter values
        self.input_topic = self.get_parameter('input_topic').get_parameter_value().string_value
        self.output_topic = self.get_parameter('output_topic').get_parameter_value().string_value
        window_ms = self.get_parameter('window_ms').get_parameter_value().double_value
        increment_ms = self.get_parameter('increment_ms').get_parameter_value().double_value

        # Convert the window length from ms to samples
        self.window_samples = int(round(window_ms / 1000 * self.sampling_rate))

        # Buffer with the most recent filtered samples (8 x window_samples at most)
        self.buffer = np.zeros((self.n_channels, 0))

        # Calculate filter coefficients and filter states
        self.filtering(self.sampling_rate)

        # Create a subscriber for the raw EMG data
        self.raw_emg_subscription = self.create_subscription(
            MultiArrayTime,
            self.input_topic,
            self.process_emg_callback,
            10
        )

        # Create a publisher for the processed EMG windows
        self.processed_emg_publisher = self.create_publisher(
            MultiArray,
            self.output_topic,
            10
        )

        # Create a timer that publishes the latest window at every increment
        self.publish_timer = self.create_timer(
            increment_ms / 1000,
            self.publish_window
        )

        self.get_logger().info(
            f'Signal Processing Node has been started '
            f'(window: {self.window_samples} samples, increment: {increment_ms} ms)'
        )

    def restructure_data(self, msg):
        """Restore the matrix from a flattened message"""
        return np.reshape(msg.data, (msg.rows, msg.cols))

    def prepare_data(self, data):
        """Flatten a matrix for publishing"""
        return data.shape[0], data.shape[1], data.flatten().tolist()

    def filtering(self, fs):
        # Create notch filters
        Q = 30.0                # Set the notch quality
        freq_notch = [50, 100]  # Set the frequencies to suppress in Hz

        self.b50, self.a50 = signal.iirnotch(freq_notch[0], Q, fs)     # Coefficients for the 50 Hz notch filter
        self.b100, self.a100 = signal.iirnotch(freq_notch[1], Q, fs)   # Coefficients for the 100 Hz notch filter

        # Create the butterworth band-pass filter
        filter_order = 4                # Set the order of the filter
        cut_off_frequencies = [20, 150] # Set the lower and upper cutoff frequencies in Hz

        self.b, self.a = signal.butter(
            filter_order, cut_off_frequencies, btype="bp", fs=fs    # Coefficients for the band-pass filter
        )

        # Create a separate filter state for each EMG channel
        self.zi50 = np.zeros((self.n_channels, len(self.a50)-1))
        self.zi100 = np.zeros((self.n_channels, len(self.a100)-1))
        self.zi_bandpass = np.zeros((self.n_channels, len(self.a)-1))

    def process(self, emg_data):
        """Apply filtering to an incoming block of EMG, keeping the filter state between blocks"""

        filtered, self.zi50 = signal.lfilter(
            self.b50, self.a50, emg_data, axis=1, zi=self.zi50       # Apply 50 Hz notch filter
        )
        filtered, self.zi100 = signal.lfilter(
            self.b100, self.a100, filtered, axis=1, zi=self.zi100    # Apply 100 Hz notch filter
        )
        filtered, self.zi_bandpass = signal.lfilter(
            self.b, self.a, filtered, axis=1, zi=self.zi_bandpass    # Apply 20-150 Hz band-pass filter
        )
        return filtered

    def process_emg_callback(self, msg):
        """Receive and filter a block of EMG data and add it to the buffer"""

        try:
            emg_data = self.restructure_data(msg)

            # Skip blocks without samples
            if emg_data.shape[1] == 0:
                return

            filtered = self.process(emg_data)
            n_new = filtered.shape[1]
            # Add the new samples and keep only the most recent window
            #self.buffer = np.hstack((self.buffer, filtered))[:, -self.window_samples:] #jnisbdgf
            self.buffer = np.roll(self.buffer, -n_new, axis=1)
            self.buffer[:, -n_new] = filtered
        except Exception as e:
            self.get_logger().error(f'Failed to process EMG: {e}')

    def publish_window(self):
        """Publish the most recent window of filtered EMG"""

        # Wait until the buffer contains a full window
        if self.buffer.shape[1] < self.window_samples:
            return

        try:
            rows, cols, values = self.prepare_data(self.buffer)

            msg = MultiArray()
            msg.rows = rows
            msg.cols = cols
            msg.data = values
            self.processed_emg_publisher.publish(msg)

            self.get_logger().debug(f'Published EMG window with {rows} rows and {cols} columns')

        except Exception as e:
            self.get_logger().error(f'Failed to publish EMG window: {e}')


def main(args=None):
    rclpy.init(args=args)
    node = signal_processing()
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
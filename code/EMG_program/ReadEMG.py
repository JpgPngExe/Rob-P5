from mindrove.board_shim import BoardShim, BoardIds, MindRoveInputParams


def read_mindrove(mindrove, emg_channels):
    """Read the available samples from the eight EMG channels"""

    data = mindrove.get_board_data()    # Read available samples from the SDK buffer
    emg_data = data[emg_channels, :]    # Select the eight channels

    return emg_data

def connect_mindrove():
    """Prepare the MindRove and start streaming"""

    # Setting parameters
    parameters = MindRoveInputParams()
    parameters.ip_address = "192.168.4.2"

    # Connect to MindRove
    mindrove_connection = BoardShim(BoardIds.MINDROVE_WIFI_BOARD, parameters)  # Create instance of mindrove using SDK class
    mindrove_connection.prepare_session()                                      # Pre setup
    mindrove_connection.start_stream()                                         # Start streaming data into SDK's internal buffer

    return mindrove_connection

def disconnect_mindrove(mindrove_disconnect):
    """Stop stream and release the MindRove session"""

    mindrove_disconnect.stop_stream()      # Stop data collection
    mindrove_disconnect.release_session()  # Release the session's resources

if __name__ == "__main__":
    # Connect to the MindRove
    mindrove = connect_mindrove()

    # Read device information and data while the connection is active
    try:
        # Get device information from the MindRove SDK
        emg_channels = BoardShim.get_exg_channels(BoardIds.MINDROVE_WIFI_BOARD)[:8] # Get the indices of the first eight EMG channels
        sampling_rate = BoardShim.get_sampling_rate(BoardIds.MINDROVE_WIFI_BOARD)   # Get the device's sampling rate in Hz
        print(emg_channels)
        # Read data
        emg_data = read_mindrove(mindrove, emg_channels)

    # Always attempt to close the connection after trying to read the device
    finally:
        # Close the connection
        disconnect_mindrove(mindrove)

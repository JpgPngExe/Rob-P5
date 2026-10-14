from mindrove.board_shim import BoardShim, BoardIds, MindRoveInputParams
import sys
import numpy as np
from scipy.signal import butter, lfilter
from PyQt5 import QtWidgets, QtCore
import pyqtgraph as pg
COM_port = "COM3"
params = MindRoveInputParams()
params.ip_address = '192.168.4.2'

board = BoardShim(BoardIds.MINDROVE_WIFI_BOARD, params)
board.prepare_session()
board.start_stream()


board_id = board.get_board_id()
exg_channels = BoardShim.get_exg_channels(board_id)[:8]
fs = BoardShim.get_sampling_rate(board_id)

# 2. Design Stateful Filter (Bandpass: 10 Hz to 200 Hz)
lowcut, highcut = 10.0, 200.0
nyq =0.5 * fs
b, a = butter(4, [lowcut /nyq, highcut / nyq], btype='band')

#Initialize internal state matrix (zi) for all 8 channels
zi = np.zeros((max(len(a), len(b)) - 1, 8))

# 3. Buffer and GUI Window Setup
buffer_size = 1000  # 2 seconds of visual history
data_buffer = np.zeros((8, buffer_size))

app = QtWidgets.QApplication(sys.argv)
win = pg.GraphicsLayoutWidget(show=True, title="Live EMG Stream")
win.resize(900, 700)

curves = []
colors = ['#FF5555' , '#55FF55', '#55FFFF', '#FFD700', '#FF55FF', '#FF9955', '#FFFFFF', '#AAAAAA']

for i in range(8):
    p = win.addPlot(row=i, col=0)
    p.showAxis('left', False)
    p.showAxis('bottom', False)
    p.setYRange(-300, 300)
    curve = p.plot(pen=pg.mkPen(color=colors[i], width=1.5))
    curves.append(curve)

def update():
    global zi, data_buffer
    
    # Fetch newly arrived samples
    new_data = board.get_board_data()
    n_new = new_data.shape[1]

    if n_new > 0:
        # Extract 8 channels and format as (samples, channels)
        raw_new = new_data[exg_channels, :].T

        # Filter ONLY the incoming chunk, carrying the state forward
        filt_new, zi = lfilter(b, a, raw_new, axis=0, zi=zi)

        #shift rolling display buffer
        if n_new >=buffer_size:
            data_buffer = filt_new[-buffer_size:, :].T
        else:
            data_buffer = np.roll(data_buffer, -n_new, axis=1)
            data_buffer[:, -n_new:] = filt_new.T

        # Draw updated traces
        for i in range(8):
            curves[i].setData(data_buffer[i, :])

timer = QtCore.QTimer()
timer.timeout.connect(update)
timer.start(50) #20 FPS

# 5. Clean Exit
try:
    sys.exit(app.exec_())
finally:
    if board.is_prepared():
        board.stop_stream()
        board.release_session()
    print("Board disconnected safely.")
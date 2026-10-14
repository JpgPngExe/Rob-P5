# import Mindrove_miniproject
import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QLabel, QVBoxLayout, QGridLayout
from PyQt5.QtCore import QTimer, QThread, pyqtSignal
import qdarkstyle
import pyqtgraph as pg
import numpy as np
from mindrove.board_shim import BoardShim, BoardIds, MindRoveInputParams
import sys
import numpy as np
from scipy.signal import butter, lfilter
import pyqtgraph as pg
class MindroveThread(QThread):
    data_recieved = pyqtSignal(np.ndarray)

    def run(self):
        ip_address = '192.168.4.2'
        params = MindRoveInputParams()
        params.ip_address = ip_address

        board = BoardShim(BoardIds.MINDROVE_WIFI_BOARD, params)
        board.prepare_session()
        board.start_stream()

        board_id = board.get_board_id()
        exg_channels = BoardShim.get_exg_channels(board_id)[:8]
        fs = BoardShim.get_sampling_rate(board_id)
        lowcut, highcut = 10.0, 200.0
        nyq =0.5 * fs
        b, a = butter(4, [lowcut /nyq, highcut / nyq], btype='band')

        #Initialize internal state matrix (zi) for all 8 channels
        zi = np.zeros((max(len(a), len(b)) - 1, 8))
        while True:
            new_data = board.get_board_data()
            if new_data.shape[1] > 0:
                raw = new_data[exg_channels, :].T
                filt_new, zi = lfilter(b,a,raw, axis=0, zi=zi)
                self.data_recieved.emit(filt_new.T)
            self.msleep(50)


class MitVindue(QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("Min første PyQt5-app")
        self.setGeometry(100, 100, 400, 200)

        self.label = QLabel("Hej verden!")

        self.knap = QPushButton("Klik her")

        self.knap.clicked.connect(self.knap_klikket)

        layout = QGridLayout()
        layout.addWidget(self.label, 1, 1)
        layout.addWidget(self.knap, 1, 0)
        
        
        
        self.curves = []
        self.graphs = []
        colors = ['#FF5555' , '#55FF55', '#55FFFF', '#FFD700', '#FF55FF', '#FF9955', '#FFFFFF', '#AAAAAA']
        for color in colors:
            plot = pg.PlotWidget()
            plot.setYRange(-300,300)
            layout.addWidget(plot, 0, 0, 1, 3)
            curve = plot.plot(pen=pg.mkPen(color=color, width=2))
            self.graphs.append(plot)
            self.curves.append(curve)
        self.setLayout(layout)
        self.buffer_size = 1000
        self.data_buffer = np.zeros((8, self.buffer_size))
        self.sensor = MindroveThread()
        self.sensor.data_recieved.connect(self.update_emg)
        self.sensor.start()
        
    def knap_klikket(self):
        self.label.setText("Knappen blev klikket!")

    def update_emg(self, data):
        n_new = data.shape[1]
        
        #shift rolling display buffer
        if n_new >= self.buffer_size:
            self.data_buffer = data[-self.buffer_size:, :].T
        else:
            self.data_buffer = np.roll(self.data_buffer, -n_new, axis=1)
            self.data_buffer[:, -n_new:] = data

        # Draw updated traces
        for i in range(8):
            self.curves[i].setData(self.data_buffer[i, :])

app = QApplication(sys.argv)
app.setStyleSheet(qdarkstyle.load_stylesheet_pyqt5())
vindue = MitVindue()
vindue.show()


sys.exit(app.exec_())
# import Mindrove_miniproject
import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QLabel, QVBoxLayout, QGridLayout
from PyQt5.QtCore import QTimer, QThread, pyqtSignal
import qdarkstyle
import pyqtgraph as pg
import numpy as np

def læs_sensor():
    data = np.random.normal(0, 10)
    return data

class SensorThread(QThread):
    data_modtaget = pyqtSignal(float)

    def run(self):
        while True:
            temperatur = læs_sensor()
            self.data_modtaget.emit(temperatur)
            self.msleep(10) #100 Hz

class MitVindue(QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("Min første PyQt5-app")
        self.setGeometry(100, 100, 400, 200)

        self.label = QLabel("Hej verden!")
        self.label2 = QLabel("Data!")

        self.knap = QPushButton("Klik her")

        self.knap.clicked.connect(self.knap_klikket)

        layout = QGridLayout()
        layout.addWidget(self.label, 1, 1)
        layout.addWidget(self.label2, 1, 1)
        layout.addWidget(self.knap, 1, 0)
        self.graph = pg.PlotWidget()
        layout.addWidget(self.graph, 0, 0, 1, 3)

        self.setLayout(layout)
        self.sensor = SensorThread()
        self.sensor.data_modtaget.connect(self.opdater_sensor)
        self.sensor.start()
        self.data = []

    def knap_klikket(self):
        self.label.setText("Knappen blev klikket!")

    def opdater_sensor(self, værdi):
        self.label2.setText(f"Sensor: {værdi:.3f}")
        self.data.append(værdi)
        if len(self.data) > 100:
            self.data.pop(0)

        self.graph.plot(self.data, clear=True)

app = QApplication(sys.argv)
app.setStyleSheet(qdarkstyle.load_stylesheet_pyqt5())
vindue = MitVindue()
vindue.show()


sys.exit(app.exec_())
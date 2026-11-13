import sys

from PyQt6.QtWidgets import (QApplication,
                            QWidget, QVBoxLayout, QHBoxLayout, QStackedLayout, QPushButton)
from PyQt6.QtCore import QTimer

from mindrove.board_shim import BoardShim, BoardIds

import ReadEMG
from SimulatedEMG import SimulatedEMG
from DataProcessing import EMGProcessing
from Visualizer import Visualizer
from CollectTrainingData import CollectTrainingData

use_emg = False

class MainWindow(QWidget):
    """Create the application's main window"""
    def __init__(self):
        super().__init__()

        # Create window
        self.setWindowTitle("EMG Data")     # Set titel
        self.setGeometry(0, 0, 1000, 780)   # Set size

        # ---------------------------------------------------------------------
        # EMG source. This is the ONLY place where the real and the simulated EMG
        # are told apart. Both branches must set sampling_rate and read_emg,
        # so the rest of the program does not need to know which source is used
        # ---------------------------------------------------------------------
        if use_emg == True:
            self.mindrove = ReadEMG.connect_mindrove()  # Read EMG data if use_emg is True
            self.emg_cannels = BoardShim.get_exg_channels(
                BoardIds.MINDROVE_WIFI_BOARD            #Get indices of the EMG channels
            )[:8]
            self.sampling_rate = BoardShim.get_sampling_rate(
                BoardIds.MINDROVE_WIFI_BOARD            # Get the sampling rate used by the EMG device
            )
            self.read_emg = lambda: ReadEMG.read_mindrove(
                self.mindrove, self.emg_cannels         # Read all samples that have arrived since the last call
            )
        else:
            self.simulated_emg = SimulatedEMG(sampling_rate=500)    # Start simulation
            self.sampling_rate = self.simulated_emg.sampling_rate   # Use the simulation's sampling rate (was missing before)
            self.read_emg = lambda: self.simulated_emg.generate_samples(25)  # Generate 50 ms of data at 500 Hz

        # Create the signal processor once to preserve filter states between block
        self.emg_processing = EMGProcessing(self.sampling_rate)

        # Create the main layout tabs as a stack
        self.tab_stack = QStackedLayout()                        # Create the tab stack
        self.visualizer_tab = Visualizer()                       # Create visualizer tab
        self.collect_training_data_tab = CollectTrainingData(
            self.sampling_rate, self.emg_processing              # The tab needs the sampling rate and the RMS value from the processor
        )                                                        # Create collect_training_data tab
        self.tab_stack.addWidget(self.visualizer_tab)            # Add visualizer tab to stack            Index 0
        self.tab_stack.addWidget(self.collect_training_data_tab) # Add collect_training_data tab to stack    Index 1

        # Creating tab navigation
        tab_navigation = QHBoxLayout()                                           # Create tab navigation
        self.visualizer_button = QPushButton("Visualizer")                       # Create "Visualizer" button
        self.collect_training_data_button = QPushButton("Collect training data") # Create "Collect trining data" button
        self.visualizer_button.clicked.connect(
            lambda: self.show_tab(0)                                             # Define butto "Visualizer" button to open "Visualizer"
        )
        self.collect_training_data_button.clicked.connect(
            lambda: self.show_tab(1)                                             # Define butto "Collect trining data" button to open "Collect trining data"
        )
        tab_navigation.addWidget(self.visualizer_button)                         # Add "Visualizer" button to navigation layout
        tab_navigation.addWidget(self.collect_training_data_button)              # Add "Collect trining data" button to navigation layout

        # Create main layout
        main_layout =  QVBoxLayout()            # Create the main layout
        main_layout.addLayout(tab_navigation)   # Placing navigation buttons for tabs in the top
        main_layout.addLayout(self.tab_stack)   # Placing the tab stack below the navigation buttons
        self.setLayout(main_layout)             # Set main layout

        # Read and display new data every 50 milliseconds
        self.data_timer = QTimer(self)                      # Create a timer
        self.data_timer.timeout.connect(self.update_data)   # Define which method
        self.data_timer.start(50)                           # Start timer with 50 ms interval

    def show_tab(self, index):
        """Open a tab. A running measurement is stopped if the user leaves the data collection tab"""

        if index != 1:
            self.collect_training_data_tab.abort_running()  # The tab no longer receives data, so a running measurement cannot continue

        self.tab_stack.setCurrentIndex(index)               # Show the selected tab

    def update_data(self):
        """Read new samples, filter them once and send them to the active tab"""

        emg_data = self.read_emg()      # Get the newest block of raw EMG (from the armband or the simulation)

        # Filter every block exactly once. This must happen every time, also when no tab uses the result,
        # because the filters remember the previous samples and the latest 250 ms is kept ready for the RMS
        filtered, rectified = self.emg_processing.process(emg_data)

        if self.tab_stack.currentIndex() == 0:
            self.visualizer_tab.update_buffer(filtered)     # Store the filtered signal history (the sign is kept)
            self.visualizer_tab.update_graph()              # Display selected signal (the visualizer rectifies if the checkbox is checked)

        elif self.tab_stack.currentIndex() == 1:
            self.collect_training_data_tab.receive_data(filtered)   # Give the new samples to the data collection tab

    def closeEvent(self, event):
        """Stop the timer and release the armband when the window is closed"""

        self.data_timer.stop()                  # Stop reading data

        if use_emg == True:
            ReadEMG.disconnect_mindrove(self.mindrove)  # Stop the stream and release the MindRove session

        super().closeEvent(event)               # Let Qt close the window as normal

if __name__ == "__main__":
    # Create the Qt application
    app = QApplication(sys.argv)

    # Create  and show the main window
    window = MainWindow()
    window.show()

    # Start the event loop for application
    sys.exit(app.exec())

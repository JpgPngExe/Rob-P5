import os
import csv
from datetime import datetime

import numpy as np
import pyqtgraph as pg
from PyQt6.QtWidgets import (QWidget, QVBoxLayout, QHBoxLayout, QStackedLayout,
                            QPushButton, QLabel, QLineEdit, QComboBox)

# =============================================================================
# This tab collects EMG training data. It follows the first two boxes of Fig. 3 in Electrode reduction 2022:
#   MVC measurement  ->  Recording procedure {30% and 60% MVC}  ->  save
#
# The tab has four pages that are shown one at a time:
#   Page 0  Setup : write the participant ID and choose the gesture
#   Page 1  MVC   : measure the maximum voluntary contraction (MVC) of that gesture
#   Page 2  Test  : follow the blue curve (the target in % MVC), the green curve is the participant's live % MVC
#   Page 3  Save  : save the plateaus to the common CSV file, or discard them, then repeat or start over
#
# The tab never reads the EMG device itself. Main.py filters every block of samples and gives it to receive_data()
# =============================================================================

# ----------------------------- Settings (change here) ------------------------

# Gestures. The position in the list is the gesture index written in the CSV file (supination=1, pronation=2, other=0)
GESTURES = ["Supination", "Pronation", "Other"]

# MVC measurement (seconds)
MVC_PREPARE = 2     # Countdown after pressing Start, so the participant is ready before the measurement begins
MVC_HOLD = 3        # The participant contracts as hard as is still comfortable for this long

# Recording procedure (seconds). Fig. 4a in Electrode reduction 2022
LEAD_IN = 4         # Rest at the start of the test
RAMP = 1            # Time to go from rest to the level, and from the level back to rest
PLATEAU = 5         # Time the level is held
PAUSE = 5           # Rest between two contractions
TAIL = 4            # Rest at the end of the test
LEVELS = (30, 60)   # The levels in % MVC. They are repeated in this order, so six contractions are 30, 60, 30, 60, 30, 60
TRIM = 1            # Seconds removed from the start and the end of each plateau. Only the middle of the plateau is saved

# The number of contractions the user can choose between in the test
CONTRACTION_OPTIONS = ["2", "4", "6"]

# Which signal is written to the CSV file. False: filtered signal with sign. True: filtered and rectified (absolute) signal
# Rectifying cannot be undone later, but the sign can always be removed afterwards, so the signal with sign is the default
SAVE_RECTIFIED = False

# One common CSV file for all participants and gestures. It is placed next to this program
CSV_FILE = os.path.join(os.path.dirname(os.path.abspath(__file__)), "training_data.csv")

# Column names in the CSV file
CSV_HEADER = [f"ch{channel}" for channel in range(1, 9)] + ["gesture"] + ["recording", "participant_id", "level", "mvc", "contraction", "time_s"]

# Page numbers in the page stack
PAGE_SETUP = 0
PAGE_MVC = 1
PAGE_TEST = 2
PAGE_SAVE = 3


def build_profile(contraction_count):
    """Build the target profile (the blue curve) for a test.

    Returns the corner points of the curve (times and values), the plateaus as (start, end, level)
    in seconds, and the time when the test ends in seconds.
    """

    times = [0, LEAD_IN]        # Corner points of the curve. The test starts with rest, until LEAD_IN
    values = [0, 0]
    plateaus = []               # (start, end, level) of every plateau
    time = LEAD_IN              # Time at the end of what has been built so far

    for contraction in range(contraction_count):
        level = LEVELS[contraction % len(LEVELS)]   # Repeat the levels in order

        ramp_up_end = time + RAMP                   # The level is reached after the ramp
        plateau_end = ramp_up_end + PLATEAU         # The level is held for the plateau
        ramp_down_end = plateau_end + RAMP          # Back at rest after the second ramp

        times += [ramp_up_end, plateau_end, ramp_down_end]  # Add the three new corner points
        values += [level, level, 0]
        plateaus.append((ramp_up_end, plateau_end, level))  # Remember where the plateau is

        time = ramp_down_end                        # Continue from the end of this contraction

        if contraction < contraction_count - 1:     # A pause is only needed between two contractions
            time += PAUSE
            times.append(time)
            values.append(0)

    test_end = time + TAIL                          # Rest at the end of the test
    times.append(test_end)
    values.append(0)

    return times, values, plateaus, test_end


class CollectTrainingData(QWidget):
    """Create the training data collection tab"""

    def __init__(self, sampling_rate, emg_processing):
        super().__init__()

        self.fs = sampling_rate                 # Samples per second, used to turn sample counts into seconds
        self.emg_processing = emg_processing    # Gives the RMS value of the latest 250 ms when asked

        # --- What the tab remembers ---
        self.participant = ""           # Participant ID
        self.gesture_index = 0          # Index in GESTURES
        self.mvc = None                 # MVC of the chosen gesture. None until it has been measured

        self.mvc_running = False        # True while the MVC measurement is running
        self.mvc_samples = 0            # Number of samples received since Start was pressed in the MVC measurement
        self.mvc_values = []            # RMS value from every block during the hold, the MVC is the mean of these

        self.test_running = False       # True while the test is running
        self.test_samples = 0           # Number of samples received since Start was pressed in the test
        self.green_times = []           # Times of the live curve
        self.green_percent = []         # Values of the live curve in % MVC
        self.segments = []              # One entry per plateau with the samples to save
        self.recording_id = ""          # Identifies the test (the time it ended), so tests of the same person can be told apart
        self.profile_times = []         # The blue curve
        self.profile_values = []
        self.plateaus = []
        self.test_end = 0               # Time the test ends in seconds

        # --- Layout ---
        # A line on top that always shows who is measured, and below it the four pages
        self.info_label = QLabel()                  # Shows participant, gesture and MVC
        self.info_label.setStyleSheet("font-size: 14px; font-weight: bold;")

        self.page_stack = QStackedLayout()          # The pages are shown one at a time
        self.page_stack.addWidget(self.create_setup_page())     # Index 0
        self.page_stack.addWidget(self.create_mvc_page())       # Index 1
        self.page_stack.addWidget(self.create_test_page())      # Index 2
        self.page_stack.addWidget(self.create_save_page())      # Index 3

        main_layout = QVBoxLayout()                 # Info line on top, pages below
        main_layout.addWidget(self.info_label)
        main_layout.addLayout(self.page_stack)
        self.setLayout(main_layout)

        self.update_info()                          # Write the info line for the first time

    # =========================================================================
    # Creating the pages
    # =========================================================================

    def create_setup_page(self):
        """Page 0: participant ID and gesture"""

        page = QWidget()
        layout = QVBoxLayout()
        page.setLayout(layout)

        self.id_input = QLineEdit()                         # The participant ID is written here
        self.id_input.setPlaceholderText("Participant ID")
        self.gesture_box = QComboBox()                      # The gesture is chosen here
        self.gesture_box.addItems(GESTURES)
        self.setup_message = QLabel("")                     # Shows a message if the ID is missing
        self.setup_message.setStyleSheet("color: red;")
        next_button = QPushButton("Next: measure MVC")
        next_button.clicked.connect(self.setup_done)        # Go to the MVC page

        layout.addWidget(QLabel("Participant ID:"))
        layout.addWidget(self.id_input)
        layout.addWidget(QLabel("Gesture:"))
        layout.addWidget(self.gesture_box)
        layout.addWidget(self.setup_message)
        layout.addWidget(next_button)
        layout.addStretch()                                 # Push everything to the top of the page

        return page

    def create_mvc_page(self):
        """Page 1: measure the MVC"""

        page = QWidget()
        layout = QVBoxLayout()
        page.setLayout(layout)

        instruction = QLabel(
            "Press Start. When it says CONTRACT, contract as hard as is still comfortable "
            "and hold it until the time is up."
        )
        instruction.setWordWrap(True)                       # Break long text into several lines
        self.mvc_status = QLabel()                          # Shows the countdown, the live RMS and the result
        self.mvc_status.setStyleSheet("font-size: 18px;")
        self.mvc_start_button = QPushButton()               # The text is set in refresh_mvc_page()
        self.mvc_start_button.clicked.connect(self.start_mvc)
        self.mvc_back_button = QPushButton("Back")
        self.mvc_back_button.clicked.connect(
            lambda: self.page_stack.setCurrentIndex(PAGE_SETUP)     # Go back to change the ID or the gesture
        )
        self.mvc_next_button = QPushButton("Next: test")
        self.mvc_next_button.clicked.connect(self.mvc_done)

        buttons = QHBoxLayout()                             # The two navigation buttons next to each other
        buttons.addWidget(self.mvc_back_button)
        buttons.addWidget(self.mvc_next_button)

        layout.addWidget(instruction)
        layout.addWidget(self.mvc_status)
        layout.addWidget(self.mvc_start_button)
        layout.addLayout(buttons)
        layout.addStretch()

        return page

    def create_test_page(self):
        """Page 2: the test with the blue target curve and the green live curve"""

        page = QWidget()
        layout = QVBoxLayout()
        page.setLayout(layout)

        # Choose the number of contractions
        self.contraction_box = QComboBox()
        self.contraction_box.addItems(CONTRACTION_OPTIONS)  # 2, 4 or 6 contractions
        self.contraction_box.setCurrentIndex(0)             # Start with two contractions
        self.contraction_box.currentIndexChanged.connect(
            lambda index: self.prepare_test()               # Build a new blue curve when the number is changed
        )
        choose_row = QHBoxLayout()
        choose_row.addWidget(QLabel("Number of contractions:"))
        choose_row.addWidget(self.contraction_box)

        # The graph
        self.test_plot = pg.PlotWidget()
        self.test_plot.setLabel("left", "% MVC")            # Y-label
        self.test_plot.setLabel("bottom", "Time (s)")       # X-label
        self.test_plot.setYRange(0, 120, padding=0)         # Show 0 to 120 % MVC without additional margin
        self.test_plot.setMouseEnabled(x=False, y=False)    # Keep the view fixed during mouse interaction
        self.profile_curve = self.test_plot.plot(pen=pg.mkPen("b", width=2))    # Blue: what the participant should do
        self.green_curve = self.test_plot.plot(pen=pg.mkPen("g", width=2))      # Green: what the participant does

        self.test_status = QLabel()                         # Shows the time and messages
        self.test_status.setStyleSheet("font-size: 16px;")
        self.test_start_button = QPushButton("Start test")
        self.test_start_button.clicked.connect(self.start_test)
        self.test_back_button = QPushButton("Back")
        self.test_back_button.clicked.connect(
            lambda: self.go_to_mvc_page()                   # Go back to measure the MVC again
        )

        buttons = QHBoxLayout()
        buttons.addWidget(self.test_back_button)
        buttons.addWidget(self.test_start_button)

        layout.addLayout(choose_row)
        layout.addWidget(self.test_plot)
        layout.addWidget(self.test_status)
        layout.addLayout(buttons)

        # Build the first blue curve. The widgets above must exist before this is called
        self.prepare_test()

        return page

    def create_save_page(self):
        """Page 3: save or discard the test, then repeat or start over"""

        page = QWidget()
        layout = QVBoxLayout()
        page.setLayout(layout)

        self.save_summary = QLabel()                        # Describes what will be saved
        self.save_summary.setWordWrap(True)
        self.save_status = QLabel()                         # Shows the result of saving
        self.save_status.setWordWrap(True)
        self.save_button = QPushButton("Save")
        self.save_button.clicked.connect(self.save_test)
        self.discard_button = QPushButton("Do not save")
        self.discard_button.clicked.connect(self.discard_test)
        self.again_button = QPushButton("Another test (same participant and gesture)")
        self.again_button.clicked.connect(self.another_test)
        self.new_button = QPushButton("New participant or gesture")
        self.new_button.clicked.connect(self.new_participant_or_gesture)

        decision = QHBoxLayout()                            # Save and do not save next to each other
        decision.addWidget(self.save_button)
        decision.addWidget(self.discard_button)

        layout.addWidget(self.save_summary)
        layout.addLayout(decision)
        layout.addWidget(self.save_status)
        layout.addWidget(self.again_button)
        layout.addWidget(self.new_button)
        layout.addStretch()

        return page

    # =========================================================================
    # Page 0: setup
    # =========================================================================

    def setup_done(self):
        """Check the participant ID, remember the choices and go to the MVC page"""

        participant = self.id_input.text().strip()          # Remove spaces at the start and the end
        if participant == "":
            self.setup_message.setText("Write a participant ID first")
            return                                          # Stay on this page

        self.setup_message.setText("")                      # Remove an earlier message
        self.participant = participant
        self.gesture_index = self.gesture_box.currentIndex()    # Position in GESTURES, this is the gesture index in the CSV file
        self.mvc = None                                     # A new participant or gesture needs a new MVC

        self.go_to_mvc_page()

    # =========================================================================
    # Page 1: MVC
    # =========================================================================

    def go_to_mvc_page(self):
        """Show the MVC page with the status that matches what has been measured"""

        self.refresh_mvc_page()
        self.page_stack.setCurrentIndex(PAGE_MVC)

    def refresh_mvc_page(self):
        """Update the texts and buttons on the MVC page and the info line"""

        if self.mvc is None:
            self.mvc_status.setText("No MVC measured yet")
            self.mvc_start_button.setText("Start MVC measurement")
        else:
            self.mvc_status.setText(f"MVC = {self.mvc:.2f}. Measure again to replace it, or continue")
            self.mvc_start_button.setText("Measure again")

        self.mvc_start_button.setEnabled(True)
        self.mvc_back_button.setEnabled(True)
        self.mvc_next_button.setEnabled(self.mvc is not None)   # The test cannot start without an MVC
        self.update_info()

    def start_mvc(self):
        """Start the MVC measurement"""

        self.mvc_running = True
        self.mvc_samples = 0                                # Start counting samples
        self.mvc_values = []                                # Forget values from an earlier measurement

        self.mvc_start_button.setEnabled(False)             # Nothing can be pressed while measuring
        self.mvc_back_button.setEnabled(False)
        self.mvc_next_button.setEnabled(False)

    def update_mvc(self, sample_count):
        """Handle one block of samples during the MVC measurement"""

        self.mvc_samples += sample_count                    # Count the samples, so the time follows the signal
        elapsed = self.mvc_samples / self.fs                # Seconds since Start was pressed
        hold_end = MVC_PREPARE + MVC_HOLD                   # The time when the measurement is over

        if elapsed < MVC_PREPARE:
            self.mvc_status.setText(f"Get ready... {MVC_PREPARE - elapsed:.1f} s")

        elif elapsed < hold_end:
            rms = self.emg_processing.rms_mean()            # RMS of the latest 250 ms, averaged over the channels
            self.mvc_values.append(rms)                     # Collect one value per block
            self.mvc_status.setText(f"CONTRACT! {hold_end - elapsed:.1f} s left   (RMS {rms:.1f})")

        else:
            self.finish_mvc()

    def finish_mvc(self):
        """Calculate the MVC from the values collected during the hold"""

        self.mvc_running = False

        # The MVC is the mean of the RMS values over the whole hold (the method in Electrode reduction 2022)
        if len(self.mvc_values) > 0:
            new_mvc = float(np.mean(self.mvc_values))
        else:
            new_mvc = 0.0

        if new_mvc > 0:
            self.mvc = new_mvc                              # The latest measurement replaces the earlier one
            self.refresh_mvc_page()                         # Show the result and enable the buttons
        else:
            self.refresh_mvc_page()                         # Keep an earlier MVC if there is one
            self.mvc_status.setText("The measurement failed (no signal). Try again")

    def mvc_done(self):
        """Go from the MVC page to the test page"""

        self.prepare_test()
        self.page_stack.setCurrentIndex(PAGE_TEST)

    # =========================================================================
    # Page 2: test
    # =========================================================================

    def prepare_test(self):
        """Build the blue curve for the chosen number of contractions and make the page ready"""

        contraction_count = int(self.contraction_box.currentText())     # 2, 4 or 6
        self.profile_times, self.profile_values, self.plateaus, self.test_end = build_profile(contraction_count)

        self.profile_curve.setData(self.profile_times, self.profile_values)     # Draw the blue curve
        self.test_plot.setXRange(0, self.test_end, padding=0)                   # Fit the time axis to the test
        self.green_curve.setData([], [])                                        # Remove the green curve from an earlier test

        self.test_status.setText("Press Start test when the participant is ready")
        self.set_test_controls(running=False)
        self.update_info()

    def set_test_controls(self, running):
        """Disable the controls while the test is running"""

        self.test_start_button.setEnabled(not running)
        self.test_back_button.setEnabled(not running)
        self.contraction_box.setEnabled(not running)

    def start_test(self):
        """Start the test"""

        self.test_running = True
        self.test_samples = 0                               # The first sample of the test is sample 0
        self.green_times = []                               # Start with an empty green curve
        self.green_percent = []
        self.green_curve.setData([], [])

        # Make one entry for each plateau. Only the samples inside the entry's range are saved
        self.segments = []
        for number, (start, end, level) in enumerate(self.plateaus, start=1):
            self.segments.append({
                "contraction": number,                      # 1, 2, 3 ...
                "level": level,                             # 30 or 60
                "first": round((start + TRIM) * self.fs),   # First sample to save (the first second of the plateau is skipped)
                "last": round((end - TRIM) * self.fs),      # First sample NOT to save (the last second of the plateau is skipped)
                "blocks": [],                               # The saved samples are collected here
            })

        self.set_test_controls(running=True)

    def update_test(self, filtered):
        """Handle one block of samples during the test"""

        sample_count = filtered.shape[1]
        block_start = self.test_samples                     # Sample number of the first sample in this block
        block_end = block_start + sample_count              # Sample number after the last sample in this block
        self.test_samples = block_end
        time_now = block_end / self.fs                      # Time in seconds since the test started

        # Live curve: the current RMS as % of the MVC
        rms = self.emg_processing.rms_mean()                # RMS of the latest 250 ms, averaged over the channels
        self.green_times.append(time_now)
        self.green_percent.append(rms / self.mvc * 100)     # 100 % is the MVC
        self.green_curve.setData(self.green_times, self.green_percent)
        # Det er her der er et problem



        # Saving: keep the part of this block that lies inside a plateau (without the first and last second)
        if SAVE_RECTIFIED:
            to_save = np.abs(filtered)                      # Save the absolute value
        else:
            to_save = filtered                              # Save the filtered signal with its sign

        for segment in self.segments:
            first = max(segment["first"], block_start)      # The overlap between this block and the segment
            last = min(segment["last"], block_end)
            if first < last:
                segment["blocks"].append(
                    to_save[:, first - block_start:last - block_start].copy()   # Columns are samples
                )

        # Show the time and stop when the test is over
        if time_now >= self.test_end:
            self.finish_test()
        else:
            self.test_status.setText(f"Time: {time_now:.1f} / {self.test_end:.0f} s")

    def finish_test(self):
        """Collect what should be saved and go to the save page"""

        self.test_running = False
        self.set_test_controls(running=False)

        # Join the blocks of every plateau into one array with eight rows
        sample_total = 0
        for segment in self.segments:
            if len(segment["blocks"]) > 0:
                segment["data"] = np.concatenate(segment["blocks"], axis=1)
            else:
                segment["data"] = np.zeros((8, 0))          # Nothing was received for this plateau
            sample_total += segment["data"].shape[1]

        self.recording_id = datetime.now().strftime("%Y%m%d_%H%M%S")    # Tells this test apart from other tests

        self.save_summary.setText(
            f"Test finished. Participant {self.participant}, gesture {GESTURES[self.gesture_index]}, "
            f"MVC {self.mvc:.2f}.\n"
            f"{len(self.segments)} contractions, {sample_total} samples per channel are ready to be saved."
        )
        self.save_status.setText("")
        self.save_button.setEnabled(True)                   # Decide first ...
        self.discard_button.setEnabled(True)
        self.again_button.setEnabled(False)                 # ... then choose what to do next
        self.new_button.setEnabled(False)
        self.page_stack.setCurrentIndex(PAGE_SAVE)

    # =========================================================================
    # Page 3: save
    # =========================================================================

    def save_test(self):
        """Append the test to the CSV file"""

        try:
            row_count = self.write_csv()
        except OSError as error:
            # Typically the file is open in another program (for example Excel). The test is kept, so Save can be pressed again
            self.save_status.setText(f"Could not save: {error}\nClose the file if it is open in another program and press Save again")
            return

        self.save_status.setText(f"Saved {row_count} rows to {CSV_FILE}")
        self.after_decision()

    def write_csv(self):
        """Add the saved plateaus to the end of the CSV file and return the number of rows written"""

        # The header is only written when the file is new (or empty)
        write_header = (not os.path.isfile(CSV_FILE)) or os.path.getsize(CSV_FILE) == 0
        
        row_count = 0
        with open(CSV_FILE, "a", newline="") as file:       # "a" adds to the end and keeps what is already in the file
            writer = csv.writer(file)

            if write_header:
                writer.writerow(CSV_HEADER)

            for segment in self.segments:
                samples = segment["data"].T.tolist()        # One list of eight values per sample
                for index, sample in enumerate(samples):
                    time_s = (segment["first"] + index) / self.fs   # Seconds since the test started
                    writer.writerow(
                        [round(value, 4) for value in sample]                       # ch1 ... ch8
                        + [self.gesture_index]                                      # gesture
                        + [self.recording_id, self.participant, segment["level"],   # de andre, i samme rækkefølge som i headeren
                        round(self.mvc, 4), segment["contraction"], round(time_s, 4)]
                    )
                    row_count += 1

        return row_count

    def discard_test(self):
        """Throw the test away"""

        self.save_status.setText("The test was not saved")
        self.after_decision()

    def after_decision(self):
        """Saving or discarding is done, so the next step can be chosen"""

        self.save_button.setEnabled(False)
        self.discard_button.setEnabled(False)
        self.again_button.setEnabled(True)
        self.new_button.setEnabled(True)

    def another_test(self):
        """Run another test with the same participant, gesture and MVC"""

        self.prepare_test()
        self.page_stack.setCurrentIndex(PAGE_TEST)

    def new_participant_or_gesture(self):
        """Go back to the first page"""

        self.id_input.setText(self.participant)             # Suggest the same ID, it can be changed
        self.gesture_box.setCurrentIndex(self.gesture_index)
        self.page_stack.setCurrentIndex(PAGE_SETUP)

    # =========================================================================
    # Used by Main.py
    # =========================================================================

    def receive_data(self, filtered):
        """Receive a block of filtered samples (rows are channels). Main.py only calls this when the tab is shown"""

        if filtered.shape[1] == 0:
            return                                          # Nothing new

        if self.mvc_running:
            self.update_mvc(filtered.shape[1])              # The MVC page is measuring
        elif self.test_running:
            self.update_test(filtered)                      # The test page is running

    def abort_running(self):
        """Stop a running measurement or test (the tab stops receiving data when another tab is opened)"""

        if self.mvc_running:
            self.mvc_running = False
            self.refresh_mvc_page()                         # Back to the state before Start was pressed
            self.mvc_status.setText("The measurement was stopped. Press Start to measure again")

        if self.test_running:
            self.test_running = False
            self.prepare_test()                             # Clears the green curve and enables the controls
            self.test_status.setText("The test was stopped. Press Start test to begin again")

    def update_info(self):
        """Write participant, gesture and MVC on the info line"""

        if self.participant == "":
            self.info_label.setText("No participant chosen yet")
            return

        if self.mvc is None:
            mvc_text = "not measured"
        else:
            mvc_text = f"{self.mvc:.2f}"

        self.info_label.setText(
            f"Participant: {self.participant}    Gesture: {GESTURES[self.gesture_index]}    MVC: {mvc_text}"
        )

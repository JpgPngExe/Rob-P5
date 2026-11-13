from scipy import signal
import numpy as np

# Length of the window used for the RMS value in seconds (250 ms, as in Electrode reduction 2022)
RMS_WINDOW = 0.25

class EMGProcessing:
    """Process incoming EMG data"""

    def __init__(self, fs):
        # Create notch filters
        Q = 30.0                # Set the notch quailty
        freq_notch = [50, 100]  # Set the frequencies to suppress in Hz

        self.b50, self.a50 = signal.iirnotch(freq_notch[0], Q, fs)     # Calculate coefficients for the 50 Hz notch filter
        self.b100, self.a100 = signal.iirnotch(freq_notch[1], Q, fs)   # Calculate coefficients for the 100 Hz notch filter

        # Create the butterworth band-pass filter
        filter_order = 4                # Set the order of the filter
        cut_off_frequencies = [20, 150] # Set the lower and upper cutoff frequencies in Hz

        self.b, self.a = signal.butter(
            filter_order, cut_off_frequencies, btype="bp", fs=fs    # Calculate coefficients for the band-pass filter
        )

        # Create a separate filter state for each EMG channel
        self.zi50 = np.zeros((8, len(self.a50)-1))
        self.zi100 = np.zeros((8, len(self.a100)-1))
        self.zi_bandpass = np.zeros((8, len(self.a)-1))

        # Create a buffer holding the latest 250 ms of filtered samples (used for the RMS value)
        self.rms_window_samples = round(RMS_WINDOW * fs)                 # Number of samples in 250 ms at this sampling rate
        self.rms_buffer = np.zeros((8, self.rms_window_samples))         # One row per channel, the newest sample at the right end

    def process(self, emg_data):
        """apply filtering to an incoming block of EMG"""

        if emg_data.shape[1] == 0:
            return emg_data, emg_data     # Return without filtering if the block is empty

        filtered, self.zi50 = signal.lfilter(
            self.b50, self.a50, emg_data, axis=1, zi=self.zi50       # Apply 50 notch filter
        )
        filtered, self.zi100 = signal.lfilter(
            self.b100, self.a100, filtered, axis=1, zi=self.zi100    # Apply 100 notch filter
        )
        filtered, self.zi_bandpass = signal.lfilter(
            self.b, self.a, filtered, axis=1, zi=self.zi_bandpass    # Apply 20-150 Hz bandpass filter
        )

        rectified = np.abs(filtered)    # Convert negative amplitudes to positive values

        self.update_rms_buffer(filtered)    # Keep the latest 250 ms ready (only stores samples, no RMS is calculated here)

        return filtered, rectified

    def update_rms_buffer(self, filtered):
        """Add new filtered samples to the 250 ms buffer and discard the oldest samples"""

        sample_count = filtered.shape[1]    # Get the number of new samples

        if sample_count >= self.rms_window_samples:
            self.rms_buffer = filtered[:, -self.rms_window_samples:].copy()     # Keep only the latest samples if the block fills the buffer
        else:
            self.rms_buffer = np.roll(
                self.rms_buffer, -sample_count, axis=1      # Shift existing samples left to make room for the new samples
            )
            self.rms_buffer[:, -sample_count:] = filtered   # Insert the new samples at the right end of the buffer

    def rms(self):
        """Return the RMS value of each channel over the latest 250 ms (calculated when called)"""

        return np.sqrt(np.mean(self.rms_buffer ** 2, axis=1))   # Square, average over the window and take the root, per channel

    def rms_mean(self):
        """Return the RMS value averaged over all channels (the value used for MVC and %MVC)"""

        return float(np.mean(self.rms()))   # Average the eight channel RMS values to one number

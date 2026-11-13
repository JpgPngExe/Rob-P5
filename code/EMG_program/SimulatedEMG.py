import numpy as np


class SimulatedEMG:
    """Generate simulated raw EMG data for eight channels.

    Each channel has a changing activity level that controls its amplitude.
    Slow drift and 50/100 Hz interference are added to test preprocessing.

    Returned data have channels as rows and samples as columns, matching
    the format returned by read_mindrove().

    This is a development signal, not a physiological model of muscle activity.
    """

    def __init__(self, sampling_rate=500):
        # Set signal parameters
        self.sampling_rate = sampling_rate       # Number of samples per second per channel
        self.channel_count = 8                   # Number of simulated EMG channels
        self.sample_index = 0                    # Track time continuously between generated blocks

        # Create the random number generator
        self.random = np.random.default_rng()

        # Set the initial activity for each channel
        self.activity = np.full(self.channel_count, 0.05)  # Start all channels at a low activity level
        self.target_activity = self.activity.copy()       # Activity levels the channels move towards
        self.samples_until_change = 0                     # Select new target levels on the first sample

        # Set how quickly activity changes
        self.transition_time = 0.15                       # Approximate transition time in seconds
        self.transition_factor = (
            1 - np.exp(-1 / (self.sampling_rate * self.transition_time))
        )                                                # Calculate the change applied per sample

        # Set signal amplitudes in illustrative test units
        self.noise_level = 3.0                            # Background noise when a channel is inactive
        self.activity_amplitude = 100.0                   # Additional noise amplitude at full activity
        self.drift_amplitude = 20.0                       # Amplitude of the slow baseline drift
        self.interference_50 = 10.0                       # Amplitude of the 50 Hz interference
        self.interference_100 = 5.0                       # Amplitude of the 100 Hz interference

        # Set one offset and phase per channel
        self.dc_offset = np.zeros(self.channel_count)     # Constant baseline offset for each channel
        self.phase = self.random.uniform(
            0, 2 * np.pi, self.channel_count
        )                                                # Give the channels different starting phases

    def generate_samples(self, sample_count):
        """Generate a block with eight rows and sample_count columns."""

        # Create an array for the requested block
        emg_data = np.empty((self.channel_count, sample_count))

        for sample in range(sample_count):
            # Choose a new activity pattern when the previous period ends
            if self.samples_until_change <= 0:
                active_channels = (
                    self.random.random(self.channel_count) < 0.5
                )                                        # Give each channel a 50% chance of being active

                self.target_activity = np.where(
                    active_channels,
                    self.random.uniform(0.3, 1.0, self.channel_count),
                    self.random.uniform(0.02, 0.08, self.channel_count)
                )                                        # Assign higher targets to active channels

                self.samples_until_change = int(
                    self.random.uniform(0.5, 2.0) * self.sampling_rate
                )                                        # Keep the targets for approximately 0.5–2 seconds

            # Move each channel gradually towards its target activity
            self.activity += self.transition_factor * (
                self.target_activity - self.activity
            )

            # Generate random noise with an amplitude determined by activity
            amplitude = self.noise_level + self.activity_amplitude * self.activity
            muscle_signal = self.random.normal(
                0, amplitude, self.channel_count
            )

            # Calculate the time of this sample
            time = self.sample_index / self.sampling_rate

            # Generate slow baseline drift
            drift = self.drift_amplitude * np.sin(
                2 * np.pi * 0.3 * time + self.phase
            )

            # Generate interference at 50 Hz and 100 Hz
            interference = (
                self.interference_50
                * np.sin(2 * np.pi * 50 * time + self.phase)
                + self.interference_100
                * np.sin(2 * np.pi * 100 * time + self.phase)
            )

            # Combine the signal components for all eight channels
            emg_data[:, sample] = (
                muscle_signal + drift + interference + self.dc_offset
            )

            # Advance the simulation by one sample
            self.sample_index += 1
            self.samples_until_change -= 1

        return emg_data
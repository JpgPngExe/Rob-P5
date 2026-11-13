from PyQt6.QtWidgets import (QWidget, QGridLayout, QCheckBox)
import pyqtgraph as pg
import numpy as np

class Visualizer(QWidget):
    """Create the visualizer tab"""

    def __init__(self):
        super().__init__()

        # Create the visualizer layout
        self.visualizer_layout = QGridLayout()
        self.setLayout(self.visualizer_layout)

        # Create a buffer for the displayed signal history
        self.buffer_size = 1000
        self.data_buffer = np.zeros((8, self.buffer_size))

        # Creating graphs for each EMG channel
        self.channel_curve = []                             # Create list to hold curves   muligvis omformuler denne kommentar (ikke nu)
        self.channel_graphs = []                            # Create list to hold graphs
        for channel in range(8):                            # Repeat for each EMG channel
            graph = pg.PlotWidget()                         # Create the channels graph
            graph.setLabel("left", f"Ch {channel + 1}")     # Y-label with channel number
            graph.hideAxis("bottom")                        # Hide the X-axis
            graph.setYRange(-500, 500, padding=0)           # Set the Y-axisrange without additional margin
            curve = graph.plot()                            # Create an empty curve in the channel graph
            self.channel_curve.append(curve)
            self.channel_graphs.append(graph)               # Add the graph to list
            self.visualizer_layout.addWidget(
                graph, channel, 0                           # Placing graph in layout (graph, row, col)
            ) 

        # Create the spider graph and keep its update function
        self.spider_graph, self.update_spider = self.create_spider_graph()

        # Place the spider graph beside the eight channel graphs
        self.visualizer_layout.addWidget(self.spider_graph, 0, 1, 8, 1)

        # Select whether to display the rectified signal
        self.rectified_chaeckbox = QCheckBox("Rectified")
        self.rectified_chaeckbox.toggled.connect(
            lambda checked: self.rectified_changed()    # Update the y-axis and redraw the existing history when selection changes
        )
        self.visualizer_layout.addWidget(
            self.rectified_chaeckbox, 8, 0      # Place the checkbox
        )

    def update_buffer(self, emg_data):
        """"Addnew samples to the display buffer and dicard oldest samples"""

        sample_count = emg_data.shape[1]  # Get the number of samples

        if sample_count == 0:
            return                      # Leave the buffer unchange if no samples are available

        if sample_count >= self.buffer_size:
            self.data_buffer = emg_data[:, -self.buffer_size:].copy()     # Keep only latest samples if the new block fills the buffer
        else:
            self.data_buffer = np.roll(
                self.data_buffer, -sample_count, axis=1     # Shift existing samples left to make room for the new samples
            )

            self.data_buffer[:, -sample_count:] = emg_data      #Insert the new samples at the right end of the buffer


    def rectified_changed(self):
        """Adjust the y-axis to the selected signal type and redraw the history"""

        if self.rectified_chaeckbox.isChecked():
            y_min = 0           # A rectified signal has no negative values
        else:
            y_min = -500        # The signal oscillates around zero

        for graph in self.channel_graphs:
            graph.setYRange(y_min, 500, padding=0)  # Set the Y-axisrange without additional margin

        self.update_graph()     # Redraw the buffer with the new selection

    def update_graph(self):
        """Display the buffered channel signals and update the spider graph."""

        # The buffer always keeps the sign. Rectifying is only done when displaying
        if self.rectified_chaeckbox.isChecked():
            display_data = np.abs(self.data_buffer)
        else:
            display_data = self.data_buffer

        for channel, curve in enumerate(self.channel_curve):
            curve.setData(display_data[channel, :])  # Display this channel's buffered samples (selected signal type)

        self.update_spider(self.data_buffer[:, -1])      # Display the latest sample from each channel (the spider graph uses absolute values itself)


    def create_spider_graph(self, channel_count=8, maximum_value=500):
        """Create a spider graph and return its widget and update function.

        The update function accepts one value per channel.
        Absolute values are displayed, with maximum_value at the outer ring.
        """

        # Check that the graph has a usable scale
        if maximum_value <= 0:
            raise ValueError("maximum_value must be greater than zero")

        # Place the first channel at the top and the remaining channels clockwise
        angles = np.pi / 2 - np.linspace(
            0, 2 * np.pi, channel_count, endpoint=False
        )

        # Repeat the first angle to close the polygon
        closed_angles = np.append(angles, angles[0])

        # Create the graph widget
        graph = pg.PlotWidget()
        graph.setAspectLocked(True)                     # Keep equal scaling on the X- and Y-axes
        graph.hideAxis("bottom")                         # Hide the Cartesian X-axis
        graph.hideAxis("left")                           # Hide the Cartesian Y-axis
        graph.setMouseEnabled(x=False, y=False)          # Keep the view fixed during mouse interaction
        graph.setRange(
            xRange=(-1.3, 1.3),
            yRange=(-1.3, 1.3),
            padding=0
        )                                               # Leave space for labels outside the outer ring

        # Create the grid rings
        grid_pen = pg.mkPen(color=(90, 90, 90), width=1)

        for level in (0.25, 0.5, 0.75, 1.0):
            x = level * np.cos(closed_angles)            # Calculate the horizontal position of each corner
            y = level * np.sin(closed_angles)            # Calculate the vertical position of each corner
            graph.plot(x, y, pen=grid_pen)               # Draw the closed grid polygon

        # Create one radial axis and label for each channel
        for channel, angle in enumerate(angles):
            graph.plot(
                [0, np.cos(angle)],
                [0, np.sin(angle)],
                pen=grid_pen
            )                                           # Draw an axis from the centre to the outer ring

            label = pg.TextItem(
                f"Ch {channel + 1}",
                anchor=(0.5, 0.5)
            )                                           # Centre the label around its position

            label.setPos(
                1.15 * np.cos(angle),
                1.15 * np.sin(angle)
            )                                           # Position the label outside the outer ring

            graph.addItem(label)                        # Add the channel label to the graph

        # Create the data curve once
        curve = graph.plot(pen=pg.mkPen("y", width=2))

        def update_spider(channel_values):
            """Update the polygon using one value from each channel."""

            values = np.asarray(channel_values, dtype=float)

            if values.shape != (channel_count,):
                raise ValueError(
                    f"Expected {channel_count} channel values, received shape {values.shape}"
                )

            # Convert amplitudes to distances relative to the outer ring
            radius = np.abs(values) / maximum_value
            radius = np.append(radius, radius[0])       # Repeat the first value to close the polygon

            # Convert radial distances and angles to Cartesian coordinates
            x = radius * np.cos(closed_angles)
            y = radius * np.sin(closed_angles)

            curve.setData(x, y)                         # Update the existing curve

        # Start with zero amplitude on every channel
        update_spider(np.zeros(channel_count))

        return graph, update_spider

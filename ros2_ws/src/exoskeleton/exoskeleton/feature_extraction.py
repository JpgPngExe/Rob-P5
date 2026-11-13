import rclpy
import numpy as np
from rclpy.node import Node
from interfaces.msg import MultiArray

class Feature_extraction(Node):
    def __init__(self):
        super().__init__('Feature_extraction_Node')
        self.declare_parameter("Extraction rate", 0.1)
        self.declare_parameter("Wamp_threshold", 1)
        self.declare_parameter("ssc_threshold", 1)
        self.declare_parameter("Processed_EMG", "/exo/processed_EMG")
        self.declare_parameter("Extracted_features", "/exo/extracted_features")
        
        self.timer_period = self.get_parameter("Extraction_rate").value
        self.wamp_threshold = self.get_parameter("Wamp_threshold").value
        self.ssc_threshold = self.get_parameter("ssc_threshold").value
        self.data_input = self.get_parameter("Processed_EMG").value
        self.data_output = self.get_parameter("Extracted_features").value
        
        self.data_subscriber = self.create_subscription(MultiArray, self.data_input, self.emg_callback, 10)
        self.feature_timer = self.create_timer(self.timer_period, self.publish_features)
        self.feature_publisher = self.create_publisher(MultiArray, self.data_output,10)
        self.features = None
        
        self.get_logger().info("Feature Extraction Node Initiated succesfully")

    def restructure_data(self, msg):
        try:
            data = np.reshape(msg.data, (msg.rows, msg.cols))
        except Exception as e:
            self.get_logger().error(f"Failed to reshape data back into {(msg.rows, msg.cols)} matrix")
            self.get_logger().error(f"Messange length: {len(msg.data)}")
            self.get_logger().error(f"Error: {e}")
            raise
        return data

    def prepare_data(self, data):
        try:
            rows = data.shape[0]
            cols = data.shape[1]
            values = data.flatten().tolist()
        except Exception as e:
            self.get_logger().error("Failed to flattten matrix")
            self.get_logger().error(f"Error: {e}")
            raise
        return rows, cols, values
    
    def publish_features(self):
        if self.features == None:
            return
        try:
            rows, cols, data = self.prepare_data(self.features)
        except Exception as e:
            self.get_logger().error(f"Failed to prepare data for publishing")
            self.get_logger().error(f"Error: {e}")
            raise

        msg = MultiArray()
        msg.rows = rows
        msg.cols = cols
        msg.data = data
        try:
            self.feature_publisher.publish(msg)
        except Exception as e:
            self.get_logger().error("Failed to publish message")
            self.get_logger().error(f"Error: {e}")
            raise

    def feature_extraction(self,window):
        features = np.zeros((window.shape[0], 4))
        for idx, channel in enumerate(window):
            try:
                mav = np.mean(np.abs(channel)) #Mean absolute value
            except Exception as e:
                self.get_logger().error(f"Failed to calculate mean absolute value for Channel {idx}")
                self.get_logger().error(f"Error: {e}")
                raise
            #Wilson Amplitude
            
            try:
                wamp = 0
                for i in range(len(channel) -1):
                    if (np.abs(channel[i] - channel[i+1])) > self.wamp_threshold:
                        wamp +=1
            except Exception as e:
                self.get_logger().error(f"Failed to calculate Wilson Amplitude for Channel {idx}")
                self.get_logger().error(f"Error: {e}")
                raise

            try:
                ssc = 0
                # Slope sign change
                for i in range(1, len(channel) - 1):
                    if ((channel[i] - channel[i-1]) * (channel[i] - channel[i+1])) >= self.ssc_threshold:
                        ssc +=1
            except Exception as e:
                self.get_logger().error(f"Failed to calculate Slope Sign Change for Channel {idx}")
                self.get_logger().error(f"Error: {e}")
                raise
            try:
                #wavefrom length
                wl = np.sum(np.abs(np.diff(channel)))
            except Exception as e:
                self.get_logger().error(f"Failed to calucate waveform length for Channel {idx}")
                self.get_logger().error(f"Error: {e}")
                raise
            features[idx] = [mav, wamp, ssc, wl]
        return features
    
    def emg_callback(self,msg):
        self.get_logger().debug("Message recieved")
        data = self.restructure_data(msg)
        self.features = self.feature_extraction(data)
        self.get_logger().debug("Features extracted")

def main(args=None):
    rclpy.init(args=args)
    node = Feature_extraction()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

        

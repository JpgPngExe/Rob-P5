import rclpy
from interfaces import MultiArray
import numpy as np
from rclpy.node import Node
from joblib import load
from time import perf_counter
from std_msgs.msg import Int8

class Classification(Node):
    def __init__(self):
        super().__init__("Classification_Node")
        
        self.declare_parameter("ML_Model", None)
        self.declare_parameter("QOS", 10)
        self.declare_parameter("Update_rate", 0.05)
        self.declare_parameter("Confidence_threshold", 0.7)
        self.declare_parameter("Subscriber", "/exo/extracted_features")
        self.declare_parameter("Publisher", "/exo/classification")
        
   
        self.model = load(self.get_parameter("ML_Model").value)
        self.QOS = self.get_parameter("QOS").value
        self.timer = self.get_parameter("Update_rate").value
        self.confidence_threshold = self.get_parameter("Confidence_threshold").value
        self.subscriber_topic = self.get_parameter("Subscriber").value
        self.publisher_topic = self.get_parameter("Publisher").value


        self.subcriber_ = self.create_subscription(MultiArray, self.subscriber_topic,self.feature_callback, self.QOS)
        self.publisher_ = self.create_publisher(Int8, self.publisher_topic, self.QOS)
        self.classification_timer = self.create_timer(self.timer,  self.classification_callback)


        self.data = None
        self.class_ = 0.0

    def restructure_data(self, msg):
        try:
            data = np.reshape(msg.data, (msg.rows, msg.cols))
        except Exception as e:
            self.get_logger().error(f"Failed to reshape data back into {(msg.rows, msg.cols)} matrix")
            self.get_logger().error(f"Messange length: {len(msg.data)}")
            self.get_logger().error(f"Error: {e}")
            raise
        return data
    

    def classification_callback(self):
        msg = Int8()
        msg.data = int(self.class_)
        self.publisher_.publish(msg)

    def feature_callback(self, msg):
        self.data = self.restructure_data(msg)
        try:
            start = perf_counter()
            proba = self.model.predict_proba(self.data)[0]
            end = perf_counter
            self.get_logger().debug(f"Prediction time: {(end - start)*1000} ms")
        except Exception as e:
            self.get_logger().error(f"ERROR: {e}")
            self.get_logger().error("Prediction failed")
            self.get_logger().error(f"Data shape {self.data.shape}")
            raise
        if np.max(proba) >= self.confidence_threshold:
            self.class_ = self.model.classes_[np.argmax(proba)]
        else:
            self.class_ = -1
            self.get_logger().info("Confidence too low, no class selected.")

        




def main(args=None):
    rclpy.init(args=args)
    node = Classification()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

        


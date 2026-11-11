import rclpy
from rclpy.node import Node

class Feature_extraction(Node):
    def __init__(self):
        super().__init__('Feature_extraction_Node')
        self.data_subscriber = self.create_subscription()
        self.feature_publisher = self.create_publisher()
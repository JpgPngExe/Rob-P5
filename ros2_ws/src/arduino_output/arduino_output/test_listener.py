import rclpy
from rclpy.node import Node
from message_filters import Subscriber, ApproximateTimeSynchronizer
from rclpy.clock import Clock
from std_msgs.msg import String


class SyncSubscriber(Node):

    def __init__(self):
        #imu/arduino output subscriber
        super().__init__('sync_subscriber')
        self.imu_sub = Subscriber(
            self,
            String,
            'arduino_output')

        # other subscriber for later
        #self.other_sub = Subscriber(
        #    self,
        #    String,
        #    'other')


        self.synced_imu_pub = self.create_publisher(String,"synced_imu",10)

        ## Second publisher for when the emg or other data nodes are done so that they can be published together
        #self.synced_other_pub = self.create_publisher(String,"synced_other",10)

        # sync parameters
        queue_size = 10
        max_delay = 0.05 #the max amount of difference of time that the revieved data can be within. it is measured in seconds.

        self.time_sync = ApproximateTimeSynchronizer([self.imu_sub, self.temp],
                                                     queue_size, max_delay)
        ##replace self.temp with next the other incomming data

        self.time_sync.registerCallback(self.SyncCallback)



def SyncCallback(self, imu, other):
    self.synced_imu_pub.publish(imu)
    #self.synced_other_pub.publish(other)


def main(args=None):
    rclpy.init(args=args)

    sync_subscriber = SyncSubscriber()

    rclpy.spin(sync_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    sync_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
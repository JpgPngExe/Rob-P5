import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/valdemar-linus/p5/Rob-P5/ros2_ws/install/arduino_output'

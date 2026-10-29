import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/valdemar-linus/p5/project/ws/src/install/arduino_output'

from setuptools import find_packages, setup
import os
from glob import glob
package_name = 'exoskeleton'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        (os.path.join("share", package_name, "launch"), glob("launch/*.launch.py")),
        (os.path.join("share", package_name, "config"), glob("config/*.yaml")),],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rg5-544',
    maintainer_email='rg5-544@todo.todo',
    description='TODO: ROS2 package for ROB5 exoskeleton project',
    license='TODO: Apache License 2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'admittance = exoskeleton.admittance:main',
            'setup = exoskeleton.setup_node:main',
            'feature_extraction = exoskeleton.feature_extraction:main',
            'classification = exoskeleton.classification:main',
            'EMG_read = exoskeleton.read_emg:main',
            'signal_processing = exoskeleton.signal_processing:main',
            'time_synchronizer = exoskeleton.time_synchronizer:main',
            'imu_emg_simulator = exoskeleton.imu_emg_simulator:main'
        ],
    },
)

from setuptools import find_packages
from setuptools import setup

setup(
    name='candle_ros2',
    version='2.0.0',
    packages=find_packages(
        include=('candle_ros2', 'candle_ros2.*')),
)

from setuptools import find_packages, setup

package_name = 'exoskeleton'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
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
            'feature_extraction = exoskeleton.feature_extraction:main'
        ],
    },
)

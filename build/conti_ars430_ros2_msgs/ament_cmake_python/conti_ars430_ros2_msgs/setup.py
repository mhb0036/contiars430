from setuptools import find_packages
from setuptools import setup

setup(
    name='conti_ars430_ros2_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('conti_ars430_ros2_msgs', 'conti_ars430_ros2_msgs.*')),
)

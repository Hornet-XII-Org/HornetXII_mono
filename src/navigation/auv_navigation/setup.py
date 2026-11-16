from glob import glob
from setuptools import find_packages, setup

setup(
    name='auv_navigation', version='0.1.0', packages=find_packages(),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/auv_navigation']),
        ('share/auv_navigation', ['package.xml']),
        ('share/auv_navigation/launch', glob('launch/*.launch.py')),
        ('share/auv_navigation/config', glob('config/*.yaml')),
    ],
    install_requires=['setuptools'], zip_safe=True,
    maintainer='Hornet XII controls and navigation',
    maintainer_email='maintainers@example.invalid',
    description='Waypoint execution and qualification practice',
    license='LicenseRef-Proprietary',
    entry_points={'console_scripts': ['waypoint_executor = auv_navigation.node:main']},
)

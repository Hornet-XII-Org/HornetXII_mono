from setuptools import find_packages, setup
from glob import glob

package_name = 'sauvc_world'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/models/robot', ['models/robot/model.sdf']),
        ('share/' + package_name + '/models/gate', ['models/gate/model.sdf']),
        ('share/' + package_name + '/launch', ['launch/sauvc.launch.py']),
        ('share/' + package_name + '/models/pool',
            ['models/pool/poolWalls.sdf', 'models/pool/model.config',
             'models/pool/REFERENCES.md']),
        ('share/' + package_name + '/models/pool/meshes',
            glob('models/pool/meshes/*.obj')),
        ('share/' + package_name + '/models/pool/materials/textures',
            glob('models/pool/materials/textures/*.png')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='kian',
    maintainer_email='kian@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
        ],
    },
)

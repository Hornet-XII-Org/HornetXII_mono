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
        ('share/' + package_name + '/models/gate/meshes',
            glob('models/gate/meshes/*.obj') + glob('models/gate/meshes/*.mtl')),
        ('share/' + package_name + '/models/flare_yellow', ['models/flare_yellow/model.sdf']),
        ('share/' + package_name + '/models/flare_yellow/meshes',
            glob('models/flare_yellow/meshes/*.obj') + glob('models/flare_yellow/meshes/*.mtl')),
        ('share/' + package_name + '/models/flare_red', ['models/flare_red/model.sdf']),
        ('share/' + package_name + '/models/flare_red/meshes',
            glob('models/flare_red/meshes/*.obj') + glob('models/flare_red/meshes/*.mtl')),
        ('share/' + package_name + '/models/flare_blue', ['models/flare_blue/model.sdf']),
        ('share/' + package_name + '/models/flare_blue/meshes',
            glob('models/flare_blue/meshes/*.obj') + glob('models/flare_blue/meshes/*.mtl')),
        ('share/' + package_name + '/models/flare_orange', ['models/flare_orange/model.sdf']),
        ('share/' + package_name + '/models/flare_orange/meshes',
            glob('models/flare_orange/meshes/*.obj') + glob('models/flare_orange/meshes/*.mtl')),
        ('share/' + package_name + '/models/drum_red', ['models/drum_red/model.sdf']),
        ('share/' + package_name + '/models/drum_red/meshes',
            glob('models/drum_red/meshes/*.obj') + glob('models/drum_red/meshes/*.mtl')),
        ('share/' + package_name + '/models/drum_blue', ['models/drum_blue/model.sdf']),
        ('share/' + package_name + '/models/drum_blue/meshes',
            glob('models/drum_blue/meshes/*.obj') + glob('models/drum_blue/meshes/*.mtl')),
        ('share/' + package_name + '/models/target_mat', ['models/target_mat/model.sdf']),
        ('share/' + package_name + '/models/qualification_gate',
            ['models/qualification_gate/model.sdf']),
        ('share/' + package_name + '/launch', ['launch/sauvc.launch.py']),
        ('share/' + package_name + '/worlds', ['worlds/sauvc_pool.world']),
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

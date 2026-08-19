from setuptools import find_packages, setup


package_name = 'maze_movement'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
    ('share/ament_index/resource_index/packages',
        ['resource/' + package_name]),
    ('share/' + package_name, ['package.xml']),
   
],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mariam-elalfy',
    maintainer_email='mariomaelalfy@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
   entry_points={
    'console_scripts': [
        'movement_x = maze_movement.movement_x:main',
        'movement_yaw = maze_movement.movement_yaw:main',
    ],
},
)

import os

from ament_index_python.packages import get_package_share_directory

import launch
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, Command, PythonExpression
from launch.conditions import IfCondition, UnlessCondition

from launch_ros.actions import Node
import launch_ros

import xacro

def generate_launch_description():
    pkg_share = launch_ros.substitutions.FindPackageShare(package='pochita').find('pochita')
    default_model_path = os.path.join(pkg_share, 'description/robot.urdf.xacro')
    default_rviz_config_path = os.path.join(pkg_share, 'config/config.rviz')
    world_path = os.path.join(pkg_share, 'worlds/house.sdf')

    use_sim_time = LaunchConfiguration('use_sim_time')

    rsp = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description':Command(['xacro ', LaunchConfiguration('robot_description')]), 'use_sim_time':use_sim_time}]
    )

    print(Command(['xacro ', LaunchConfiguration('robot_description')]))

    jsp = Node(
        package="joint_state_publisher",
        executable="joint_state_publisher",
        name="joint_state_publisher",
        condition=launch.conditions.UnlessCondition(LaunchConfiguration('gui'))
    )

    # jsp_gui = Node(
    #     package="joint_state_publisher_gui",
    #     executable="joint_state_publisher_gui",
    #     name="joint_state_publisher_gui",
    #     condition=launch.conditions.IfCondition(LaunchConfiguration('gui'))
    # )


    rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')]
    )

    spawn_entity = Node(package='gazebo_ros', executable='spawn_entity.py',
                        arguments=['-topic', 'robot_description',
                                   '-entity', 'pochita'],
                        output='screen')
    

    joystick_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            os.path.join(pkg_share, 'launch', 'joystick.launch.py')
        ]),
        condition=IfCondition(LaunchConfiguration('controller'))
    )

    # keyboard_controller = Node(
    #     package='teleop_twist_keyboard',
    #     executable='teleop_twist_keyboard',
    #     name='teleop_node',
    #     condition=UnlessCondition(LaunchConfiguration('controller'))
    # )

    robot_localization_node = launch_ros.actions.Node(
       package='robot_localization',
       executable='ekf_node',
       name='ekf_filter_node',
       output='screen',
       parameters=[os.path.join(pkg_share, 'config/ekf.yaml'), {'use_sim_time': LaunchConfiguration('use_sim_time')}]
    )
    
    


    
    return LaunchDescription([
        DeclareLaunchArgument(name="use_sim_time", default_value="false", description="Flag to enable use_sim_time"),
        DeclareLaunchArgument(name="robot_description", default_value=default_model_path, description="Absolute path to robot urdf file"),
        DeclareLaunchArgument(name="gui", default_value='false', description="Flag to enable joint_state_publisher_gui"),
        DeclareLaunchArgument(name="rvizconfig", default_value=default_rviz_config_path, description="Absolute path to rviz config file"),
        DeclareLaunchArgument(name="controller", default_value='true', description="Absolute path to rviz config file"),
        launch.actions.ExecuteProcess(cmd=["gazebo", '--verbose', '-s', 'libgazebo_ros_init.so', '-s', 'libgazebo_ros_factory.so', world_path], output="screen"),
        rsp,
        # jsp,
        # jsp_gui,
        spawn_entity,
        # joystick_launch,
        # keyboard_controller,
        # robot_localization_node,
        # rviz2
        ])
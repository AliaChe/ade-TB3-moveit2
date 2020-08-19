import os
import yaml
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import LaunchConfiguration

def load_file(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, 'r') as file:
            return file.read()
    except EnvironmentError: # parent of IOError, OSError *and* WindowsError where available
        return None

def load_yaml(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, 'r') as file:
            return yaml.load(file)
    except EnvironmentError: # parent of IOError, OSError *and* WindowsError where available
        return None


def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    # moveit_cpp.yaml is passed by filename for now since it's node specific
    moveit_cpp_yaml_file_name = get_package_share_directory('run_turtlebot3_cpp') + "/config/moveit_cpp.yaml"

    # Component yaml files are grouped in separate namespaces
    robot_description_config = load_file('run_turtlebot3_cpp', 'config/turtlebot3_burger.urdf')
    robot_description = {'robot_description' : robot_description_config}

    robot_description_semantic_config = load_file('run_turtlebot3_cpp', 'config/turtlebot3_burger.srdf')
    robot_description_semantic = {'robot_description_semantic' : robot_description_semantic_config}

    kinematics_yaml = load_yaml('run_turtlebot3_cpp', 'config/kinematics.yaml')
    robot_description_kinematics = { 'robot_description_kinematics' : kinematics_yaml }

    controllers_yaml = load_yaml('run_turtlebot3_cpp', 'config/controllers.yaml')
    moveit_controllers = { 'moveit_simple_controller_manager' : controllers_yaml }

    ompl_planning_pipeline_config = { 'ompl' : {
        'planning_plugin' : 'ompl_interface/OMPLPlanner',
        'request_adapters' : """default_planner_request_adapters/AddTimeOptimalParameterization default_planner_request_adapters/FixWorkspaceBounds default_planner_request_adapters/FixStartStateBounds default_planner_request_adapters/FixStartStateCollision default_planner_request_adapters/FixStartStatePathConstraints""" ,
        'start_state_max_bounds_error' : 0.1 } }
    ompl_planning_yaml = load_yaml('run_turtlebot3_cpp', 'config/ompl_planning.yaml')
    ompl_planning_pipeline_config['ompl'].update(ompl_planning_yaml)

    # MoveItCpp demo executable
    run_moveit_cpp_node = Node(node_name='run_TB3_cpp',
                               package='run_turtlebot3_cpp',
                               # TODO(henningkayser): add debug argument
                               # prefix='xterm -e gdb --args',
                               node_executable='run_TB3_cpp',
                               output='screen',
                               parameters=[moveit_cpp_yaml_file_name,
                                           robot_description,
                                           robot_description_semantic,
                                           kinematics_yaml,
                                           ompl_planning_pipeline_config
                                           ])

    # RViz
    rviz_config_file = get_package_share_directory('run_turtlebot3_cpp') + "/launch/run_TB3_cpp.rviz"
    rviz_node = Node(package='rviz2',
                     node_executable='rviz2',
                     node_name='rviz2',
                     output='log',
                     arguments=['-d', rviz_config_file],
                     parameters=[robot_description])

    # Publish base link TF
    static_tf = Node(package='tf2_ros',
                     node_executable='static_transform_publisher',
                     node_name='static_transform_publisher',
                     output='log',
                     arguments=['0.0', '0.0', '0.0', '0.0', '0.0', '0.0', 'world', 'odom'])

    launch_file_dir = os.path.join(get_package_share_directory('turtlebot3_gazebo'), 'launch')
    
    return LaunchDescription([run_moveit_cpp_node,         
                              IncludeLaunchDescription( PythonLaunchDescriptionSource([launch_file_dir, '/turtlebot3_world.launch.py']),
                              launch_arguments={'use_sim_time': use_sim_time}.items() ),
                              rviz_node, static_tf])

    # return LaunchDescription([run_moveit_cpp_node])
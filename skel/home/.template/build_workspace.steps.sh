#
# This file is meant to be run using the steps utility
#

mkdir -p ~/turtlebot3_moveit2_ws/src
cd ~/turtlebot3_moveit2_ws/src && vcs import < ~/turtlebot3-moveit2.repos
rm -rf ~/turtlebot3_moveit2_ws/src/moveit2/moveit_plugins/moveit_simple_controller_manager
mv ~/move_turtlebot ~/turtlebot3_moveit2_ws/src
rm -rf ~/move_turtlebot
#Gazebo models
# mkdir ~/.gazebo
# cd ~/.gazebo && git clone  https://github.com/osrf/gazebo_models models

#build workspace
cd ~/turtlebot3_moveit2_ws && source /opt/ros/eloquent/setup.sh && colcon build --event-handlers desktop_notification- status- --cmake-args -DCMAKE_BUILD_TYPE=Release
source ~/turtlebot3_moveit2_ws/install/setup.sh
echo -e 'Launch the simulator:\nsource turtlebot3_moveit2_ws/install/setup.$(basename $0)\nros2 launch turtlebot3_gazebo turtlebot3_world.launch.py'

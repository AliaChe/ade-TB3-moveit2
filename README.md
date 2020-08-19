# minimal-ade

A minimal example of an ade-compatible project:

```
~/ade-home/
├── .adehome <- Tells ade-cli that this is the root of this ade home
└── minimal-ade
    ├── .aderc <- Tells ade-cli what images and volumes to use
    ├── Dockerfile
    ├── entrypoint
    └── env.sh
```

## Build and start

- Create `ade-home` (if not created)
```
$ cd ~
$ mkdir adehome-turtlebot3-moveit2
$ cd adehome-turtlebot3-moveit2
$ touch .adehome
```
- **Note:** The `ade-home` directory can have any name, it just needs to contain `.adehome`

- Clone this repository, build the docker image, and start ade
```
$ cd ~/adehome-turtlebot3-moveit2/
$ git clone https://lab.blackfoot.io/blackdrones_pocs/ade-turtlebot3-moveit2.git
$ cd ~/adehome-turtlebot3-moveit2/ade-turtlebot3-moveit2
$ docker build -t image_ade .
$ ade start
$ ade enter
```
You can now run turtlebot3:

```shell
ros2 launch turtlebot3_gazebo empty_world.launch.py
```
In another shell, run the action server :
```shell
$ cd ~/adehome-turtlebot3-moveit2/ade-turtlebot3-moveit2
$ ade enter
$ ros2 run action_controller_cpp actionController
```
Run action_client_py that sends a trajectory_msgs/MultiDofFollowJointTrajectory msg with 2 points to action_controller server in another shell
```shell
$ cd ~/adehome-turtlebot3-moveit2/ade-turtlebot3-moveit2
$ ade enter
$ ros2 run action_client_py actionClient
```



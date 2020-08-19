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
$ git clone https://github.com/AliaChe/ade-TB3-moveit2.git 
$ cd ~/adehome-turtlebot3-moveit2/ade-TB3-moveit2
$ docker build -t image_ade .
$ ade start
$ ade enter
```
You can now run the demo:

```shell
ros2 launch run_turtlebot3_cpp run_TB3.launch.py
```




# An ADE-compatible image
FROM registry.gitlab.com/deb0ch/ade-ubuntu/bionic-extra:latest



# Install ROS 2
RUN apt-get -y update && apt-get -y install \
    curl                                    \
    git                                     \
    gnupg2                                  \
    lsb-release                             \
    unzip                                   \
    && rm -rf /var/lib/apt/lists/*
RUN curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | apt-key add -
RUN sh -c 'echo "deb http://packages.ros.org/ros2/ubuntu `lsb_release -cs` main" > /etc/apt/sources.list.d/ros2-latest.list'
RUN apt-get -y update && apt-get -y install \
    python3-argcomplete                     \
    python3-colcon-common-extensions        \
    python3-vcstool                         \
    python3-rosdep                          \
    ros-eloquent-desktop                    \
    ros-eloquent-eigen3-cmake-module        \
    ros-eloquent-gazebo-ros-pkgs            \
    && rm -rf /var/lib/apt/lists/*

RUN apt-get -y update && apt-get -y install \
    python3-pip                             \
    && rm -rf /var/lib/apt/lists/*
RUN rosdep init
RUN rosdep update


#Install rosdep pkg
RUN apt-get -y update && apt-get -y install \
    cmake                                   \
    libboost-all-dev                        \
    libeigen3-dev                           \
    pkg-config                              \
    libboost-system-dev                     \
    python3-lxml                            \
    python3-yaml                            \
    python3-mock                            \
    ros-eloquent-octomap                    \
    libassimp-dev                           \
    ros-eloquent-eigen-stl-containers       \
    libconsole-bridge-dev                   \
    libqhull-dev                            \
    ros-eloquent-urdfdom-headers            \
    ros-eloquent-tinyxml2-vendor            \
    ros-eloquent-control-msgs               \            
    ros-eloquent-orocos-kdl                 \
    python-lxml                             \
    liburdfdom-tools                        \
    python3-pytest                          \
    ros-eloquent-launch-testing-ros         \
    python-dev                              \
    libbullet-dev                           \
    libfcl-dev                              \
    liburdfdom-dev                          \
    liburdfdom-headers-dev                  \
    libogre-1.9-dev                         \
    libqt5opengl5-dev                       \
    qtbase5-dev                             \
    && rm -rf /var/lib/apt/lists/*

# Install Gazebo (and downgrade for Eloquent)
# RUN apt-get -y update && apt-get -y install \
#    dirmngr                                 \
#    && rm -rf /var/lib/apt/lists/*
# RUN apt-key adv --keyserver keyserver.ubuntu.com --recv-keys D2486D2DD83DB69272AFE98867170598AF249743
# RUN echo "deb http://packages.osrfoundation.org/gazebo/ubuntu-stable bionic main" > /etc/apt/sources.list.d/gazebo-stable.list
# RUN apt-get -y update && apt-get -y install \
#    gazebo9                                 \
#    libgazebo9-dev                          \
#    ros-eloquent-gazebo-ros-pkgs             \
#    && rm -rf /var/lib/apt/lists/*


ENV GAZEBO_MODEL_PATH=/usr/share/gazebo/models

RUN git clone --depth=1 https://github.com/osrf/gazebo_models $GAZEBO_MODEL_PATH \
    && rm -rf $GAZEBO_MODEL_PATH/.git


# Turtlebot3: install cartographer
RUN apt-get -y update && apt-get -y install \
    google-mock                             \
    libboost-dev                            \
    libboost-iostreams-dev                  \
    libcairo2-dev                           \
    libceres-dev                            \
    liblua5.3-dev                           \
    libpcl-dev                              \
    libprotobuf-dev                         \
    protobuf-compiler                       \
    python3-sphinx                          \
    ros-eloquent-cartographer                \
    ros-eloquent-cartographer-ros            \
    ros-eloquent-nav2-bringup                \
    ros-eloquent-navigation2                 \
    && rm -rf /var/lib/apt/lists/*

##
## Copy local files into the system
##

COPY skel/. /
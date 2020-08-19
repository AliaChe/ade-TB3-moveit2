
################################################################################
#
# User configuration
#
################################################################################

export GCC_COLORS='error=01;31:warning=01;35:note=01;36:caret=01;32:locus=01:quote=01'
export LSCOLORS=ExGxCxDxBxegedabagacad

alias l1='ls -1lhrt'
alias l='ls -CF'
alias la='ls -Alhrt'
alias ll='ls -AlF'
alias sl='ls'
alias tree='tree -C'


################################################################################
#
# ADE image / ROS configuration
#
################################################################################

export SHELL=/bin/zsh

source /opt/ros/eloquent/setup.zsh

if [[ -f ~/turtlebot3_moveit2_ws/install/setup.zsh ]]; then
    source ~/turtlebot3_moveit2_ws/install/setup.zsh
    export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:~/turtlebot3_moveit2_ws/src/turtlebot3/turtlebot3_simulations/turtlebot3_gazebo/models
    export TURTLEBOT3_MODEL=burger
fi


################################################################################
#
# Oh-my-zsh configuration
#
################################################################################

export ZSH=/usr/share/oh-my-zsh

# Set name of the theme to load. Optionally, if you set this to "random"
# it'll load a random theme each time that oh-my-zsh is loaded.
# See https://github.com/robbyrussell/oh-my-zsh/wiki/Themes
ZSH_THEME="bira"

DISABLE_AUTO_UPDATE="true"

# Which plugins would you like to load? (plugins can be found in ~/.oh-my-zsh/plugins/*)
# Custom plugins may be added to ~/.oh-my-zsh/custom/plugins/
# Add wisely, as too many plugins slow down shell startup.
plugins=(
    git
)

source $ZSH/oh-my-zsh.sh



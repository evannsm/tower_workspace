
# Docker Container Setup
## How build image and create container
1. First build the image from the Dockerfile:
```bash
docker build -t ros-jazzy-osrf:<date> .
```

2. Get the image id for the created image with:
```bash
docker images
```

3. Then create the container and start it (run = create + start) with the appropriate mounts and settings for GUI/GPU and Networking:
```bash
docker run -it --privileged --gpus all \
--user "$(id -u)":"$(id -g)" \
-v ~/evanns_ws2/src/:/src/:rw \
-v /tmp/.X11-unix:/tmp/.X11-unix:ro \
-e DISPLAY=:0 \
--network host \
--ipc host \
--name=ros-jazzy-osrf <image_name/image_id>
```

4. Then connect VSCode to the running container and navigate to `/home/ubuntu/.bashrc` and add the following to the end of the file:
```
export ROS_DOMAIN_ID=31
alias sim='cd /src/PX4-Autopilot && make px4_sitl gz_x500'
alias udp='MicroXRCEAgent udp4 -p 8888'
alias cap='cd /src/mocap_ws && source install/setup.bash'
export PIP_BREAK_SYSTEM_PACKAGES=1

```


## How to re-connect to the container:
1. To start a stopped container: (-ai = attach interactive. This allows you to 'attach' to the container terminal and have it take input)
```bash
docker start -ai ros-jazzy-osrf
```

2. To open a new shell inside a running container: (This doesn’t depend on the original process — it just launches a new Bash session inside the same running container.)
```bash
docker exec -it ros-jazzy-osrf bash
```


## Running relevant code:
1. Source appropriate workspace and run basic controller to test:
```bash
ros2 run basic_clean_offboard run   --platform sim   --trajectory hover   --hover-mode 5   --log-file log.log
```

## Install jax-cpu
1. Make sure you install the right cuda version (tutorial defaults with cuda13)
```bash
pip install -U "jax[cuda12]" --break-system-packages
```


# On Host Setup Instructions
## Set Up Entire Workspace

### Create directories
1. Create docker & container's ros2 workspace:
```bash
mkdir -p ~/evanns_ws/src && cd ~/evanns_ws
```

### Set up PX4-Autopilot
1. First clone the PX4-Autopilot repo:
```bash
git clone https://github.com/PX4/PX4-Autopilot.git -b v1.16.0 --recursive
```
2. Then run the ubuntu setup script:
```bash
bash ./PX4-Autopilot/Tools/setup/ubuntu.sh
```

### Install gz harmonic
1. First install some necessary tools:
```bash
sudo apt-get update
sudo apt-get install curl lsb-release gnupg
```
2. Then install Gazebo Harmonic:
```bash
sudo curl https://packages.osrfoundation.org/gazebo.gpg --output /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] https://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" | sudo tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null
sudo apt-get update
sudo apt-get install gz-harmonic
```

### Set up Micro XRCE DDS
1. Clone the repo:
```bash
git clone -b v2.4.3 https://github.com/eProsima/Micro-XRCE-DDS-Agent.git
```
2. Build:
```bash
cd Micro-XRCE-DDS-Agent
mkdir build
cd build
cmake ..
make
sudo make install
sudo ldconfig /usr/local/lib/
```


### Set up mocap_ws
1. Follow instructions [here](https://github.com/evannsm/mocap_ws) to set up mocap_ws and move it all to ~/evanns_ws/src so it is ~/evanns_ws/src/mocap_ws

2. Remove broken and unnecessary directories:
```bash
cd ~/evanns_ws/src/mocap_ws/src/mocap4r2 && rm -rf mocap4r2_robot_gt/ && rm -rf rqt_mocap4r2_control/
```
3. Then copy this also into `~/evanns_ws/src/` so that `~/evanns_ws/src/mocap_ws` are siblings (we will build `~/evanns_ws/src/mocap_ws` later in the container):
```bash
4. Then build mocap_ws:
```bash
cd ~/evanns_ws/src/mocap_ws
colcon build
```

### Set up your main ros2 workspace
1. Go to `~/evanns_ws/src`:
```bash
mkdir ros2_ws/src && cd ros2_ws/
```
2. Copy/clone any other repos you need into ros2_ws/src to be built in the container

You should now have a workspace that roughly looks like this: (src/ has mocap_ws and PX4-Autopilot inside it)
```evanns_ws/
├── Dockerfile
├── README.md
├── PX4-Autopilot
├── Micro-XRCE-DDS-Agent
├── mocap_ws
└── src/
    └── mocap_ws
        └── src/
            └── <mocap_ws repos>
    └── ros2_ws
        └── src/
            └── <other repos to be built in container>
```

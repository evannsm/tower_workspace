## How to run in docker
1. First build the image
```bash
docker build -t ros-jazzy-jax-gpu:<date> .
```
2. Then create the container and start it (run = create + start)
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


3. You can also re-start it with:
```bash
docker start -ai ros-jazzy-jax-gpu
```

4. Or once open connect more terminals to it:
```bash
docker exec -it ros-jazzy-jax-gpu bash

```

5. Run basic controller to test:
```bash
ros2 run basic_clean_offboard run   --platform sim   --trajectory hover   --hover-mode 5   --log-file log.log
```

## Install jax-cpu
1. Make sure you install the right cuda version (tutorial defaults with cuda13)
```bash
pip install -U "jax[cuda12]" --break-system-packages
```

## Set up mocap-ws
1. Follow instructions [here](https://github.com/evannsm/mocap_ws)

3. Move it all to ~/evanns_ws/src so it is ~/evanns_ws/src/mocap_ws

2. Remove broken and unnecessary directories:
```bash
cd ~/evanns_ws/src/mocap_ws/src/mocap4r2 && rm -rf mocap4r2_robot_gt/ && rm -rf rqt_mocap4r2_control/
```

## Set up PX4-Autopilot

### On host:
1. Clone the repo:
```bash
git clone https://github.com/PX4/PX4-Autopilot.git -b v1.15.4 --recursive
```

### In container:
1. Install dependencies by ensuring we can pip install without virtual environments:
```bash
export PIP_BREAK_SYSTEM_PACKAGES=1
```
2. Then setup the PX4
```bash
bash ./PX4-Autopilot/Tools/setup/ubuntu.sh
```

3. Install gz gazebo harmonic
```bash
sudo apt update
sudo apt install -y gz-harmonic
```


## Set up ROS2 Bridge
### On host:
1. Clone the repo:
```bash
git clone -b v2.4.3 https://github.com/eProsima/Micro-XRCE-DDS-Agent.git
```
### In container:
1. Build:
```bash
cd Micro-XRCE-DDS-Agent
mkdir build
cd build
cmake ..
make
sudo make install
sudo ldconfig /usr/local/lib/
```

## Add to container .bashrc
1. Connect vscode to container
2. Go to /home/ubuntu/.bashrc
3. Add the following:
```
source /opt/ros/jazzy/setup.bash
export ROS_DOMAIN_ID=31

alias sim='cd /src/PX4-Autopilot && make px4_sitl gz_x500'
alias udp='MicroXRCEAgent udp4 -p 8888'
alias cap='cd /src/mocap_ws && source install/setup.bash'
```
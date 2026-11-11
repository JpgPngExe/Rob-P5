FROM ubuntu:24.04

ARG USERNAME=mabBuildBot
ARG USER_UID=1001
ARG USER_GID=$USER_UID

RUN groupadd --gid $USER_GID $USERNAME
RUN useradd --uid $USER_UID --gid $USER_GID -m $USERNAME

ENV DEBIAN_FRONTEND=noninteractive
ENV LANG=en_US.UTF-8
ENV LC_ALL=en_US.UTF-8

RUN apt update && apt install -y \
        locales \
        curl \
        gnupg \
        lsb-release \
        software-properties-common \
        build-essential \
        cmake \
        make \ 
        libusb-1.0-0-dev \
        pkg-config \
        wget \
        nano \
        unzip \
        git \
        sudo \
        python3 \
        python3-venv \
        python3-pip \
	python3-serial \
        usbutils \
        libssl-dev \
        libudev-dev \
        libgtk-3-dev \
        libglfw3-dev \
        libgl1-mesa-dev \
        libglu1-mesa-dev \
        at \
    && locale-gen en_US.UTF-8 \
    && rm -rf /var/lib/apt/lists/*


# Python Virtual Environment (Python 3.12)
RUN python3 -m venv /opt/venv \
    && /opt/venv/bin/python -m pip install --upgrade pip setuptools wheel
	
ENV PATH="/opt/venv/bin:$PATH"

# Install ROS 2 Jazzy
RUN curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.key \
    | gpg --dearmor -o /usr/share/keyrings/ros-archive-keyring.gpg

RUN echo "deb [arch=$(dpkg --print-architecture) \
    signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] \
    http://packages.ros.org/ros2/ubuntu \
    $(. /etc/os-release && echo $UBUNTU_CODENAME) main" \
    | tee /etc/apt/sources.list.d/ros2.list > /dev/null

RUN apt update && apt install -y \
    ros-jazzy-desktop \
    ros-jazzy-vision-msgs \
    python3-colcon-common-extensions \
    python3-rosdep \
    python3-vcstool \
    python3-argcomplete

# Initialize rosdep
RUN rosdep init || true
RUN rosdep update


# Python packages
RUN pip install --no-cache-dir \
        numpy \
        matplotlib \
        lark \
	pyserial \
	empy==3.3.4 \
	catkin_pkg \
	mindrove


# Build system
# -------------------------
RUN pip install meson

# Auto source ROS
RUN echo "source /opt/ros/jazzy/setup.bash" >> /root/.bashrc

#CANdle-SDK stuff
RUN git config --global --add safe.directory '*'

# Workspace setup
ENV ROS_DISTRO=jazzy
ENV ROS_DOMAIN_ID=30

CMD ["bash"]


# Pin base image immutably by digest
ARG REPO=osrf/ros:jazzy-desktop-full-noble
ARG DIGEST=sha256:d69896a85c9d545f97f40822aaeadd6a64e69f08edfb21e69e95fa7d1c9cf14e
FROM ${REPO}@${DIGEST}

ARG HOST_UID=1000
ARG HOST_GID=1000
SHELL ["/bin/bash", "-lc"]

# Noninteractive APT is safer in Docker
ENV DEBIAN_FRONTEND=noninteractive

# Basics + sudo + pip (+ optional python-is-python3)
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        sudo python3-pip python-is-python3 && \
    rm -rf /var/lib/apt/lists/*

# Create ubuntu user (uid/gid 1000) with password-less sudo
RUN groupadd -g ${HOST_GID} devgrp || true && \
    id -u ubuntu &>/dev/null || useradd -m -u ${HOST_UID} -g ${HOST_GID} -s /bin/bash ubuntu && \
    usermod -aG sudo ubuntu && \
    echo 'ubuntu ALL=(ALL) NOPASSWD:ALL' > /etc/sudoers.d/ubuntu && chmod 440 /etc/sudoers.d/ubuntu

# Source ROS on login shells
RUN echo "source /opt/ros/jazzy/setup.bash" > /etc/profile.d/ros_jazzy.sh

# RUN apt-get update && apt-get purge -y python3-numpy && apt-get autoremove -y && rm -rf /var/lib/apt/lists/*
# System-wide JAX install (no venv) – override PEP 668
# ENV PIP_BREAK_SYSTEM_PACKAGES=1
# RUN python3 -m pip install "jax[cuda13]"

# RUN pip install -U "jax[cuda13]" --break-system-packages

# Optional: avoid PATH warnings for user scripts later
# RUN echo 'export PATH="$HOME/.local/bin:$PATH"' >> /home/ubuntu/.bashrc && \
#     chown -R ubuntu:ubuntu /home/ubuntu

USER ubuntu
CMD ["bash", "-l"]

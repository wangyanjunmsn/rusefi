#!/usr/bin/env bash

# Reference: firmware/setup_linux_environment.sh

# Update package lists
sudo apt-get update -y

# install dependencies
sudo apt-get install -y build-essential gcc gdb gcc-multilib g++-multilib make openjdk-8-jdk-headless ant mtools zip xxd libncurses5 libncursesw5

# delete any old tools, create a new folder, and go there
rm -rf ~/.rusefi-tools
mkdir ~/.rusefi-tools
dir=$(realpath firmware)
cd ~/.rusefi-tools

cd ${dir}
make -j$(nproc)

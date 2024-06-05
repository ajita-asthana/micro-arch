#!/bin/bash

#Remove the build directory if it exists
if [-d "build" ]; then
    rm -rf build
fi
#Create the build directory 
mkdir -p build
cd build

#Run cmake and make
cmake ..
make
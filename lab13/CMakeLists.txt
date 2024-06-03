cmake_minimum_required(VERSION 3.26)
project(lab13)

set(CMAKE_CXX_STANDARD 17)


add_executable(lab13 main.cpp
        IDeviceFactory.h
ILaptopDevice.h
        IPCDevice.h
THHDDeviceFactory.cpp
THHDDeviceFactory.h
TLaptopHDDDevice.cpp
TLaptopHDDDevice.h
TLaptopSSDDevice.cpp
TLaptopSSDDevice.h
TPCHDDevice.cpp
TPCHDDevice.h
TPCSSDDevice.cpp
TPCSSDDevice.h
TSSDDeviceFactory.cpp
TSSDDeviceFactory.h)

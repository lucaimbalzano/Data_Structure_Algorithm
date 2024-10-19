cmake_minimum_required(VERSION 3.16)
project(Data_Structure_Algorithm)

set(CMAKE_CXX_STANDARD 17)  # or the standard you want to use

# Add all your source files
add_executable(Data_Structure_Algorithm
        search_max_min/main.cpp
        utils/console.h
        )

# Specify include directories if needed
include_directories(utils)

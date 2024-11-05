cmake_minimum_required(VERSION 3.16)
project(Data_Structure_Algorithm)

set(CMAKE_CXX_STANDARD 17)  # or the standard you want to use

# Add all your source files
add_executable(Data_Structure_Algorithm
        algorithms/search_max_min/main.cpp
        utils/console.h
        leetcode/1_Two_Sum/main.cpp leetcode/1_Two_Sum/main.h algorithms/sort/selection_sort.cpp algorithms/sort/selection_sort.h algorithms/sort/bubble_sort.cpp algorithms/sort/bubble_sort.h algorithms/sort/insertion_sort.cpp algorithms/sort/insertion_sort.h algorithms/sort/shell_sort.cpp algorithms/sort/shell_sort.h)

# Specify include directories if needed
include_directories(utils)

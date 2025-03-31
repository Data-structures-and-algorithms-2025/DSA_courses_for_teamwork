cmake_minimum_required(VERSION 3.29)
project(double_list C)

set(CMAKE_C_STANDARD 23)

add_executable(double_list main.c
        double_list_functions.c
        double_list_functions.h)

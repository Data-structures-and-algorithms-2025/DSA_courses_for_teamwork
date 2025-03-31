cmake_minimum_required(VERSION 3.30)
project(simple_list C)

set(CMAKE_C_STANDARD 23)

add_executable(simple_list main.c
        simple_list_functions.c
        simple_list_functions.h
        simple_list_functions.c)

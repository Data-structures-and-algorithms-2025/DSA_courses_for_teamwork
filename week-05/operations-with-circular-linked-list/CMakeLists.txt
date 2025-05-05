cmake_minimum_required(VERSION 3.29)
project(circList C)

set(CMAKE_C_STANDARD 23)

add_executable(circList main.c circular_linked_list.c circular_linked_list.h)

cmake_minimum_required(VERSION 3.29.6)
project(simple_queue C)

set(CMAKE_C_STANDARD 23)

add_executable(simple_queue main.c
        simple_queue.c
        simple_queue.h)

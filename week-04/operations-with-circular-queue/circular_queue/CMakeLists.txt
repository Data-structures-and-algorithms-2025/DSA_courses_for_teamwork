cmake_minimum_required(VERSION 3.29.6)
project(circular_queue C)

set(CMAKE_C_STANDARD 23)

add_executable(circular_queue main.c
        circular_queue.c
        circular_queue.h)

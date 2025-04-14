cmake_minimum_required(VERSION 3.29.6)
project(circular_queue C)

set(CMAKE_C_STANDARD 23)

add_executable(circular_queue main.c
        circular_queue.c
        circular_queue.h
        ../../operations-with-simple-queue/simple_queue/simple_queue.c
        ../../../week-05/operations-with-double-list/double_list/main.c
        ../../../week-05/operations-with-double-list/double_list/double_list_functions.c
        ../../../week-05/operations-with-simple-list/simple_list/main.c)

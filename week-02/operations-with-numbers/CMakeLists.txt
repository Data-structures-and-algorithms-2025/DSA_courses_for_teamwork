cmake_minimum_required(VERSION 3.28.1)
project(operations-with-numbers C)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_C_STANDARD 23)


include_directories(arrays algorithms utils)
add_executable(operations-with-numbers main.c
        arrays/arrays.c
        arrays/arrays.h
        algorithms/algorithms.c
        algorithms/algorithms.h
        utils/utils.c
        utils/utils.h
        arrays/arrays.c
        arrays/arrays.c
        ../../week-03/operations-with-stack/main.c
        ../../week-03/operations-with-struct/main.c)
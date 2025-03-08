cmake_minimum_required(VERSION 3.29)
project(operations-with-numbers C)

set(CMAKE_C_STANDARD 23)

add_executable(operations-with-numbers main.c
        arrays/arrays.c
        arrays/arrays.h
        algorithms/algorithms.c
        algorithms/algorithms.h
        utils/utils.c
        utils/utils.h
)

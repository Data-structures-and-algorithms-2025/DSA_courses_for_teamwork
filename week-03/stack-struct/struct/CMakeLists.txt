cmake_minimum_required(VERSION 3.30)
project(stack_struct C)

set(CMAKE_C_STANDARD 23)

include_directories(headers)

add_executable(stack_struct main.c
        sources/stack.c
        headers/stack.h
)

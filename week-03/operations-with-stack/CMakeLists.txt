cmake_minimum_required(VERSION 3.30)
project(operations_with_stack C)

set(CMAKE_C_STANDARD 23)

add_executable(operations_with_stack main.c
        int_stack/stack.c
        int_stack/stack.h)

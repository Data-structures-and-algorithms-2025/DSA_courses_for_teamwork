cmake_minimum_required(VERSION 3.30)
project(operations_with_numbers C)

set(CMAKE_C_STANDARD 23)
include_directories(headers)
add_executable(operations_with_numbers main.c
        sources/product.c
        sources/product.h)

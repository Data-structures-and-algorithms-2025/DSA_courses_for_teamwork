cmake_minimum_required(VERSION 3.30)
project(operations-with-struct C)

set(CMAKE_C_STANDARD 23)
include_directories(product)

add_executable(operations-with-struct main.c
        product/product.c
        product/product.h
)

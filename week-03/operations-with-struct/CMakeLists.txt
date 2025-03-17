cmake_minimum_required(VERSION 3.29.6)
project(operations-with-struct C)

set(CMAKE_C_STANDARD 23)

add_executable(operations-with-struct main.c
        product/product.c
        product/product.h
        product/product.c
        product/product.h
)

cmake_minimum_required(VERSION 3.29)
project(week_03 C)

set(CMAKE_C_STANDARD 11)

include_directories(operations-with-stack/int_stack)
include_directories(operations-with-struct/product)

add_executable(week_03
    operations-with-stack/int_stack/stack.c
    operations-with-stack/int_stack/stack.h
    operations-with-stack/main.c
    operations-with-struct/product/product.c
    operations-with-struct/product/product.h
    operations-with-struct/main.c)

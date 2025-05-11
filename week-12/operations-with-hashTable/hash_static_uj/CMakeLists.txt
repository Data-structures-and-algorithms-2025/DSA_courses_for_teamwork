cmake_minimum_required(VERSION 3.23)
project(hash_static C)

set(CMAKE_C_STANDARD 23)

add_executable(hash_static_uj main.c hash_table.c hash_table.h)

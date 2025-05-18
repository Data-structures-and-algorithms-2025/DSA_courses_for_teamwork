cmake_minimum_required(VERSION 3.23)
project(hash_dynamic C)

set(CMAKE_C_STANDARD 23)

add_executable(hash_dynamic main.c sources/hash_table.c headers/hash_table.h sources/node.c headers/node.h)

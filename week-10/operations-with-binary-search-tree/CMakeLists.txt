cmake_minimum_required(VERSION 3.29)
project(operations_with_binary_search_tree C)

set(CMAKE_C_STANDARD 23)

add_executable(operations_with_binary_search_tree main.c headers/binary_search_tree.h headers/constants.h sources/binary_search_tree.c)

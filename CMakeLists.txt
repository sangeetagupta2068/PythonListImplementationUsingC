cmake_minimum_required(VERSION 3.14)
project(DataStructuresMSc C)

set(CMAKE_C_STANDARD 99)

add_executable(DataStructuresMSc main.c data_structures.h data_structures_lib.c test_main.c)
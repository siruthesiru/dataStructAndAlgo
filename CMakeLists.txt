cmake_minimum_required(VERSION 3.16)
project(dataStructAndAlgo C)

set(CMAKE_C_STANDARD 99)

add_executable(dataStructAndAlgo bitCount.c abstractDataType.c)
add_executable(bitCount bitCount.c)
add_executable(abstractDataType abstractDataType.c)
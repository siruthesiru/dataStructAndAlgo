cmake_minimum_required(VERSION 3.16)
project(lastChance C)

set(CMAKE_C_STANDARD 99)

add_executable(lastChance main.c)

add_executable(list list.c)
add_executable(aitest aitest.c circularQueue.c test.c)
add_executable(stack stack.c stackArray.h stackLink.h)
add_executable(circularQueue circularQueue.c)
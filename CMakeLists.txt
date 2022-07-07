cmake_minimum_required(VERSION 3.16)
project(lastChance C)

set(CMAKE_C_STANDARD 99)

add_executable(lastChance "ADT List/arrayList.c")

add_executable(list "ADT List/linkedList (initialize, insertLast).c")
add_executable(aitest "ADT Queue/circularQueue.c")
add_executable(stack "ADT Stack/stack.c" "ADT Stack/stackArray.h" "ADT Stack/stackLink.h")
add_executable(circularQueue "ADT Queue/circularQueue.c")
add_executable(binarySearchTree Unfinished/binarySearchTree.c)
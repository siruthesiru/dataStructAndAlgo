cmake_minimum_required(VERSION 3.16)
project(lastChance C)

set(CMAKE_C_STANDARD 99)

add_executable(lastChance "Unfinished/arrayList.c" "ADT List/listLinkedList.h")

add_executable(list "Unfinished/linkedList (initialize, insertLast).c")
add_executable(aitest "ADT Queue/circularQueue.c")
add_executable(stack "ADT Stack/stackMain.c" "ADT Stack/stackArray.h" "ADT Stack/stackLink.h")
add_executable(circularQueue "ADT Queue/circularQueue.c")
add_executable(binarySearchTree Unfinished/binarySearchTree.c)
add_executable(stackMain "ADT Stack/stackMain.c")
add_executable(listMain "ADT List/listMain.c" "ADT List/listArrayV1.h" "ADT List/listCursorBased.h" "ADT List/listArrayV2.h")
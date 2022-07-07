#ifndef LASTCHANCE_LISTARRAYV4_H
#define LASTCHANCE_LISTARRAYV4_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct listStruct{
    char *elemPtr;
    int ctr;
}*List;

void initialize(List* L){
    char* a = calloc(sizeof(char), MAX);

    List b = malloc(sizeof(struct listStruct));

    b->elemPtr = a;
    b->ctr = 0;

    *L = b;
}

//Inserts element x at position p in list L
void insert(char x, int p, List L){

}

//Deletes element found at position p in List L
void delete(int p, List L){

}

//Returns position of x in List L
void locate(char x, List L){

}

//Returns the element at position p
int retrieve(int p, List L){

}

void sort(List L){

}

int deleteAll(List L){

}

void freeList(List* L){
    free((*L)->elemPtr)
}

#endif //LASTCHANCE_LISTARRAYV4_H

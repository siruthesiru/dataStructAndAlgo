#ifndef LASTCHANCE_LISTARRAYV1_H
#define LASTCHANCE_LISTARRAYV1_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct listStruct{
    char data[MAX];
    int ctr;
}List;

void initialize(List* L){


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
    int i;

    for(i = 0; i < MAX; i++){
        L->data[i] = '\0';
    }

    L->ctr = 0;
}

#endif //LASTCHANCE_LISTARRAYV1_H

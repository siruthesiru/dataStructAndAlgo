#ifndef LASTCHANCE_LISTARRAYV2_H
#define LASTCHANCE_LISTARRAYV2_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct listStruct{
    char data[MAX];
    int ctr;
}*List;

void initialize(List* L){
    List a;

    a = malloc(sizeof(struct listStruct));

    a->ctr = 0;

    *L = a;
}

//Inserts element x at position p in list L
void insert(char x, int p, List* L){
    (*L)->data[p] = x;
}

//Deletes element found at position p in List L
void delete(int p, List* L){
    (*L)->data[p] = '\0';
}

//Returns position of x in List L
int locate(char x, List L){
    int i;

    for(i = 0; i < MAX; i++){
        if((*L).data[i] == x){
            return i;
        }
    }

    i = -1;

    return i;
}

//Returns the element at position p
char retrieve(int p, List L){
    return (*L).data[p];
}

void sort(List L){

}

int deleteAll(List* L, char x){
    int i;
    int deleted;

    for(i = 0; i < MAX; i++){
        if((*L)->data[i] == x){
            (*L)->data[i] = '\0';

            ++deleted;
        }
    }

    return deleted;
}

void freeList(List* L){
    free(*L);
}


#endif //LASTCHANCE_LISTARRAYV2_H
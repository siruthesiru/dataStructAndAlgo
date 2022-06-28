//
// Created by Sirutonin on 6/22/2022.
//

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
typedef struct node{
    char *elemPtr;
    int count;
}*List;

//==========================PASS BY COPY========================//
//List initList(List L);
//
//int main(){
//    List L;
//
//    L = initList(L);
//
//    free(L);
//}
//
//List initList(List L){
//    L = malloc(sizeof(struct node));
//
//    L->elemPtr = (char*)calloc(SIZE, sizeof(char));
//
//    L->count = 0;
//
//    return L;
//}

//==========================PASS BY ADDRESS========================//
void initList(List* L);
void insertLast(List* L, char elem);
void displayList(List L);

int main(){
    List L;

    initList(&L);

    insertLast(&L, 'a');
    insertLast(&L, 'o');

    displayList(L);

    free(L->elemPtr);
    free(L);

}

void initList(List* L){
//    *L = (List)malloc(sizeof(struct node));
    *L = (List)calloc(1, sizeof(struct node));

    (*L)->elemPtr = (char*)calloc(SIZE, sizeof(char));

    (*L)->count = 0;
}

void insertLast(List* L, char elem){
    (*L)->elemPtr[(*L)->count] = elem;

    (*L)->count++;
}

void displayList(List L){
    for(int i = 0; i < L->count; i++){
        printf("%c\n", L->elemPtr[i]);
    }

    printf("%d\n", L->count);
}
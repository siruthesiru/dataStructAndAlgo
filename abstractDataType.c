//
// Created by Sirutonin on 3/20/2022.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char elem;
    struct node* link;
}ctype, *List;

void displayList(List);

int main(){
    List L;

    ctype** p = &L;
    ctype* q = L;

    q->elem = 'a';
    q->link = NULL;

    displayList(L);

    free(L);

    return 0;
}

void displayList(List list){
    List temp;

    for(temp = list; temp != NULL; temp = temp->link){
        printf("\n%c", temp->elem);
    }
}
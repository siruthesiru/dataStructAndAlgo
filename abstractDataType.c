//
// Created by Sirutonin on 3/20/2022.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char elem;
    struct node* link;
}ctype, *List;

int main(){
    List L = malloc(4 * sizeof(ctype));

    List p = L;

    List *q = *L;

    return 0;
}
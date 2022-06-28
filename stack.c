//
// Created by Sirutonin on 6/26/2022.
//

#include <stdio.h>
#include <stdlib.h>
//#include "stackArray.h"
#include "stackLink.h"

enum{TRUE, FALSE};

int main(int argc, char *argv[]){
    Stack new;
    char head;
    int i, alphabet;

    initStack(&new);

    //Populates Stack with Letters
    for(i = 0, alphabet = 97; i < 10; i++, alphabet++){
        push(&new, (char)alphabet);
    }

    //First form of the Stack
    displayStack(new);

    //Top Usage
    printf("\n%c", top(new));

    //Pop Usage
    head = pop(&new);

    //Checking if Pop is successful
    displayStack(new);
    printf("\n%c", head);

    //insertBottom Usage
    insertBottom(&new, 'z');

    //Final form of Stack
    displayStack(new);

    //Free
    if(new != NULL){
        Stack temp;

        do{
            temp = new;
            new = new->link;
            free(temp);
        }while(new != NULL);
        free(new);
    }

    return 0;
}
//
// Created by sirutonin on 7/6/22.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct cell{
    int elem;
    struct cell *LC;
    struct cell *RC;
}ctype, *BST;

short Member(BST, int);

BST initialize(){
    BST temp;
    temp = (BST)malloc(sizeof(ctype));
    temp->LC = NULL;
    temp->RC = NULL;
    return temp;
}

void insert(BST t, int x){
    if(t==NULL){
        t = initialize();
        t->elem = x;
        return;
    }
    if(x < t->elem){
        insert(t->LC, x);
    }
    else if(x > t->elem){
        insert(t->RC, x);
    }
}

int findMin(BST t){
    if(t->LC == NULL){
        return t->elem;
    }
    else{
        return findMin(t->LC);
    }
}

void delete(BST t, int x){
    if(t==NULL){
        return;
    }
    if(x == t->elem){
        if(t->LC == NULL && t->RC == NULL){
            free(t);
            t = NULL;
        }
        else if(t->LC == NULL){
            BST temp = t;
            t = t->RC;
            free(temp);
        }
        else if(t->RC == NULL){
            BST temp = t;
            t = t->LC;
            free(temp);
        }
        else{
            int temp = findMin(t->RC);
            t->elem = temp;
            delete(t->RC, temp);
        }
    }
    else if(x < t->elem){
        delete(t->LC, x);
    }
    else if(x > t->elem){
        delete(t->RC, x);
    }
}

int main(){
    BST S;
    short isMember;

    S = initialize();

    insert(S, 10);
    insert(S, 5);
    insert(S, 14);
    insert(S, 7);
    insert(S, 12);
    insert(S, 18);
    insert(S, 15);

    printf("This works\n");

    isMember = Member(S, 14);

    printf("The given element %s a member of the tree.", (isMember == 1)? "is" : "is not");
}

short Member(BST givenTree, int elem){

    do{

        if(givenTree->elem == elem){
            return 1;
        }else if(givenTree->elem < elem){
            givenTree = givenTree->LC;
        }else if(givenTree->elem > elem) {
            givenTree = givenTree->RC;
        }

    }while(givenTree != NULL);

    return 0;
}

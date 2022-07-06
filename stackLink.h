#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char data;
    struct node *link;
}*Stack;

void push(Stack*, char);
char pop(Stack*);
char top(Stack);
int isFull(Stack);
int isEmpty(Stack);

void push(Stack *s, char x)
{
    Stack temp = (Stack)malloc(sizeof(struct node));

    if(temp == NULL){
        printf("\nThere is no more space.");
    }else{
        temp->data = x;
        temp->link = *s;
        *s = temp;
    }

}

char pop(Stack *s)
{
    Stack temp = *s;
    char retVal;

    if(isEmpty(*s)){
        printf("\nPop: Stack is Empty");

        retVal = '\0';

    }else{
        *s = (*s)->link;

        retVal = temp->data;

        free(temp);
    }

    return retVal;
}

char top(Stack s)
{
    char retVal;

    if(isEmpty(s)){
        printf("\nStack is empty");
        retVal = '\0';
    }else{
        retVal = (*s).data;
    }

    return retVal;
}

void initStack(Stack *s)
{
    *s = NULL;
}

int isEmpty(Stack s)
{
    int retVal = 0;

    if(s == NULL){
        retVal = 1;
    }

    return retVal;
}

int isFull(Stack s)
{
    int retVal = 0;

    if(s->link == NULL){
        retVal = 1;
    }

    return retVal;
}

void displayStack(Stack s) {
    struct node* current = s;

    if(s == NULL){
        printf("\nStack is empty");
    }else{
        printf("\n");

        while(current != NULL) {
            printf("%c ", current->data);
            current = current->link;
        }
    }
}

void insertBottom(Stack *s, char x)
{
    Stack temp = (Stack)malloc(sizeof(struct node));

    if(temp == NULL){
        printf("\nThere is no more space.");
    }else{

        temp->data = x;
        temp->link = NULL;

        if(*s == NULL)
            *s = temp;
        else
        {
            Stack curr = *s;

            while(curr->link != NULL){
                curr = curr->link;
            }

            curr->link = temp;
        }
    }
}

#endif

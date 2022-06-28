#ifndef STACK_H
#define STACK_H

#include <stdio.h>

#define SIZE 10
typedef struct{
    char data[SIZE];
    int top;
}Stack;

void push(Stack*, char);
char pop(Stack*);
char top(Stack);
int isFull(Stack);
int isEmpty(Stack);

void push(Stack *s, char x){
    if(s->top == SIZE-1){
        printf("\nPush: Stack Overflow, item \"%c\" was not pushed", x);
    }else{
        s->data[++s->top] = x;
    }
}

char pop(Stack *s){
    char retVal;

    if(s->top == -1){
        printf("\nPop: Stack is Empty");

        retVal = '\0';
    }else{
        retVal = s->data[s->top];

        s->data[s->top] = '\0';

        s->top--;
    }

    return retVal;
}

char top(Stack s){
    char retVal;

    if(s.top == -1){
        printf("\nStack is empty");
        retVal =  '\0';
    }else{
        retVal = s.data[s.top];
    }

    return retVal;
}

void initStack(Stack *s){
    s->top = -1;
}

int isEmpty(Stack s){
    int retVal = 0;

    if(s.top == -1){
        retVal = 1;
    }
    return retVal;
}

int isFull(Stack s){
    int retVal = 0;

    if(s.top == SIZE-1){
        retVal = 1;
    }
    return retVal;
}

void displayStack(Stack s){
    int i;

    if(s.top == -1){
        printf("\nStack is empty");
    }else{
        printf("\n");

        for(i = s.top; i >= 0; i--){
            printf("%c ",s.data[i]);
        }
    }
}

void insertBottom(Stack* s, char x){
//    char curr = pop(s);
    Stack temp;

    initStack(&temp);

    if(s->top == SIZE-1){
        printf("\nInsertBottom: Stack Overflow");
    }else{

        do{
            push(&temp, pop(s));
        }while(s->top != -1);

        push(s, x);

        do{
            push(s, pop(&temp));
        }while(temp.top != -1);
    }
}

#endif

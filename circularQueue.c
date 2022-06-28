//
// Created by Sirutonin on 6/26/2022.
//

#include <stdio.h>

#define MAX 8
typedef struct{
    char Elem[MAX];
    int front;
    int rear;
}Queue;

void initQueue(Queue *Q){
    Q->front = 1;
    Q->rear = 0;
}

void enqueue(Queue *Q, char x){
    int check = Q->rear;
    int isFull = (Q->front == (check + 2)%MAX);

    if(isFull){
        printf("\nQueue is full. Element not added.");
    }else{
        if(Q->rear==MAX-1){
            Q->rear=0;
        }
        else{
            Q->rear++;
        }
        Q->Elem[Q->rear]=x;
    }
}

void dequeue(Queue *Q){
    int check = Q->rear;

    if(Q->front == (check + 1)%MAX){
        printf("\nQueue is empty");
    }

    else{
        Q->front = (Q->front + 1)%MAX;
    }
}

char front(Queue Q){
    char retVal;
    int check = Q.rear;

    if(Q.front == (check + 1)%MAX){
        printf("\nQueue is Empty");
        retVal = 0;
    }else{
        retVal = Q.Elem[Q.front];
    }
    return retVal;
}

char rear(Queue Q){
    char retVal;
    int check = Q.rear;

    if(Q.front == (check + 1)%MAX){
        printf("\nQueue is Empty");
        retVal = 0;
    }else{
        retVal = Q.Elem[Q.rear];
    }
    return retVal;
}

void displayQueue(Queue q){
    int i, check = q.rear;

    printf("\n");

    if(q.front == (check + 1)%MAX){
        printf("Nothing to display: Queue is empty");
    }else{
        if(q.rear >= q.front){
            for(i = q.front; i <= q.rear; i++){
                printf("%c ", q.Elem[i]);
            }
        }
        else{
            for(i = q.front; i < MAX; i++){
                printf("%c ", q.Elem[i]);
            }
            for(i = 0; i <= q.rear; i++){
                printf("%c ", q.Elem[i]);
            }
        }
    }
}

int main(){
    Queue Q;

    initQueue(&Q);

    enqueue(&Q, 'a');
    enqueue(&Q, 'b');
    enqueue(&Q, 'c');
    enqueue(&Q, 'd');
    enqueue(&Q, 'e');
    enqueue(&Q, 'f');
    enqueue(&Q, 'g');
    enqueue(&Q, 'h');
    enqueue(&Q, 'i');

    displayQueue(Q);

    printf("\nFront: %c", front(Q));

    printf("\nRear: %c", rear(Q));

    dequeue(&Q);
    dequeue(&Q);
    dequeue(&Q);
    dequeue(&Q);
    dequeue(&Q);
    dequeue(&Q);
    dequeue(&Q);
    dequeue(&Q);


    displayQueue(Q);
}
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
typedef struct{
    char data;
    int link;
}Nodetype;

typedef struct{
    Nodetype Nodes[SIZE];
    int avail;            //holds index of 1st available node
}VirtualHeap;

typedef int List;

void initializeVH(VirtualHeap*);
int allocSpace(VirtualHeap*);
void deallocSpace(VirtualHeap*, int);

int main(){
    VirtualHeap VH;
    int check;

    initializeVH(&VH);
    check = allocSpace(&VH);
    deallocSpace(&VH, 2);

    printf("%d\n", check);

    return 0;
}

void initializeVH(VirtualHeap *VH){
    VH->avail = 0;
    for(int i = 0; i < SIZE; i++){
        VH->Nodes[i].link = i + 1;
    }
}

int allocSpace(VirtualHeap *VH){
    if(VH->avail == SIZE){
        return -1;
    }
    int temp = VH->avail;
    VH->avail = VH->Nodes[VH->avail].link;
    return temp;
}

void deallocSpace(VirtualHeap *VH, int index){
    VH->Nodes[index].link = VH->avail;
    VH->avail = index;
}

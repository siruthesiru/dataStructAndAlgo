#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX  0xF
typedef struct node{
    char data[MAX];
    int ctr;  //actual elements in the array
}*arrayList;

typedef enum{false, true}bool;

void initList(arrayList);
void displayList(arrayList, int, int);
void sortList(arrayList);
int changeLetter(arrayList, char, char);
void insertSorted(arrayList, char);
int deleteAll(arrayList, char);

int main() {
    int changes;
    int deleted;
    arrayList nameList;

    nameList = malloc(sizeof(arrayList) * 10);

    initList(nameList);

    strcpy(nameList->data, "The_quick_blue");
    nameList->ctr = 14;

    changes = changeLetter(nameList, 'e', 'b');

    sortList(nameList);

    insertSorted(nameList, 'a');

    deleted = deleteAll(nameList, 'b');

    displayList(nameList, changes, deleted);

    free(nameList);

    return 0;
}

void initList(arrayList givenList){
    for(int i = 0; i < MAX; i++){

        givenList->data[i] = '\0';

    }
    givenList->ctr = 0;
}

void displayList(arrayList givenList, int changes, int deleted){
    for(int i = 0; i != givenList->ctr; i++){

        printf("%c\n", givenList->data[i]);

    }

    printf("%d\n", givenList->ctr);

    printf("Changes made: %d\n", changes);
    printf("The number of deleted elements is: %d\n", deleted);
}

int changeLetter(arrayList givenList, char A, char B){
    int changeCtr = 0;

    if(givenList->ctr > 0){
        for(int i = 0; i < givenList->ctr; i++){
            if(givenList->data[i] == A){
                givenList->data[i] = B;

                ++changeCtr;
            }
        }
    }
    return changeCtr;
}

void insertSorted(arrayList givenList, char toInsert){
    bool alreadyExists = false;
    int insertPos = 0;
    int counter = givenList->ctr;

    if(givenList->ctr >= MAX){

        printf("The list is full.\n");

    }else{

        for(int i = 0; i < givenList->ctr; i++){
            if(givenList->data[i] == toInsert){
                alreadyExists = true;
            }
        }

        if(alreadyExists == false){

            if(toInsert < givenList->data[givenList->ctr/2]){

                for(int j = 0; j <= givenList->ctr; j++) {
                    if (toInsert < givenList->data[j]) {

                        insertPos = j;

                        break;

                    }
                }

                do {
                    givenList->data[counter + 1] = givenList->data[counter];

                    counter -= 1;
                } while (counter >= insertPos);

                givenList->data[insertPos] = toInsert;
            }

            givenList->ctr++;
        }else{
            printf("Element already exists in the list.\n");
        }

    }
}

void sortList(arrayList givenList){
    char temp;
    bool swapped;

    do{
        swapped = false;

        for(int i = 0; i < givenList->ctr-1; i++){
            givenList->data[i] = (char)tolower(givenList->data[i]);
            givenList->data[i+1] = (char)tolower(givenList->data[i+1]);

            if(givenList->data[i] > givenList->data[i+1]){
                temp = givenList->data[i+1];
                givenList->data[i+1] = givenList->data[i];
                givenList->data[i] = temp;

                swapped = true;
            }
        }

    }while(swapped == true);

}

int deleteAll(arrayList givenList, char toDelete) {
    int counter;
    int deleted = 0;

    for(int i = 0; i <= givenList->ctr; i++){

        while(givenList->data[i] == toDelete){
            counter = i;

            do {
                givenList->data[counter] = givenList->data[counter+1];

                counter += 1;
            } while (counter < givenList->ctr);

            givenList->ctr--;
            deleted++;
        }

    }

    return deleted;
}

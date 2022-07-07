#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printBit(char);

int main() {
    char a = -75;

    printBit(a);

    return 0;
}

void printBit(char number) {
    unsigned int i;
    int bitCount = (8 * sizeof(number));
    int spaceCount = 1;
    char *face = malloc(sizeof(char) * 20);

    strcpy(face, "kobe");

    for (i = 1 << (bitCount - 1); i > 0; i = i / 2) {

        if (i & number) {
            printf("1");
        } else {
            printf("0");
        }

        if (spaceCount % 8 == 0) {
            printf(" ");
        }
        spaceCount++;
    }

    printf("\n%s", face);

    free(face);
}
//#include "listArrayV1.h"
#include "listArrayV2.h"
//#include "listArrayV3.h"
//#include "listArrayV4.h"
//#include "listLinkedList.h"
//#include "listCursorBased.h"

int main(__attribute__((unused))int argc, __attribute__((unused))char **argv){
    List L;
    int location, deleted;
    char retrieved;

    initialize(&L);

    insert('a', 0, &L);
    insert('b', 4, &L);
    insert('b', 5, &L);
    insert('c', 1, &L);

    delete(4, &L);

    location = locate('a', L);
    retrieved = retrieve(4, L);
    deleted = deleteAll(&L, 'b');

    printf("Location of 'a' : %d\nRetrieved 4 as : %c\nTotal deleted : %d", location, retrieved, deleted);

    freeList(&L);

    return 0;
}

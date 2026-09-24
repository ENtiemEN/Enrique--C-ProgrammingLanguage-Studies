#include <stdio.h>
#include "linkedlist.h"

int main() {
    linkedlist_t* linkedlist = CreateLinkedWithData();

    // PrintLinkedList(linkedlist); // 1 2 3

    AppendingToLinkedList(linkedlist, 4);
    AppendingToLinkedList(linkedlist, 5);
    
    PrintLinkedList(linkedlist);

    FreeLinkedList(linkedlist);

    return 0;
}
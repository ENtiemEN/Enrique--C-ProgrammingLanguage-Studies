#ifndef LINKED_LIST_H
#define LINKED_LIST_H
// node is the name of the struct. And node_t is the alias
// `struct node` is the name in C; `node_t` is an alias through typdef
//// Individual node in the chain
typedef struct node{
    int data;
    struct node* next; // next is a pointer to another struct node
}node_t;

//// Linked list data structure, which always holds the first node, in out 'chain'
typedef struct linkedlist{
    node_t* head;
}linkedlist_t;

// malloc a new ll, and then return a pointer to that ll
linkedlist_t* CreateLinkedWithData();
// empty
linkedlist_t* CreateLinkedList();

// Walk through ll and print all nodes
void PrintLinkedList(linkedlist_t* list);

// Walk through ll, and delete all nodes
void FreeLinkedList(linkedlist_t* list);

// Create a new node_t, and add to the end of ll
void AppendingToLinkedList(linkedlist_t* list, int data);

#endif
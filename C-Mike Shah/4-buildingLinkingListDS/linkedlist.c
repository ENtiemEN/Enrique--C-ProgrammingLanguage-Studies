#include "linkedlist.h"
#include <stdlib.h> // malloc/free and NULL
#include <stdio.h>

// malloc a new ll, and then return a pointer to that ll
linkedlist_t* CreateLinkedWithData(){
    linkedlist_t* newList = CreateLinkedList();
    node_t* newNode1 = (node_t*) malloc(sizeof(node_t));
    newNode1->data = 1;
    newList->head = newNode1;
    
    node_t* newNode2 = (node_t*) malloc(sizeof(node_t));
    newNode2->data = 2;
    newNode1->next = newNode2;
    
    node_t* newNode3 = (node_t*) malloc(sizeof(node_t));
    newNode3->data = 3;
    newNode2->next = newNode3;
    newNode3->next = NULL;

    return newList;
}

// empty
linkedlist_t* CreateLinkedList(){
    linkedlist_t* newList = (linkedlist_t*) malloc(sizeof(linkedlist_t));
    newList->head = NULL;

    return newList;
}

// Walk through ll and print all nodes
void PrintLinkedList(linkedlist_t* list){
    node_t* iter = list->head;
    while(iter !=  NULL){
        printf("%d ", iter->data);
        iter = iter->next;
    }
    printf("\n");
}

// Walk through ll, and delete all nodes
void FreeLinkedList(linkedlist_t* list){
    if(list==NULL) {
        return;
    }

    node_t* current = list->head;
    if(current==NULL){
        free(list);
        return;
    }
    node_t* next = current->next;
    while(current != NULL){
        free(current);
        current = next;
        // Ensure we're not at the end, and not try to access (dereference) current->next
        if(current != NULL){
            next=current->next;
        }
    }

    // Free the actual LinkedList
    free(list);
}

// Create a new node_t, and add to the end of ll
void AppendingToLinkedList(linkedlist_t* list, int data){
    // SLL Empty
    if(list->head == NULL){
        node_t* newNode = (node_t*) malloc(sizeof(node_t));
        newNode->data = data;
        newNode->next = NULL;

        list->head = newNode;
    }else{
        // SLL is not empty
        node_t* iter = list->head;

        while(iter->next != NULL){
            iter = iter->next;
        }
        node_t* newNode = (node_t*) malloc(sizeof(node_t));
        newNode->data = data;
        newNode->next = NULL;

        iter->next = newNode;
    }    
}
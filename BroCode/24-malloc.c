/*
    malloc() = A function in C that dynamically allocates a specified number of bytes in memory
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //char grades[5] = {0}; // What if I don't know the size of my array?
    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));
    /*
    The memory that we reserve, it's from a location known as the HEAP. For most situations when we use memory, it's from a place called the stack.
    We're going to be borrowing or reting space from the Heap.

    `malloc(number * sizeof(char))` this function return a pointer to where that memory is located that we reserved.
    */


    // If the `malloc()` return a NULL. If we dereference a null pointer it's dangerous. It can cause a SEGMENTATION FAULT
    if(grades == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    //int size = sizeof(grades) / sizeof(grades[0]) // (X) Doesn't work because `grades` is a pointer to an array like data structure.
    for(int i=0; i<number; i++){
        printf("Enter grade #%d: ", i+1);
        scanf(" %c", &grades[i]);
    }

    printf("\nPrinting the array of grades...\n");

    for(int i=0; i<number; i++){
        printf("%c ", grades[i]);
    }

    free(grades); // returning "rented" space back to the OS
    grades = NULL; // if we don't do that -> "Dangling pointer"

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int* allocateOnHeap(int size){
    // void* -- 'void pointer' -> void pointers can be converted to any other data type, but we must explicitly cast to that data type first.
    int* array = (int*)malloc(sizeof(int)*size);
    //int* array = malloc(sizeof(int)*50000); // <- without typecasting

    printf("heap memory address %p\n", array);
    printf("stack memory of a local %p\n", &array);

    for(int i=0; i<size; i++){
        array[i] = i;
    }

    return array;
}

int main(){
    int* heapData = allocateOnHeap(10);
    printf("heap memory address %p\n", heapData);
    printf("stack memory of a local %p\n", &heapData);

    for(int i=0; i<10; i++){
        printf("heapData[%d]=%d\n", i, heapData[i]);
    }

    free(heapData);

    return 0;
}
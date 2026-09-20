/*
    realloc() = Reallocation.
                Resize previously allocated memory
                realloc(ptr, bytes)
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Suppose -> We're a store owner
    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));
    if(prices == NULL){
        printf("Memory allocation failed!\n");
    }
    

    free(prices);
    prices = NULL;
    return 0;
}
/*
    realloc() = Reallocation.
                Resize previously allocated memory
                realloc(ptr, bytes)
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    // Suppose -> We're a store owner
    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));
    if(prices == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i=0; i<number; i++){
        printf("Enter price #%d: ", i+1);
        scanf("%f", &prices[i]);
    }

    // What if we want to add more prices or get rid of some?
    int newNumber = 0;
    char userAnswer = '\0';

    printf("Would you like to modify the amount of prices? (Y/N) ");
    scanf(" %c", &userAnswer);
    if(userAnswer == 'Y'){
        printf("Enter a new number of prices: ");
        scanf("%d", &newNumber);

        // `realloc()` will also free() old memory
        float *temp = realloc(prices, newNumber * sizeof(float));
        if(temp == NULL){
            printf("Could not reallocate memory!\n");
        }else {
            prices = temp;
            temp = NULL;

            for(int i=number; i<newNumber; i++){
                printf("Enter price #%d: ", i+1);
                scanf("%f", &prices[i]);
            }
            
            printf("Printing the array of prices...\n");
            for(int i=0; i<newNumber; i++){
                printf("$%.2f ", prices[i]);
            }
        }
    } else {
        printf("Printing the array of prices...\n");
        for(int i=0; i<number; i++){
            printf("$%.2f ", prices[i]);
        }
    }
    
    free(prices);
    prices = NULL;
    return 0;
}
/*
    calloc() = Contiguous Allocation
    Allocates memory dynamically and sets all allocated bytes to 0.
    malloc() is faster, but calloc() leads to less bugs
    `calloc(#, size)`
    `malloc(# bytes)`
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // we don't know the number of Scores apriori
    int number = 0;
    printf("Enter the number of scores: ");
    scanf("%d", &number);

    int *scores_m = malloc(number * sizeof(int));
    int *scores_c = calloc(number, sizeof(int));

    if(scores_m == NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    if(scores_c == NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    // for(int i=0; i<number; i++){
    //     printf("%d ", scores_m[i]); //Undefined Behavior
    // }

    // printf("\n");

    for(int i=0; i<number; i++){
        printf("%d ", scores_c[i]);
    }

    printf("\nAsigning the values...\n");

    for(int i=0; i < number; i++){
        printf("Enter score #%d: ", i+1);
        scanf("%d", &scores_c[i]);
    }

    printf("\nPrinting the values...\n");
    for(int i=0; i < number; i++){
        printf("Score #%d: %d\n", i+1, scores_c[i]);
    }


    // Free the memory
    free(scores_m);
    scores_m = NULL;

    free(scores_c);
    scores_c = NULL;

    return 0;
}
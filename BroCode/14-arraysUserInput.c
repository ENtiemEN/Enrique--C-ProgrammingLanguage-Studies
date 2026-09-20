/* Array = A fixed-size collection of elements of the same data type (Similar to a variable, but it holds more than 1 value)*/
#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    //printf("%d", numbers); // If you pass an array to a function it decays into a pointer

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    printf("%d\n", sizeof(numbers[0])); // # of bytes -> 4
    printf("%d\n", sizeof(numbers)); // 20 bytes
    printf("%d\n", sizeof(grades)); // 5 bytes (5 elements of 1 byte)
    printf("%d\n", sizeof(grades[0])); // # of bytes -> 1

    for(int i=0; i < sizeof(grades)/ sizeof(grades[0]); i++) {
        printf("%c", grades[i]);
    }
    printf("\n");

    for(int i=sizeof(grades)/sizeof(grades[0])-1; i>=0; i--) {
        printf("%c", grades[i]);
    }
    printf("\n");

    // ============ User Input -- Array ============
    // int scores[5];

    // for(int i=0; i<sizeof(scores)/sizeof(scores[0]); i++){
    //     printf("%d"); // <- garbage values
    //     /*
    //         C doesn't automatically clear memory from programs that used that memory previously
    //     */
    // }
    printf("\n *** User Input *** \n");
    // A best practice is
    int scores[5] = {0};

    printf("Fill the array of Scores\n");
    for(int i=0; i<sizeof(scores)/sizeof(scores[0]); i++){
        printf("A[%d]= ", i);
        scanf("%d", &scores[i]);
    }

    printf("\nThe array of Scores is...\n");
    for(int i=0; i<sizeof(scores)/sizeof(scores[0]); i++){
        printf("%d\n", scores[i]);
    }

    return 0;
}
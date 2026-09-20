#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    /* Pseudo-random = Appear random but are determined by a mathematical formula that uses a seed value to generate a predictable sequence of numbers.
    Advanced: Mersenne Twister or /dev/random
    */
    srand(time(NULL));

    // NUMBER GUESSING GAME
    int min = 1;
    int max = 100;
    int computerNumber = (rand() % (max - min + 1)) + min;
    int userNumber = 0;
    bool flag = true;
    int tries = 0;
    int maxTries = 8;

    printf("****** NUMBER GUESSING GAME ******\n");
    while(tries != maxTries && flag) {
        printf("\nGuess a number between %d-%d: ", min, max);
        scanf("%d", &userNumber);
        if(userNumber < computerNumber){
            printf("\nTOO LOW!\n");
        } else if(userNumber > computerNumber){
            printf("\nTOO HIGH!\n");
        } else {
            printf("\nExactly, the numer is %d You win\n", computerNumber);
            flag = false;
        }
        tries++;
    }

    if(tries == maxTries) {
        printf("You reach the max amount of tries (%d). You Loose", maxTries);
    } else{
        printf("It took you %d tries", tries);
    }
    

    return 0;
}
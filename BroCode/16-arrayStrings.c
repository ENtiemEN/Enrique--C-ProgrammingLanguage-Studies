#include <stdio.h>

int main() {
    char fruits[][10] = {"Apple",
                         "Banana", 
                         "Coconut"};
    
    char fruits_c[][10] = {
        {'A','p','p','l','e','\0','\0','\0','\0','\0'},
        {'B','a','n','a','n','a','\0','\0','\0','\0'},
        {'C','o','c','o','n','u','t','\0','\0','\0'}
    };

    printf("%d\n", sizeof(fruits[0])); // 10 btyes
    printf("%d\n", sizeof(fruits)); // 30 bytes

    int size = sizeof(fruits) / sizeof(fruits[0]); // 3

    for(int i=0; i<size; i++){
        printf("%s\n", fruits[i]);
    }

    // ===============================

    // printf("%d\n", sizeof(fruits[0][0]));
    // printf("%c\n", fruits[0][0]);
    for(int i=0; i<sizeof(fruits)/sizeof(fruits[0]); i++){
        for(int j=0; j< sizeof(fruits[0])/sizeof(fruits[0][0]); j++){
            printf("%c", fruits[i][j]);
        }
        printf("\n");
    }

    return 0;
}
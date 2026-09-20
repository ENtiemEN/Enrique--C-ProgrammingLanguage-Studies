#include <stdio.h>

// GLOBAL SCOPE (hard to debug)
//// maybe in CONSTANT is a good option

int result = 0;

// Function PROTOTYPES
int add(int x, int y);
int substract(int x, int y);

int main() {
    /* Variable Scope = Refers to where a variable is recognized and accessible. Variables can share the same name if they're in different scopes {}
    */

    //int result = 0; //<-- two variables in the scope can't have the same name "error: redefinition of 'result'"
    int result = add(3, 4);

    int x = 5;
    int y = 6;

    printf("%d", result);

    return 0;
}

int add(int x, int y) {
    int result = x + y;
    return result;
}

int substract(int x, int y){
    int result = x - y;
    return result;
}
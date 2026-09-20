#include <stdio.h>

int main() {
    // arithmetic operators = + - * / %
    int x = 2;
    //int y = 3; // float z = x / y --> 0.000000
    float y = 3;
    float z = 0;

    //z = x+y;
    z = x / y;

    printf("%f\n",z);

    // Modulus Operator
    int a = 10;
    int b = 3;
    int c = 0;

    c = a % b;

    printf("%d\n", c);

    // Incremets | Decremets --> `x++;` `x--;`
    /* Augmented assignment operators | Compound assignment operators
        x += a
        x -= a
        x *= a
        x /= a
    */


    return 0;
}
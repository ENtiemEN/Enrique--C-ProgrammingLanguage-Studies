#include <stdio.h> // <- preprocessor directive
#include <stdbool.h> // <- header file to use booleans

/*
    Variables --> Reusable container for a value. Behaves as if it were the value it contains

    int = whole numbers (4 bytes in modern systems)
    float = single-precision decimal number (4 bytes)
    double = double-precision decimal number (8 bytes)
    char = single character (1 byte)
    char[] = array of characters (size varies)
    bool = true or false (1 byte, requires <stdbool.h>)
*/

int main() {
    int age = 23;
    float gpa = 2.5; // <- float: 6-7 digits after the decimal
    double pi = 3.14159235658979323;
    char grade = 'A';
    // Strings --> in other languages is a sequence of characters
    // Strings in C are a 'array of characters'
    char name[] = "Enrique Julca";
    bool isOnline = true;

    // Printing
    printf("Name: %s | Age: %d | GPA: %.2f\n", name, age, gpa);
    printf("The value of pi is %.24lf\n", pi);
    printf("My grade is %c\n", grade);
    
    if(isOnline) {
        printf("You're online!");
    } else {
        printf("You're offline!");
    }

    /* 
        In older versions 'C89/C90' , omitting this statement `return 0` will lead to undefined behavior. 
        But in later statements 'C99 an later', you can omit the statement
    */
    return 0; // <- indicates correct execution
}

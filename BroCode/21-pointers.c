/*
    pointer = A variable that stores the memory address of another varible.
    Benefit: They help avoid wasting memory by allowing you to pass the address of a large data structure instead of copying the entire data.
*/
#include <stdio.h>

void birthday(int *pAge);
void incrementGPA(float *gpa);

int main() {
    int age = 23;
    int *pAge = &age;

    printf("%p\n", &age); // show the location in memory of the value 'age'
    printf("%p\n", pAge); // 'pAge' is a variable that stores a position in memory
    //printf("%p\n", *pAge); // ¿?
    printf("%d\n", *pAge); // Actual value that store this pointer

    printf("My age this year is %d\n", age);
    birthday(pAge);
    printf("My age the next year is %d\n", age);

    float gpa = 3.0;
    printf("GPA before the increment %.2f\n", gpa);
    incrementGPA(&gpa);
    printf("GPA after the increment %.2f\n", gpa);

    return 0;
}

// Pass by reference
void birthday(int *pAge){
    (*pAge)++;
}

void incrementGPA(float *gpa){
    (*gpa)++;
}
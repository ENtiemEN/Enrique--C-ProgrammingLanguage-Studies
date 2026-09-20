#include <stdio.h>
#include <string.h>

int main() {
    // int age;
    // float gpa;
    // char grade;
    // char name[30];

    // // Undefined behavior
    // printf("%d\n", age);
    // printf("%f\n", gpa);
    // printf("%c\n", grade);
    // printf("%s\n", name);

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; //  <- null terminator
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa); // <- input buffer 3.2\n

    printf("Enter your last grade: ");
    scanf(" %c", &grade);

    getchar(); // <- Clean the input buffer
    printf("Enter your full name: ");
    //scanf("%s", &name); // <- can't read any whitespaces
    
    // fgets <> file get string
    fgets(name, sizeof(name), stdin); // name = "Enrique Julca\n"
    name[strlen(name) - 1] = '\0';

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);




    return 0;
}
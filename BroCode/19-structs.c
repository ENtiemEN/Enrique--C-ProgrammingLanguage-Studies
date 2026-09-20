/*
    Struct -> A custom container that holds multiple piece of related information.
    "Similiar to Objects in other languages"
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef char String[50];

struct Student{
    char name[50]; // <- members
    int age;
    float gpa;
    bool isFullTime;
};

typedef struct{
    String scientificName;
    int age;
    bool hasOwner;
} Animal;

void printAnimal(Animal animal);

int main(){
    struct Student student1 = {
        "Enrique",
        30,
        4.0,
        true
    };

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    // printf("%d\n", student1.isFullTime);
    printf("%s\n",(student1.isFullTime) ? "Full time Student" : "Not a full time Student");

    Animal animal1 = {
        "Canis lupus familiaris",
        10,
        true,
    };
    printf("The animal (%s) with %d years old. %s\n", animal1.scientificName, animal1.age, (animal1.hasOwner) ? "Has an owner" : "Don't have an owner");

    printf("\nPrinting an Empty Struct...\n");

    // Animal animal2;
    // printf("%s\n", animal2.scientificName); // Undefined Behavior
    Animal animal2 = {0};
    printf("%s\n", animal2.scientificName);
    printf("%d\n", animal2.age);
    printf("%s\n", (animal2.hasOwner) ? "Yes" : "No");
    
    printf("\nAsinging values to an Empty Struct...\n");
    
    strcpy(animal2.scientificName, "Musca domestica");
    //animal2.scientificName = "Musca domestica"; // <- ¿?
    animal2.age = 1;
    animal2.hasOwner = true;

    printAnimal(animal2);

    // ===============================================
    Animal animal3 = {0};
    strcpy(animal3.scientificName, "Strigiformes");
    animal3.age = 2;
    animal3.hasOwner = true;

    printAnimal(animal3);

    return 0;
}

void printAnimal(Animal animal){
    printf("Printing the new animal...\n");
    printf("Scientific Name -> %s\n", animal.scientificName);
    printf("Age -> %d\n", animal.age);
    printf("Has Owner? -> %s\n", (animal.hasOwner) ? "Yes" : "No");
}
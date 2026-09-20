/*
    Array of structs = Array where each element contains a struct {} Helps organize and groups together related data
*/
#include <stdio.h>

typedef struct{
    char model[25];
    int year;
    int price;
} Car;

void printCar(Car car);

int main(){
    Car cars[] = {{"Mustang", 2025, 32000},
                  {"Corvette", 2026, 68000},
                  {"Challenger", 2024, 29000}};
                  
    printf("%d\n", sizeof(cars));
    printf("%d\n", sizeof(cars[0]));
    printf("%d\n", sizeof(cars)/sizeof(cars[0]));

    for(int i=0; i<sizeof(cars)/sizeof(cars[0]); i++){
        printCar(cars[i]);
    }
    
    return 0;
}

void printCar(Car car){
    printf("%s %d $%d\n", car.model, car.year, car.price);
}
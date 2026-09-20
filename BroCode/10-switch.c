#include <stdio.h>

int main() {
    // switch = An alternative to using many if-else statements
    //          More efficient w/ fixed integer values

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator); // clear \n from input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2);


    switch(operator) {
        case '+':
            printf("Result: %.2lf + %.2lf = %.2lf",num1,num2, (num1+num2));
            break;
        case '-':
            printf("Result: %.2lf - %.2lf = %.2lf",num1,num2, (num1-num2));
            break;
        case '*':
            printf("Result: %.2lf * %.2lf = %.2lf",num1,num2, (num1*num2));
            break;
        case '/':
            if (num2 == 0.0){
                printf("Error: no se puede dividir entre cero");
            } else {
                printf("Result: %.2lf / %.2lf = %.2lf",num1,num2, (num1/num2));
            }
            break;
        default:
            printf("Not a valid Operator (Enter + - * /)");
    }

    return 0;
}
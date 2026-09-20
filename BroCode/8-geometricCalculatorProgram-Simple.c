#include <stdio.h>
#include <math.h>

const double PI = 3.14159265358979323;

double circleArea(double radius) { // <-- pass by value
    return PI * pow(radius, 2);
}

double surfaceArea(double *radius) { // <-- pass by reference
    return 4.0 * PI * *radius * *radius;
}

double sphereVolume(double *radius) {
    return 4 / 3.0 * PI * pow(*radius,3);
}

int main() {
    // double radius_value = 0.0;
    double radius_ref = 0.0;

    printf("Enter the radius: ");
    scanf("%lf", &radius_ref);

    //printf("Area of a circle -> %.2lf\n", circleArea(radius_value));
    printf("Area of a sphere -> %.2lf\n", surfaceArea(&radius_ref));
    printf("Volumen of a sphere -> %.2lf\n", sphereVolume(&radius_ref));

    return 0;
}
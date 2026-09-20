#include <stdio.h>
#include <math.h>

int main() {
    int x = 9;
    float y = 3.1415926535f;

    x = sqrt(x);
    printf("%d\n", x);

    x = pow(x, 4);
    printf("%d\n", x);

    y = round(y);
    printf("%f\n", y);

    float z = -9.0f;

    z = abs(z);
    printf("%f\n", z);

    float array[2] = {3.6f, 3.2f};

    array[0] = ceil(array[0]);
    printf("The Ceil is -> %f\n", array[0]);
    
    array[1] = floor(array[1]);
    printf("The Floor is -> %f\n", array[1]);
    
    // log(y);
    // sin(x), cos(x), tan(x) // <-- radians


    return 0;
}
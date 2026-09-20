#include <stdio.h>
#include <math.h>

double calculateCompound(double *principal, double *rate, int *timesCompounded, int *years){
    return *principal * pow(1 + *rate / *timesCompounded, *timesCompounded * *years);
}

int main() {
    /*  COMPOUNT INTEREST CALCULATOR
        A = P(1+r/n)^{nt}
        P (principal)
        A (Final accrued amount)
        r (anual nominal rate)
        Compounding (Handled explicitly via `n` times per year)
        Time Period (t in years, total periods = n x t)
    */
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;

    double total = 0.0;

    printf("=======Compound Interest Calculator=======\n");
    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter # of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = calculateCompound(&principal, &rate, &timesCompounded, &years);

    printf("\nThe result is -> %.2lf", total);

    return 0;
}
#include <stdio.h>
#include <math.h>  // pow() function needs this

int main() 
{
    double base, result;
    int exponent;

    // Input base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Using built-in pow function
    result = pow(base, exponent);

    printf("%.2lf^%d = %.2lf\n", base, exponent, result);

    return 0;
}

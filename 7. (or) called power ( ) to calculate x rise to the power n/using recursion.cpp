#include <stdio.h>
// Recursive function to calculate x^n
double power(double x, int n) 
{
    // Base case: x^0 is always 1
    if (n == 0) 
	{
        return 1.0;
    }
    // Recursive case: x^n = x * x^(n-1)
    return x * power(x, n - 1);
}
int main() 
{
    double base;
    int exponent;
    // Input base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    // Calculate and display result
    double result = power(base, exponent);
    printf("%.2lf^%d = %.2lf\n", base, exponent, result);
    return 0;
}

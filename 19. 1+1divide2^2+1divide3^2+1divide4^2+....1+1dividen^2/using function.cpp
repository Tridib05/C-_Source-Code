#include <stdio.h>

// Function to calculate the summation
double calculateSum(int n) 
{
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) 
    {
        sum += 1.0 / (i * i);
    }
    return sum;
}

int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    double sum = calculateSum(n);
    printf("Summation of the series: %lf\n", sum);
    
    return 0;
}

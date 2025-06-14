#include <stdio.h>

int main() 
{
    int n;
    double sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int i = 1;
    while (i <= n) 
    {
        sum += 1.0 / (i * i);
        i++;
    }
    
    printf("Summation of the series: %lf\n", sum);
    return 0;
}

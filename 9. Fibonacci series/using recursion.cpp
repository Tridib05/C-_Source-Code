#include <stdio.h>

// Recursive function to calculate Fibonacci number at position n
int fibonacci(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void generateFibonacci(int limit)
{
    printf("Fibonacci series up to %d: ", limit);
    for (int i = 0; i < limit; i++)
    {
        printf("%d", fibonacci(i));
        if (i != limit - 1)
            printf(", ");
    }
    printf("\n");
}

int main() 
{
    int limit;
    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);
    generateFibonacci(limit);
    return 0;
}


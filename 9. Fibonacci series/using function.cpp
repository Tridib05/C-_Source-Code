#include <stdio.h>
void generateFibonacci(int limit) 
{
    int first = 0, second = 1, next;
    printf("Fibonacci series up to %d: %d, %d", limit, first, second);
    for (int i = 2; i < limit; ++i) 
	{
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
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

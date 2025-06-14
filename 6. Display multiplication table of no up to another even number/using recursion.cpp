#include <stdio.h>

void printMultiples(int number, int limit, int i)
{
    if (i > limit)
        return;
    
    printf("%d * %d = %d\n", number, i, number * i);
    printMultiples(number, limit, i + 2);
}

int main()
{
    int number, limit;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    printMultiples(number, limit, 2);
    
    return 0;
}

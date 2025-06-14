#include <stdio.h>

// Function to calculate sum of first n natural numbers
int calculateSum(int number) 
{
    int sum = 0, i = 1;
    while(i <= number) 
    {
        sum += i;
        i++;
    }
    return sum;
}

int main() 
{
    int number, sum;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    sum = calculateSum(number);
    
    printf("The sum of digits is: %d\n", sum);
    
    return 0;
}

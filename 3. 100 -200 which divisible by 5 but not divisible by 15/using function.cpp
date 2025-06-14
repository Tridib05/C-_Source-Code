#include <stdio.h>

// Function definition
void printNumbers()
{
    for(int i = 100; i <= 200; i++)
    {
        if(i % 5 == 0 && i % 15 != 0)
            printf("number = %d\n", i);
    }
}

int main()
{
    printNumbers();  // function call
    return 0;
}

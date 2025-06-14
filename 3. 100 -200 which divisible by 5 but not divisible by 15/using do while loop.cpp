#include <stdio.h>

int main()
{
    int i = 100;
    do
    {
        if(i % 5 == 0 && i % 15 != 0)
            printf("number = %d\n", i);
        i++;
    }
    while(i <= 200);
    
    return 0;
}

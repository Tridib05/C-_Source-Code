#include <stdio.h>
int main()
{
    int n, r=0, s;
    printf("Enter the number to reverse: ");
    scanf("%d",&n);    
    while (n!= 0)
	{
        r=n%10;
        s=s* 10 +r;
        n=n/10;
    }    
    printf("The reversed number is: %d",s);
    return 0;
}
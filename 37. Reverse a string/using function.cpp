#include <stdio.h>
#include <string.h>
void reverseString(char str[]) 
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    while (start < end) 
	{
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() 
{
    const int maxLength = 100;
    char inputString[maxLength];
    printf("Enter a string: ");
    fgets(inputString, maxLength, stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    reverseString(inputString);
    printf("Reversed string: %s\n", inputString);
    return 0;
}

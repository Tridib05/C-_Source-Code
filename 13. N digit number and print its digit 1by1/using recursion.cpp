#include <stdio.h>

// Recursive function to create the number
int createNumberRecursive(int n) {
    if (n == 0)
        return 0;
    
    int tmp;
    printf("Enter a digit: ");
    scanf("%d", &tmp);

    return createNumberRecursive(n - 1) * 10 + tmp;
}

int main() {
    printf("Enter number of digits: ");
    int n;
    scanf("%d", &n);

    int number = createNumberRecursive(n);
    printf("Your number is %d\n", number);

    return 0;
}

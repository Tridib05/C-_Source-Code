#include <stdio.h>

// Function to create the number
int createNumber(int n) {
    int number = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter a digit: ");
        int tmp;
        scanf("%d", &tmp);
        number = number * 10 + tmp;
    }
    return number;
}

int main() {
    printf("Enter number of digits: ");
    int n;
    scanf("%d", &n);

    int number = createNumber(n);
    printf("Your number is %d\n", number);

    return 0;
}


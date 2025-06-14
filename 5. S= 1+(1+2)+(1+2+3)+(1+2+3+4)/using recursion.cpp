#include <stdio.h>

// Function to calculate sum of series using recursion
int series_sum(int n) {
    if (n == 1)
        return 1;  // Base case
    else
        return series_sum(n - 1) + (n * (n + 1)) / 2;
}

int main() {
    int n;
    printf("Series: 1 + (1+2) + (1+2+3) + ... + (1+2+3+...+n)\n");
    printf("Want sum up to N terms?\nEnter the N term: ");
    scanf("%d", &n);
    printf("Sum is: %d\n", series_sum(n));
    return 0;
}


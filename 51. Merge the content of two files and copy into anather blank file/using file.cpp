#include <stdio.h>
#include <stdlib.h>

void mergeFiles(const char *file1, const char *file2, const char *file3) {
    FILE *f1, *f2, *f3;
    char ch;

    // Open first file in read mode
    f1 = fopen(file1, "r");
    if (f1 == NULL) {
        printf("Cannot open file %s\n", file1);
        exit(1);
    }

    // Open second file in read mode
    f2 = fopen(file2, "r");
    if (f2 == NULL) {
        printf("Cannot open file %s\n", file2);
        fclose(f1);
        exit(1);
    }

    // Open third file in write mode (blank file)
    f3 = fopen(file3, "w");
    if (f3 == NULL) {
        printf("Cannot open file %s\n", file3);
        fclose(f1);
        fclose(f2);
        exit(1);
    }

    // Copy contents of first file into third file
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f3);
    }

    // Copy contents of second file into third file
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }

    printf("Files merged successfully into %s\n", file3);

    fclose(f1);
    fclose(f2);
    fclose(f3);
}

int main() {
    char file1[100], file2[100], file3[100];

    printf("Enter the name of first file: ");
    scanf("%s", file1);

    printf("Enter the name of second file: ");
    scanf("%s", file2);

    printf("Enter the name of output file: ");
    scanf("%s", file3);

    mergeFiles(file1, file2, file3);

    return 0;
}

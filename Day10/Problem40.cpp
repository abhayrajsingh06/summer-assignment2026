#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {

        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print increasing characters
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Print decreasing characters
        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}
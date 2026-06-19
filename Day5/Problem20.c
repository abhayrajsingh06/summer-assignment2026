#include <stdio.h>

int main() {
    int num, i, j, prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = num; i >= 2; i--) {
        prime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 1) {
            printf("Largest prime number = %d", i);
            break;
        }
    }

    return 0;
}
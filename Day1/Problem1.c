#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    // Display result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
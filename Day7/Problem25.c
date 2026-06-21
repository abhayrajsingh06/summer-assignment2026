#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of a negative number does not exist.");
    }
    else
    {
        printf("Factorial of %d = %d\n", n, factorial(n));
    }

    return 0;
}
#include <stdio.h>

// Function to calculate factorial
int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    printf("Factorial = %d", factorial(num));

    return 0;
}
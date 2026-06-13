#include <stdio.h>

// Function to find sum
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    result = sum(num1, num2);

    // Display result
    printf("Sum = %d", result);

    return 0;
}
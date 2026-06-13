#include <stdio.h>

// Function to find maximum
int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2, max;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    max = maximum(num1, num2);

    // Display result
    printf("Maximum number = %d", max);

    return 0;
}

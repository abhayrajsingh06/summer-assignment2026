#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;
    float average;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    // Display results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
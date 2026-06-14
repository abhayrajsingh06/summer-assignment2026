#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], n, i;
    int largest = INT_MIN, secondLargest = INT_MIN;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find largest and second largest
    for(i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    // Display result
    if(secondLargest == INT_MIN)
    {
        printf("Second largest element does not exist.");
    }
    else
    {
        printf("Second largest element = %d", secondLargest);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int even = 0, odd = 0;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Count even and odd elements
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Display result
    printf("Number of Even elements = %d\n", even);
    printf("Number of Odd elements = %d\n", odd);

    return 0;
}
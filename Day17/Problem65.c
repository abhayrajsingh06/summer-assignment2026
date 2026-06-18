#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i;

    // Input first array
    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy first array into merged array
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array into merged array
    for(i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Display merged array
    printf("Merged array is:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
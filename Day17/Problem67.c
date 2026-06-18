#include <stdio.h>

int main() {
    int arr1[100], arr2[100];
    int n1, n2, i, j, k, found;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection of arrays:\n");

    for(i = 0; i < n1; i++) {
        found = 0;

        // Check if element exists in second array
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }

        // Avoid printing duplicates
        if(found) {
            for(k = 0; k < i; k++) {
                if(arr1[i] == arr1[k]) {
                    found = 0;
                    break;
                }
            }
        }

        if(found) {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}
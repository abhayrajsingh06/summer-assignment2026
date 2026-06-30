#include <stdio.h>

int main()
{
    int a[100], n, i, choice, key;
    int largest, smallest, sum = 0, found;

    while (1)
    {
        printf("\n===== MENU DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Smallest Element\n");
        printf("5. Find Sum of Elements\n");
        printf("6. Find Average\n");
        printf("7. Search an Element\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                {
                    scanf("%d", &a[i]);
                }
                break;

            case 2:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 3:
                largest = a[0];
                for(i = 1; i < n; i++)
                {
                    if(a[i] > largest)
                        largest = a[i];
                }
                printf("Largest Element = %d\n", largest);
                break;

            case 4:
                smallest = a[0];
                for(i = 1; i < n; i++)
                {
                    if(a[i] < smallest)
                        smallest = a[i];
                }
                printf("Smallest Element = %d\n", smallest);
                break;

            case 5:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += a[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 6:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += a[i];
                }
                printf("Average = %.2f\n", (float)sum / n);
                break;

            case 7:
                printf("Enter element to search: ");
                scanf("%d", &key);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(a[i] == key)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Element not found.\n");

                break;

            case 8:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
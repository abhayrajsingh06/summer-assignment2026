#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int choice, i, len;

    while (1)
    {
        printf("\n===== MENU DRIVEN STRING OPERATIONS =====\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a string: ");
            scanf(" %[^\n]", str1);

            printf("Length = %lu\n", strlen(str1));
            break;

        case 2:
            printf("Enter a string: ");
            scanf(" %[^\n]", str1);

            strcpy(temp, str1);

            printf("Copied String = %s\n", temp);
            break;

        case 3:
            printf("Enter First String: ");
            scanf(" %[^\n]", str1);

            printf("Enter Second String: ");
            scanf(" %[^\n]", str2);

            strcat(str1, str2);

            printf("Concatenated String = %s\n", str1);
            break;

        case 4:
            printf("Enter First String: ");
            scanf(" %[^\n]", str1);

            printf("Enter Second String: ");
            scanf(" %[^\n]", str2);

            if (strcmp(str1, str2) == 0)
                printf("Strings are Equal.\n");
            else
                printf("Strings are Not Equal.\n");

            break;

        case 5:
            printf("Enter a string: ");
            scanf(" %[^\n]", str1);

            len = strlen(str1);

            for (i = 0; i < len; i++)
            {
                temp[i] = str1[len - i - 1];
            }
            temp[len] = '\0';

            printf("Reversed String = %s\n", temp);
            break;

        case 6:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}
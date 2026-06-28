#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c[100], temp;
    int n = 0, choice, i, found;
    char search[50];

    while (1)
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Name: ");
            scanf(" %[^\n]", c[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", c[n].phone);

            printf("Enter Email: ");
            scanf("%s", c[n].email);

            n++;
            printf("Contact Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo contacts available.\n");
            }
            else
            {
                printf("\n------------------------------------------------------------\n");
                printf("Name\t\tPhone\t\tEmail\n");
                printf("------------------------------------------------------------\n");

                for (i = 0; i < n; i++)
                {
                    printf("%s\t\t%s\t%s\n",
                           c[i].name,
                           c[i].phone,
                           c[i].email);
                }
            }
            break;

        case 3:
            printf("\nEnter Name to Search: ");
            scanf(" %[^\n]", search);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (strcmp(c[i].name, search) == 0)
                {
                    printf("\nContact Found!\n");
                    printf("Name  : %s\n", c[i].name);
                    printf("Phone : %s\n", c[i].phone);
                    printf("Email : %s\n", c[i].email);

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact Not Found!\n");

            break;

        case 4:
            printf("\nEnter Name to Delete: ");
            scanf(" %[^\n]", search);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (strcmp(c[i].name, search) == 0)
                {
                    found = 1;

                    for (; i < n - 1; i++)
                    {
                        c[i] = c[i + 1];
                    }

                    n--;
                    printf("Contact Deleted Successfully!\n");
                    break;
                }
            }

            if (!found)
                printf("Contact Not Found!\n");

            break;

        case 5:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}
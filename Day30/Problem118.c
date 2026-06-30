#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued; // 0 = Available, 1 = Issued
};

int main()
{
    struct Book b[100];
    int n = 0, choice, id, i, found;

    while (1)
    {
        printf("\n===== MINI LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", b[n].title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", b[n].author);

            b[n].issued = 0;
            n++;

            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo Books Available!\n");
            }
            else
            {
                printf("\n------ Book List ------\n");
                printf("ID\tTitle\t\tAuthor\t\tStatus\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t%-15s%-15s%s\n",
                           b[i].id,
                           b[i].title,
                           b[i].author,
                           b[i].issued ? "Issued" : "Available");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    printf("\nBook Found\n");
                    printf("ID     : %d\n", b[i].id);
                    printf("Title  : %s\n", b[i].title);
                    printf("Author : %s\n", b[i].author);
                    printf("Status : %s\n",
                           b[i].issued ? "Issued" : "Available");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");
            break;

        case 4:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    found = 1;
                    if (b[i].issued == 0)
                    {
                        b[i].issued = 1;
                        printf("Book Issued Successfully!\n");
                    }
                    else
                    {
                        printf("Book Already Issued!\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");
            break;

        case 5:
            printf("Enter Book ID to Return: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    found = 1;
                    if (b[i].issued == 1)
                    {
                        b[i].issued = 0;
                        printf("Book Returned Successfully!\n");
                    }
                    else
                    {
                        printf("Book is Already Available!\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book Not Found!\n");
            break;

        case 6:
            printf("Thank You! Exiting...\n");
            return 0;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}
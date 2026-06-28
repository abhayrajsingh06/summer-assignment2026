#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account a[100];
    int n = 0, choice, accNo, i, found;
    float amount;

    while (1)
    {
        printf("\n===== BANK ACCOUNT MANAGEMENT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Search Account\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Account Number: ");
            scanf("%d", &a[n].accNo);

            printf("Enter Account Holder Name: ");
            scanf(" %[^\n]", a[n].name);

            printf("Enter Initial Balance: ");
            scanf("%f", &a[n].balance);

            n++;
            printf("Account Created Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo accounts found.\n");
            }
            else
            {
                printf("\n---------------------------------------------------------\n");
                printf("Acc No\tName\t\tBalance\n");
                printf("---------------------------------------------------------\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%.2f\n",
                           a[i].accNo,
                           a[i].name,
                           a[i].balance);
                }
            }
            break;

        case 3:
            printf("\nEnter Account Number: ");
            scanf("%d", &accNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (a[i].accNo == accNo)
                {
                    printf("Enter Deposit Amount: ");
                    scanf("%f", &amount);

                    a[i].balance += amount;

                    printf("Deposit Successful!\n");
                    printf("Current Balance = %.2f\n", a[i].balance);

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Account Not Found!\n");

            break;

        case 4:
            printf("\nEnter Account Number: ");
            scanf("%d", &accNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (a[i].accNo == accNo)
                {
                    printf("Enter Withdrawal Amount: ");
                    scanf("%f", &amount);

                    if (amount <= a[i].balance)
                    {
                        a[i].balance -= amount;
                        printf("Withdrawal Successful!\n");
                        printf("Current Balance = %.2f\n", a[i].balance);
                    }
                    else
                    {
                        printf("Insufficient Balance!\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Account Not Found!\n");

            break;

        case 5:
            printf("\nEnter Account Number to Search: ");
            scanf("%d", &accNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (a[i].accNo == accNo)
                {
                    printf("\nAccount Found!\n");
                    printf("Account Number : %d\n", a[i].accNo);
                    printf("Account Holder : %s\n", a[i].name);
                    printf("Balance        : %.2f\n", a[i].balance);

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Account Not Found!\n");

            break;

        case 6:
            printf("Thank You for Using the Bank System!\n");
            return 0;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}
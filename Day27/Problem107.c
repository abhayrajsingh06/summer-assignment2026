#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, deduction, netSalary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i;

    while (1)
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary Details\n");
        printf("2. Display Salary Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basic);

                printf("Enter HRA: ");
                scanf("%f", &emp[n].hra);

                printf("Enter DA: ");
                scanf("%f", &emp[n].da);

                printf("Enter Deduction: ");
                scanf("%f", &emp[n].deduction);

                emp[n].netSalary = emp[n].basic + emp[n].hra + emp[n].da - emp[n].deduction;

                printf("Net Salary = %.2f\n", emp[n].netSalary);

                n++;
                printf("Salary record added successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("\nNo salary records available.\n");
                }
                else
                {
                    printf("\n---------------- Salary Records ----------------\n");
                    printf("ID\tName\t\tBasic\tHRA\tDA\tDeduction\tNet Salary\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t\t%.2f\t%.2f\t%.2f\t%.2f\t\t%.2f\n",
                               emp[i].id,
                               emp[i].name,
                               emp[i].basic,
                               emp[i].hra,
                               emp[i].da,
                               emp[i].deduction,
                               emp[i].netSalary);
                    }
                }
                break;

            case 3:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
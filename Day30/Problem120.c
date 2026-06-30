#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int roll;
    char name[50];
    int age;
    float marks;
};

struct Student s[MAX];
int n = 0;

// Function Prototypes
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main()
{
    int choice;

    while (1)
    {
        printf("\n=====================================\n");
        printf(" STUDENT RECORD MANAGEMENT SYSTEM\n");
        printf("=====================================\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            printf("\nThank You!\n");
            return 0;

        default:
            printf("\nInvalid Choice!\n");
        }
    }
}

// Add Student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[n].name);

    printf("Enter Age: ");
    scanf("%d", &s[n].age);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;

    printf("\nStudent Added Successfully.\n");
}

// Display Students
void displayStudents()
{
    int i;

    if (n == 0)
    {
        printf("\nNo Records Found.\n");
        return;
    }

    printf("\n-------------------------------------------------------------\n");
    printf("Roll\tName\t\tAge\tMarks\n");
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%-15s%d\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].age,
               s[i].marks);
    }
}

// Search Student
void searchStudent()
{
    int roll, i;

    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll  : %d\n", s[i].roll);
            printf("Name  : %s\n", s[i].name);
            printf("Age   : %d\n", s[i].age);
            printf("Marks : %.2f\n", s[i].marks);
            return;
        }
    }

    printf("\nStudent Not Found.\n");
}

// Update Student
void updateStudent()
{
    int roll, i;

    printf("\nEnter Roll Number to Update: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].roll == roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Age: ");
            scanf("%d", &s[i].age);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("\nRecord Updated Successfully.\n");
            return;
        }
    }

    printf("\nStudent Not Found.\n");
}

// Delete Student
void deleteStudent()
{
    int roll, i, j;

    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].roll == roll)
        {
            for (j = i; j < n - 1; j++)
            {
                s[j] = s[j + 1];
            }

            n--;

            printf("\nRecord Deleted Successfully.\n");
            return;
        }
    }

    printf("\nStudent Not Found.\n");
}
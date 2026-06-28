#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
    int seats;
    int booked; // 1 = Booked, 0 = Cancelled
};

int main()
{
    struct Ticket t[100];
    int n = 0, choice, ticketNo, i, found;

    while (1)
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Ticket Number: ");
            scanf("%d", &t[n].ticketNo);

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", t[n].name);

            printf("Enter Destination: ");
            scanf(" %[^\n]", t[n].destination);

            printf("Enter Number of Seats: ");
            scanf("%d", &t[n].seats);

            t[n].booked = 1;
            n++;

            printf("Ticket Booked Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo bookings available.\n");
            }
            else
            {
                printf("\n--------------------------------------------------------------\n");
                printf("TicketNo\tName\t\tDestination\tSeats\tStatus\n");
                printf("--------------------------------------------------------------\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t\t%s\t\t%s\t\t%d\t%s\n",
                           t[i].ticketNo,
                           t[i].name,
                           t[i].destination,
                           t[i].seats,
                           t[i].booked ? "Booked" : "Cancelled");
                }
            }
            break;

        case 3:
            printf("\nEnter Ticket Number to Search: ");
            scanf("%d", &ticketNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    printf("\nBooking Found!\n");
                    printf("Ticket No   : %d\n", t[i].ticketNo);
                    printf("Passenger   : %s\n", t[i].name);
                    printf("Destination : %s\n", t[i].destination);
                    printf("Seats       : %d\n", t[i].seats);
                    printf("Status      : %s\n",
                           t[i].booked ? "Booked" : "Cancelled");

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Booking Not Found!\n");

            break;

        case 4:
            printf("\nEnter Ticket Number to Cancel: ");
            scanf("%d", &ticketNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    if (t[i].booked)
                    {
                        t[i].booked = 0;
                        printf("Ticket Cancelled Successfully!\n");
                    }
                    else
                    {
                        printf("Ticket is Already Cancelled!\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Booking Not Found!\n");

            break;

        case 5:
            printf("Thank You for Using the Ticket Booking System!\n");
            return 0;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}
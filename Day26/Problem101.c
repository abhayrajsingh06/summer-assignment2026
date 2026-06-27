#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;

    // Generate random number
    srand(time(0));
    number = rand() % 100 + 1;   // Random number between 1 and 100

    printf("===== Number Guessing Game =====\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n");

    do
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number)
        {
            printf("Too High! Try Again.\n");
        }
        else if (guess < number)
        {
            printf("Too Low! Try Again.\n");
        }
        else
        {
            printf("\nCongratulations! You guessed the number correctly.\n");
            printf("Number = %d\n", number);
            printf("Total Attempts = %d\n", attempts);
        }

    } while (guess != number);

    return 0;
}
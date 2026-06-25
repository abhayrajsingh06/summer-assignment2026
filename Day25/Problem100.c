#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("===== QUIZ APPLICATION =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi.\n\n");
    }

    // Question 2
    printf("2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. Python\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }

    // Question 3
    printf("3. How many bits are there in a byte?\n");
    printf("1. 4\n2. 8\n3. 16\n4. 32\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 8.\n\n");
    }

    printf("===== QUIZ RESULT =====\n");
    printf("Your Score = %d/3\n", score);

    if(score == 3)
        printf("Excellent!\n");
    else if(score == 2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}
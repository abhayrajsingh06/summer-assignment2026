#include <stdio.h>

int isPalindrome(int num) {
    int original = num, reverse = 0, rem;

    while (num > 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    return (original == reverse);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);

    return 0;
}
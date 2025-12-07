#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Handle negative numbers by making them positive
    if (num < 0) {
        num = -num;
        original = num;  // For palindrome check, treat as positive
    }

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if original and reversed are the same
    if (reversed == original) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

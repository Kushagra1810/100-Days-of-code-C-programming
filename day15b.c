#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // Store original number for display

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;         // Get last digit
        reversed = reversed * 10 + remainder; // Append last digit to reversed number
        num /= 10;                   // Remove last digit
    }

    // Display the result
    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}

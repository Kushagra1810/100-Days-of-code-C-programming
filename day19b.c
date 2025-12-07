#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;

    // Handle negative numbers
    if (num < 0) {
        num = -num;  // Make it positive
    }

    // Calculate sum of digits
    while (num > 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    // Display result
    printf("Sum of digits of %d is %d\n", original, sum);

    return 0;
}

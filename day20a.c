#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;  // Use long long to handle large products
    int hasOddDigit = 0;    // Flag to check if any odd digit exists

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // Calculate product of odd digits
    while (num > 0) {
        remainder = num % 10;

        if (remainder % 2 != 0) {
            product *= remainder;
            hasOddDigit = 1;
        }

        num /= 10;
    }

    if (hasOddDigit) {
        printf("Product of odd digits in %d is %lld\n", original, product);
    } else {
        printf("No odd digits found in %d\n", original);
    }

    return 0;
}

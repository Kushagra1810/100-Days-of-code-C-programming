#include <stdio.h>
#include <math.h>

int main() {
    int num, original, firstDigit, lastDigit, digits, swappedNum;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 10) {
        // Single digit number, swapping doesn't change anything
        printf("Swapped number: %d\n", num);
        return 0;
    }

    original = num;
    lastDigit = num % 10;

    // Count number of digits - 1
    digits = (int)log10(num);

    // Get first digit
    firstDigit = num / (int)pow(10, digits);

    // Remove first digit
    int middlePart = num % (int)pow(1

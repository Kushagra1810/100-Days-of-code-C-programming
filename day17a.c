#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    double sum = 0;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Handle negative input (not Armstrong)
    if (num < 0) {
        printf("Negative numbers cannot be Armstrong numbers.\n");
        return 0;
    }

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        ++n;
    }

    num = original;

    // Calculate sum of digits raised to the power n
    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, n);
        num /= 10;
    }

    // Check and display result
    if ((int)sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2, a, b, temp;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Store numbers in a and b for processing
    a = num1;
    b = num2;

    // Ensure both numbers are positive
    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    // Euclidean algorithm to find HCF
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, a);

    return 0;
}

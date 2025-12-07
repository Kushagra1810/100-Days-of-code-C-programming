#include <stdio.h>

// Function to compute GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, lcm;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    int hcf = gcd(num1, num2);
    lcm = (num1 / hcf) * num2;  // To avoid overflow, divide first

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}

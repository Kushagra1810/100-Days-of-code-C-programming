#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check for valid input
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    // Calculate the sum using a loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

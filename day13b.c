#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter a positive number n: ");
    scanf("%d", &n);

    // Check for valid input
    if (n <= 0) {
        printf("Please enter a number greater than 0.\n");
        return 1; // Exit with error
    }

    // Print numbers from 1 to n
    printf("Numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); // For a clean newline after the list
    return 0;
}

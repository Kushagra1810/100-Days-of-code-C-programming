
#include <stdio.h>

int main() {
    int n;
    long long product = 1; // Use long long to handle large results
    int hasEven = 0; // Flag to check if any even number is found

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check for valid input
    if (n < 2) {
        printf("No even numbers between 1 and %d.\n", n);
        return 0;
    }

    // Calculate product of even numbers from 1 to n
    printf("Even numbers from 1 to %d: ", n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
        product *= i;
        hasEven = 1;
    }

    // Display result
    if (hasEven) {
        printf("\nProduct of even numbers from 1 to %d = %lld\n", n, product);
    }

    return 0;
}

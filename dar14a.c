#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check for valid input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate sum of first n odd numbers
    printf("First %d odd numbers are: ", n);
    for (int i = 1, count = 0; count < n; i += 2) {
        printf("%d ", i);
        sum += i;
        count++;
    }

    // Print the sum
    printf("\nSum of first %d odd numbers = %d\n", n, sum);

    return 0;
}

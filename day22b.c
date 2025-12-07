#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int numerator = 1;
    int denominator = 1;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            // First term is 1 (1/1)
            sum += 1;
            numerator = 3;
            denominator = 4;
        } else {
            sum += (double)numerator / denominator;
            numerator += 2;     // Increase numerator by 2
            denominator += 2;   // Increase denominator by 2
        }
    }

    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}

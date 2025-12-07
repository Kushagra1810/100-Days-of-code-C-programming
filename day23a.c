#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int numerator = 2;
    int denominator = 3;

    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;     // Numerator increases by 2 each term
        denominator += 4;   // Denominator increases by 4 each term
    }

    printf("Sum of the series up to %d terms is: %.4lf\n", n, sum);

    return 0;
}

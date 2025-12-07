#include <stdio.h>

int main() {
    long long num;
    int digit, count[10] = {0};
    int i, maxFreq = 0, mostFrequentDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum frequency
    for (i = 0; i < 10; i++) {
        if (count[i] > maxFreq) {
            maxFreq = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs most frequently is: %d (appeared %d times)\n", mostFrequentDigit, maxFreq);

    return 0;
}

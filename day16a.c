#include <stdio.h>

void printBinary(unsigned int num) {
    int binary[32];
    int i = 0;

    // Handle the special case when num is 0
    if (num == 0) {
        printf("0");
        return;
    }

    // Convert decimal to binary by storing remainder bits
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    unsigned int num;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%u", &num);

    // Print binary representation
    printf("Binary representation: ");
    printBinary(num);
    printf("\n");

    return 0;
}

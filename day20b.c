#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    // Input binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);

    // Validate input (only '0' and '1')
    for (int i = 0; i < length; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary number.\n");
            return 1;
        }
    }

    // Find and print 1's complement
    printf("1's complement: ");
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0')
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    return 0;
}

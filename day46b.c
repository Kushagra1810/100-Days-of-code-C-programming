#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};   // For 'a' to 'z'
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';   // convert char to 0-25 index
        
        if (freq[index] == 1) {     // already seen before
            printf("First repeating lowercase alphabet: %c\n", str[i]);
            return 0;
        }
        freq[index]++;             // mark seen
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}

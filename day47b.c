#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    char longest[50];
    int maxLen = 0, currLen = 0, i, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                strncpy(longest, &str[i - currLen], currLen);
                longest[currLen] = '\0';
            }
            currLen = 0;  // reset for next word
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

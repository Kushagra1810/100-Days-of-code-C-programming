#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    
    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int start = 0; 

    for (int i = 0; i < n; i++) {
        if (lastIndex[(int)s[i]] >= start) {
            
            start = lastIndex[(int)s[i]] + 1;
        }
        lastIndex[(int)s[i]] = i;
        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}

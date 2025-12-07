#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int charCount = 0, wordCount = 0, lineCount = 0;
    char ch;
    int inWord = 0;

    while ((ch = fgetc(fp)) != EOF) {
        charCount++;

        if (ch == '\n')
            lineCount++;

        if (isspace(ch))
            inWord = 0;
        else if (!inWord) {
            inWord = 1;
            wordCount++;
        }
    }

    
    if (charCount > 0 && ch != '\n')
        lineCount++;

    fclose(fp);

    printf("Total Characters: %d\n", charCount);
    printf("Total Words: %d\n", wordCount);
    printf("Total Lines: %d\n", lineCount);

    return 0;
}

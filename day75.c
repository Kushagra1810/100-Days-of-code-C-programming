#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char newLine[1000];

    
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();  


    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    printf("Enter text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    
    fprintf(fp, "%s", newLine);

    printf("Text appended successfully.\n");

    
    fclose(fp);

    return 0;
}

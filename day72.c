#include <stdio.h>

int main() {
    char line[256];  


    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Contents of the file:\n");

    
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    
    fclose(fp);

    return 0;
}

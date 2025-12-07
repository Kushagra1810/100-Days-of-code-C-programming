#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "numbers.txt";
    int num, sum = 0, count = 0;
    float average;

    
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file '%s'\n", filename);
        return 1;
    }

    
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in the file.\n");
    } else {
        average = (float)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    }

    return 0;
}

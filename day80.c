#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]s", students[i].name);  // Read full name including spaces
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    
    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(fp);

    printf("\nStudent records saved to students.txt\n");

    
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("Name\tRoll\tMarks\n");

    struct Student temp;
    while (fscanf(fp, "%s %d %f", temp.name, &temp.roll, &temp.marks) == 3) {
        printf("%s\t%d\t%.2f\n", temp.name, temp.roll, temp.marks);
    }

    fclose(fp);

    return 0;
}

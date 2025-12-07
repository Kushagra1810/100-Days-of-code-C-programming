#include <stdio.h>

// Define the structure Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); 

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    
    printf("Student Details:\n");
    printf("Name\t\tRoll No\tMarks\n");
    printf("-----------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-15s %d\t%.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to check if two students are identical
int areIdentical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks)
        return 1; // Identical
    else
        return 0; // Not identical
}

int main() {
    struct Student s1, s2;

    
    printf("Enter details for first student:\n");
    printf("Name: ");
    scanf(" %[^\n]s", s1.name);
    printf("Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    
    printf("\nEnter details for second student:\n");
    printf("Name: ");
    scanf(" %[^\n]s", s2.name);
    printf("Roll Number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    
    if (areIdentical(s1, s2))
        printf("\nThe two students are identical.\n");
    else
        printf("\nThe two students are not identical.\n");

    return 0;
}

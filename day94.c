#include <stdio.h>


struct Student {
    char name[50];
    int roll_no;
    float marks;
};


void printStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s;

    
    printf("Enter student name: ");
    scanf(" %[^\n]s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    
    printStudent(s);

    return 0;
}

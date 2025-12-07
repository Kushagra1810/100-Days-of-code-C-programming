#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;     
    struct Employee *ptr;     

    ptr = &emp;               

    printf("Enter Employee ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Employee Name: ");
    scanf("%s", ptr->name);

    printf("Enter Employee Salary: ");
    scanf("%f", &ptr->salary);

   
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}

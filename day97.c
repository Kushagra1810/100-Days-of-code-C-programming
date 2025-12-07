#include <stdio.h>

struct Employee {
    char name[50];
    int emp_id;
    float salary;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", employees[i].name);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    
    fwrite(employees, sizeof(struct Employee), n, fp);
    fclose(fp);

    printf("\nEmployee data saved to employees.dat successfully.\n");


    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    struct Employee emp_read;

    printf("\nEmployee Details from File:\n");
    printf("Name\t\tEmp ID\tSalary\n");
    printf("-----------------------------------\n");

    
    while (fread(&emp_read, sizeof(struct Employee), 1, fp)) {
        printf("%-15s %d\t%.2f\n", emp_read.name, emp_read.emp_id, emp_read.salary);
    }

    fclose(fp);

    return 0;
}
``

#include <stdio.h>
#include <string.h>

struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
 
    struct employee emp1;

    strcpy(emp1.name, "Alice Johnson");
    emp1.id = 12345;
    strcpy(emp1.department, "HR");
    emp1.salary = 50000.00;
    strcpy(emp1.email, "alice.johnson@example.com");

    printf("Employee Information:\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Department: %s\n", emp1.department);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Email: %s\n", emp1.email);

    return 0;
}

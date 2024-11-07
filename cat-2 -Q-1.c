#include <stdio.h>
#include <string.h>

#define MAX_NAME 25
#define MAX_DEPARTMENT 20
#define MAX_EMAIL 50

typedef struct {
    char name[MAX_NAME];
    int id;
    char department[MAX_DEPARTMENT];
    float salary;
    char email[MAX_EMAIL];
} Employee;

int main() {
    Employee emp;

    
    strcpy(emp.name, "John Doe");
    emp.id = 12345;
    strcpy(emp.department, "Human Resources");
    emp.salary = 5500050;
    strcpy(emp.email, "john.doe@company.com");

    
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}
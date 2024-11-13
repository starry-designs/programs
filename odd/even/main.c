//C program for employee
#include <stdio.h>
#include <string.h>
struct Employee {
    char name[25];
    int ID;
    char department[20];
    float salary;
    char email[50];

}employee;

int main(){
    struct Employee employee = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    printf("Employee details: \n");
    printf("name: %s\n", &employee.name);
    printf("ID: %d\n", &employee.ID);
    printf("department: %s\n", &employee.department);
    printf("salary: %.2f\n", &employee.salary);
    printf("email: %s\n", &employee.email);

    return 0;

}

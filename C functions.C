// My structure
#include <stdio.h>
#include<string.h>
struct student {
    char name[12];
    char reg_no[20];
    int ID;
    int phone_no;
    float marks;
    char email[25];
}student1, student2;
int main() {
    strcpy(student1.name,"Alex Unguso");
    strcpy(student1.reg_no, "BCS-05-0030/2024");
    strcpy(student1.email, "ungusoalex@gmail.com");
    student1.ID=855704477;
    student1.phone_no= 708730003;
    student1.marks=80;
    
    printf("Name: %s\n",student1.name);
    printf("Reg_no: %s\n",student1.reg_no);
    printf("ID is: %d\n",student1.ID);
    printf("phone_no: %d\n",student1.phone_no);
    printf("marks: %.1f\n",student1.marks);
    printf("email is: %s\n",student1.email);
    
    
    return 0;
}
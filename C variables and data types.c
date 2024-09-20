// C variables and data types
#include <stdio.h> //scanf(), printf()
int main() {
    char a; 
    char name[]={}; 
    int age; 
    float area; 
    double salary;
    
    printf("Enter a character: ");
    scanf("%c", &a);
    printf("The character is %c \n",a);
    
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("The name is %s \n",name);
    
    printf("Enter the age: ");
    scanf("%d", &age);
    printf("The age is %d years \n",age);
    
    printf("Enter the area: ");
    scanf("%f", &area);
    printf("The area is%.3f \n",area);
    
    printf("Enter the salary: ");
    scanf("%lf", &salary);
    printf("The salary is %.2lf sh \n",salary);

    return 0;
}
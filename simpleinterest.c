// program to find simple interest
#include <stdio.h>

int main() {
    float principle_amount, rate, time, simple_interest;
    
    printf("Enter the principle_amount");
    scanf("%f",&principle_amount);
    
    printf("Enter the rate");
    scanf("%f",&rate);
    
    printf("Enter the time");
    scanf("%f",&time);
    
    simple_interest= (principle_amount*rate*time)/100;
    

    printf("The simple_interest is %f", simple_interest);
    

    return 0;
}
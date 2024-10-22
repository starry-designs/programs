// grading program
#include <stdio.h>

int main() {
    int math_marks, chemistry_marks, english_marks, average_marks;
    
    printf("Enter the math marks: ");
    scanf("%d",&math_marks);
    
    printf("Enter the chemistry marks: ");
    scanf("%d",&chemistry_marks);
    
    printf("Enter the english marks: ");
    scanf("%d",&english_marks);
    
    average_marks=(math_marks+chemistry_marks+english_marks)/3;
    
    if(average_marks>=70 && average_marks<=100){
     printf("grade is A\n");
    }else if(average_marks>=60 && average_marks<=69){
     printf("grade is B\n");
    }else if(average_marks>=50 && average_marks<=59){
     printf("grade is C\n");
    }else if(average_marks>=40 && average_marks<=49){
     printf("grade is D\n");
    }else{
     printf("grade is E(Fail)\n");
    }
    
    printf("Average marks: %d\n", average_marks);
    return 0;
}
// fine for overdue library books
#include <stdio.h>

int main() {
    int book_ID, due_date, return_date, fine_rate, fine;
    
    printf("Enter the book_ID: ");
    scanf("%d",&book_ID);
    
    printf("Enter the due_date: ");
    scanf("%d",&due_date);
    
    printf("Enter the return_date: ");
    scanf("%d",&return_date);
    
    int days_overdue=return_date-due_date;
    
    if(days_overdue<=7){
        fine_rate=20;
        printf("fine_rate is 20sh@ day\n");
    }else if(days_overdue>=8 && days_overdue<=14){
        fine_rate=50;
        printf("fine_rate is 50sh@ day\n");
    }else if(days_overdue>=15){
        fine_rate=100;
        printf("fine_rate is 100sh@ day\n");
    }
    
    fine=days_overdue*fine_rate;
    printf("The fine is %d sh",fine);
        
    return 0;
}
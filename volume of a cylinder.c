// program to find volume of a cylinder
#include <stdio.h>

int main() {
    int radius, height, volume;
    
    int pie=3.142;
    
    printf("Enter the radius: ");
    scanf("%d",&radius);
    
    printf("Enter the height: ");
    scanf("%d",&height);
    
    volume=pie*radius*radius*height;
    
    printf("%d",volume);
    
    return 0;
}
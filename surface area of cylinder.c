// program to find surface area of a cylinder
#include <stdio.h>

int main() {
    int radius, height, surface_area;
    
    int pie=3.142;
    
    printf("Enter the radius: ");
    scanf("%d",&radius);
    
    printf("Enter the height: ");
    scanf("%d",&height);
    
    surface_area=(2*pie*radius*radius)+(2*pie*radius*height);
    
    printf("%d",surface_area);
    
    return 0;
}
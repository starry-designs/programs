#include <stdio.h>

int main() {
    int i, j, cube;
    
    printf("Enter when to start & when to stop: ");
    scanf("%d%d",&i, &j);
     do{
      cube=i*i*i;
      printf("The cube of %d is %d\n", i, cube);
      i++;
    }while(i<=j);
      
        
    return 0;
}
#include <stdio.h>

int main() {
    int n, j, cube;
    
        printf("Enter when to start && when to stop: ");
        scanf("%d%d", &n,&j);
        
        while(n<=j){
        
      
        cube=n*n*n;
        printf("The cube of %d is %d\n",n, cube);   
        n++;
    }
    
   

    return 0;
}
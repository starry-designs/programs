#include <stdio.h>

int main() {
    int i, j, cube;
    printf("Enter when to start & when to stop");
    scanf("%d%d",&i, &j);
    for(i=5;i>0;i--){
      printf("%d\n",i);
      cube=i*i*i;
      printf("The cube of %d is %d\n", i, cube);
    }
        
    return 0;
}
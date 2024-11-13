// C file handling :writing to a file
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    FILE *fptr;
    fptr=fopen("C:\\Users\\ALEX UNGUSO\\OneDrive\\Documents\\Desktop\\C programs\\file handling.txt","a");
    if(fptr==NULL){
        printf("Err
    return 0;
}
or openig the file");
        exit(1);
    }

    printf("Enter a random number: ");
    scanf("%d", &number);

    fprintf(fptr, "\nThe number entered is %d", number);
    fclose(fptr);
    printf("Number written successfuly!");

#include <stdio.h>
#include <stdlib.h>
struct sentence{
    char content[100];
}sentence;

int main(){
    FILE *fptr;
    fptr=fopen("C:\\Users\\ALEX UNGUSO\\OneDrive\\Documents\\Desktop\\C programs\\sentence.txt","r");
    if(fptr==NULL){
        printf("Error opening the file");
        exit(1);
    }
    printf("Enter sentence: ");
    fgets(sentence.content, sizeof(sentence.content),stdin);

    fprintf(fptr, "%s\n", sentence.content);
    fclose(fptr);
    printf("Data successfully read from data.txt");
    return 0;
}

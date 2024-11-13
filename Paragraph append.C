#include <stdio.h>
#include <stdlib.h>
struct Paragraph{
    char content[200];
}paragraph;

int main(){
    FILE *fptr;
    fptr=fopen("C:\\Users\\ALEX UNGUSO\\OneDrive\\Documents\\Desktop\\C programs\\paragraph.txt","a");
    if(fptr==NULL){
        printf("Error opening the file");
        exit(1);
    }
    printf("Enter paragraph: ");
    fgets(paragraph.content, sizeof(paragraph.content),stdin);

    fprintf(fptr, "%s\n", paragraph.content);
    fclose(fptr);
    printf("Data successfully appended to output.txt");
    return 0;
}

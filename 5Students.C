#include <stdio.h>
#include <stdlib.h>
struct student {
    float marks;
    char name[20];

}Students[5];
int main(){
    FILE *fptr;
    fptr=fopen("C:\\Users\\ALEX UNGUSO\\OneDrive\\Documents\\Desktop\\C programs\\5 students.txt","w");
    if(fptr==NULL){
        printf("Error opening the file.\n");
        exit(1);
    }
    for(int i=0; i<5; i++){
        printf("Enter name of student %d\n:", i+1);
        scanf("%s", Students[i].name);
        printf("Enter marks of student %d: ", i+1);
        scanf("%f", &Students[i].marks);

        fprintf(fptr, "Name: %s, Marks: %.2f\n", Students[i].name, Students[i].marks);
    }

    fclose(fptr);
    printf("Data successfully written to students.txt\n");


    return 0;
}





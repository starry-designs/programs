#include <stdio.h>
#include <stdlib.h>
struct student {
    float marks;
    char name[20];


}student;
int main(){
    FILE *fptr;
    int n;
    struct student Students[n];
    fptr=fopen("C:\\Users\\ALEX UNGUSO\\OneDrive\\Documents\\Desktop\\C programs\\5 students.txt","a");
    if(fptr==NULL){
        printf("Error opening the file.\n");
        exit(1);
    }
    printf("Enter the number of students n to be entered: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Name of student %d\n:", i+1);
        scanf("%s", Students[i].name);
        printf("Marks of student %d: ", i+1);
        scanf("%f", &Students[i].marks);

        fprintf(fptr, "Name: %s, Marks: %.2f\n", Students[i].name, Students[i].marks);
    }

    fclose(fptr);
    printf("Data successfully written to students.txt\n");


    return 0;
}






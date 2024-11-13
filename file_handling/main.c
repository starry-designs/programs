//File handling | writing and reading files
#include <stdio.h>
#include <stdlib.h>
int main() {
int num;
FILE *fptr;

// Open file.txt in read mode
/*fptr = fopen("C:\\Users\\ALEX UNGUSO\\OneDrive\\Documents\\Desktop\\C programs\\file handling.txt", "r");
if (fptr == NULL) {
printf("Error opening file!\n");
exit(1);
}
fscanf(fptr, "%d", num);
fprintf(fptr, "The number is %d", num);
fclose(fptr);8*/

// Open sample.txt
fptr = fopen("C:\\Users\\ALEX UNGUSO\\OneDrive\\Documents\\Desktop\\C programs\\file handling.txt", "w+");
if (fptr == NULL) {
printf("Error opening sample.txt for writing!\n");
exit(1);
}
// Write the number to sample.txt
fprintf(fptr, "%d", num);
fclose(fptr);

printf("Number successfully read from file.txt and written to sample.txt.");
return 0;
}

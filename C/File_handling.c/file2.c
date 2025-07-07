#include <stdio.h>

int main() {
  
    // Open file in append mode
    FILE *file = fopen("rohan.txt", "a");  

    if (file == NULL) {
        printf("Error opening file!\n");
        perror("Error");
        return 1;
    }

    fprintf(file, "Appending text\n");
    printf("Data appended\n");

    // Close the file
    fclose(file);  
    return 0;
}
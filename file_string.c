#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int buffer_size = 100;
    char user_string[100];
    char filename[] = "output.txt";
    FILE *fptr;
    
    printf("Enter a string to write to the file (max %d characters):\n", buffer_size - 1);
    fgets(user_string, buffer_size, stdin);
    user_string[strcspn(user_string, "\n")] = 0;
    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fputs(user_string, fptr);
    printf("Successfully wrote the string to %s.\n", filename);
    fclose(fptr);
    return 0;
}

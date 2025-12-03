#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    char filename[50];
    char input_line[256];
    char read_buffer[256];

    printf("Enter the filename to create/open (e.g., myfile.txt): ");
    scanf("%s", filename);
    while ((getchar()) != '\n'); 

    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error: Could not open %s for writing.\n", filename);
        exit(1);
    }
    printf("\nEnter multiple lines of content. Press Enter on an empty line to finish writing:\n");
    while (1) {
        fgets(input_line, 256, stdin);
        if (strcmp(input_line, "\n") == 0) {
            break;
        }
        fprintf(fptr, "%s", input_line);
    }
    fclose(fptr);
    printf("\nData successfully written to '%s'.\n", filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error: Could not open %s for reading.\n", filename);
        exit(1);
    }
    printf("\n--- Content of '%s' ---\n", filename);
    while (fgets(read_buffer, 256, fptr) != NULL) {
        printf("%s", read_buffer);
    }
    printf("----------------------------------\n");
    fclose(fptr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_file, *destination_file;
    char source_path[100];
    char destination_path[100];
    int character;

    printf("Enter the source file name/path: ");
    scanf("%99s", source_path);
    printf("Enter the destination file name/path: ");
    scanf("%99s", destination_path);

    source_file = fopen(source_path, "r");
    if (source_file == NULL) {
        printf("Error: Could not open source file %s\n", source_path);
        exit(EXIT_FAILURE);
    }

    destination_file = fopen(destination_path, "w");
    if (destination_file == NULL) {
        fclose(source_file);
        printf("Error: Could not open destination file %s\n", destination_path);
        exit(EXIT_FAILURE);
    }
    while ((character = fgetc(source_file)) != EOF) {
        fputc(character, destination_file);
    }

    printf("File copied successfully from %s to %s.\n", source_path, destination_path);
    fclose(source_file);
    fclose(destination_file);
    return 0;
}

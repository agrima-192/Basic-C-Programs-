#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create_source_file(const char *filename) {
    FILE *f = fopen(filename, "wb");
    if (f == NULL) {
        perror("Error creating source file for input");
        exit(EXIT_FAILURE);
    }
    printf("Enter content for the source file ('%s').(Ctrl+Z then Enter (Windows) to finish input):\n", filename);

    int c;
    while ((c = getchar()) != EOF) {
        if (fputc(c, f) == EOF) {
            perror("Error writing user input to source file");
            fclose(f);
            exit(EXIT_FAILURE);
        }
    }
    fclose(f);
    printf("\nSource file '%s' created successfully with user input.\n\n", filename);
}

int main() {
    const char *source_filename = "source.bin";
    const char *dest_filename = "destination.bin";
    FILE *source_file, *dest_file;
    int c;
    create_source_file(source_filename);
    source_file = fopen(source_filename, "rb");
    if (source_file == NULL) {
        perror("Error opening source file for reading");
        exit(EXIT_FAILURE);
    }

    dest_file = fopen(dest_filename, "wb");
    if (dest_file == NULL) {
        perror("Error opening destination file");
        fclose(source_file);
        exit(EXIT_FAILURE);
    }

    while ((c = fgetc(source_file)) != EOF) {
        if (fputc(c, dest_file) == EOF) {
            perror("Error writing to destination file");
            fclose(source_file);
            fclose(dest_file);
            exit(EXIT_FAILURE);
        }
    }

    if (ferror(source_file)) {
        perror("Error reading from source file");
        fclose(source_file);
        fclose(dest_file);
        exit(EXIT_FAILURE);
    }
    fclose(source_file);
    fclose(dest_file);
    printf("Successfully copied file from '%s' to '%s'.\n", source_filename, dest_filename);
    return 0;
}

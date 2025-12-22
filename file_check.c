#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int file_exists_fopen(const char *filename) {
    FILE *file;
    if ((file = fopen(filename, "r"))) {
        fclose(file);
        return 1; // File exists
    }
    return 0;
}

int main() {
    char user_filename[256];

    printf("Enter the filename to check (e.g., myfile.txt): ");
    if (scanf("%255s", user_filename) != 1) {
        fprintf(stderr, "Error reading input.\n");
        return EXIT_FAILURE;
    }

    if (file_exists_fopen(user_filename)) {
        printf("The file '%s' exists.\n", user_filename);
    } else {
        printf("The file '%s' does not exist.\n", user_filename);
    }
    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
FILE *fptr;
char user_input[128];
char filename[] = "output2.txt";

printf("Enter text to write to the file (up to 127 characters):\n");
if (fgets(user_input, 128, stdin) == NULL) {
printf("Error reading input from user!\n");
return EXIT_FAILURE;
}
fptr = fopen(filename, "w");
if (fptr == NULL) {
printf("Error opening file!\n");
return EXIT_FAILURE;
}

fprintf(fptr, "%s", user_input);
fclose(fptr);

printf("Successfully wrote user input to %s.\n", filename);
return 0;
}

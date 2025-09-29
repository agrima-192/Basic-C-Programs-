#include <stdio.h>
#include <string.h> // Required for string functions like strcpy, strcat, strlen, strcmp
 
int main() {
    char str1[50] = "Programming";// 0-49, {'P','r','o','g','r','a','m','m','i','n','g','\0'}
    char str2[50] = "with";
    char str3[50] = "C";
    char str4[100]; // To store concatenated string
    char str5[100]; 
    char temp[50];  // For swapping
 
    // Copying a string
    strcpy(str4, str1); //
    printf("Copied string (str4): %s\n", str4); //Programming
 
    // Concatenating strings
    strcat(str1, " "); // Add a space
    strcat(str1, str2);
    //strcat(str2, str3);
    printf("Concatenated string (str1): %s\n", str1); // Programming with
 
    //Finding the length of a string
    int len = strlen(str1);
    printf("Length of str1: %d\n", len);
 
    //Comparing strings
    // strcmp returns 0 if strings are equal, <0 if first string is lexicographically smaller, >0 otherwise
    if (strcmp(str2, "with") == 0) {
        printf("str2 is equal to \"with\"\n");
    } else {
        printf("str2 is not equal to \"with\"\n");
    }
 
    return 0;
}

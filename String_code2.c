#include <stdio.h>

// Copy string
void copy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
// Find length
int length(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
// Concatenate two strings
void concatenate(char *dest, const char *src) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;   // move to end of dest
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}
// Compare two strings
int String_Comparison(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];  // handles equal length correctly
}

int main() {
    char str1[100], str2[100], str3[200];
    printf("Enter first string: ");
    scanf("%s", str1);   // simple input (no spaces)
    printf("Enter second string: ");
    scanf("%s", str2);

    // Copy
    copy(str3, str1);
    printf("\nCopied string (str1 -> str3): %s\n", str3);
    // Length
    printf("Length of str1 = %d\n", length(str1));
    printf("Length of str2 = %d\n", length(str2));
    // Concatenate
    copy(str3, str1);
    concatenate(str3, str2);
    printf("Concatenated string = %s\n", str3);
    // Compare
    int cmp = String_Comparison(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else if (cmp < 0)
        printf("String1 is smaller than String2.\n");
    else
        printf("String1 is greater than String2.\n");

    return 0;
}


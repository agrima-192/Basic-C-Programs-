#include <stdio.h>
int main() {
    char grade;
    printf("Enter the student's grade (A, B, C, D, or F): ");
    scanf(" %c", &grade);
    switch (grade) {
        case 'A':
        case 'a':
            printf("Excellent!\n");
            break;
        case 'B':
        case 'b':
            printf("Very good!\n");
            break;
        case 'C':
        case 'c':
            printf("Good.\n");
            break;
        case 'D':
        case 'd':
            printf("Pass.\n");
            break;
        case 'F':
        case 'f':
            printf("Fail.\n");
            break;
        default:
            printf("Invalid grade entered.\n");
            break;
    }
    return 0;
}

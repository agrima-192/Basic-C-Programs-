//program to determine if a given number is an Armstrong number or not.
#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num; // Reset originalNum to the input number

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n); // pow() returns a double, so result is double
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if ((int)result == num) { // Cast result to int for comparison
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

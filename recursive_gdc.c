#include<stdio.h>

int GCD(int num1, int num2) {
    // Base case: if num2 is 0, num1 is the GCD
    if (num2 == 0) {
        return num1;
    }
    // Recursive step: call GCD with num2 and the remainder of num1 divided by num2
    else {
        return GCD(num2, num1 % num2);
    }
}

int main() {
    int number1, number2, result;
    printf("Enter two positive integers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 < 0 || number2 < 0) {
        printf("Please enter positive integers.\n");
        return 1;
    }
    
    result = GCD(number1, number2);
    printf("The GCD of %d and %d is %d.\n", number1, number2, result);
    return 0;
}

//WAP to multiply two number using a function multiply().
//Print values for multiply(a,b), multiply(7,8), multiply (a+b,a-b) and multiply(6, sum(a,b)).

#include <stdio.h>

int multiply(int num1, int num2) {
    return num1 * num2;
}

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    printf("multiply(a, b) = %d\n", multiply(a, b));
    printf("multiply(7, 8) = %d\n", multiply(7, 8));
    printf("multiply(a + b, a - b) = %d\n", multiply(sum(a, b), (a - b)));
    printf("multiply(6, sum(a, b)) = %d\n", multiply(6, sum(a, b)));

    return 0;
}

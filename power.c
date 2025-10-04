//Program to raise a floating point number to an integer power. Use user defined function such as power().
#include <stdio.h>
double power(double base, int exponent);
int main() {
    double base;
    int exponent;
    double result;
    printf("Enter the base (floating-point number): ");
    scanf("%lf", &base);
    printf("Enter the exponent (integer): ");
    scanf("%d", &exponent);
    result = power(base, exponent);
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);
    return 0;
}

double power(double base, int exponent) {
    double res = 1.0;
    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            res *= base;
        }
    } 
    else {
        for (int i = 0; i < -exponent; i++) {
            res *= base;
        }
        res = 1.0 / res;
    }
    return res;
}

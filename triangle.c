//WAP to find the type and area of a triangle & use function type() and area() to call them in main function.
 #include <stdio.h>
#include <math.h>
double area(double s1, double s2, double s3) {
    double s = (s1 + s2 + s3) / 2; // Semi-perimeter
    return sqrt(s * (s - s1) * (s - s2) * (s - s3));
}

void type(double s1, double s2, double s3) {
    if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) {
        printf("Invalid Triangle (Triangle Inequality Theorem violated)\n");
    } else if (s1 == s2 && s2 == s3) {
        printf("Equilateral Triangle\n");
    } else if (s1 == s2 || s1 == s3 || s2 == s3) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene Triangle\n");
    }
}

int main() {
    double side1, side2, side3;
    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);
    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);
    printf("Enter the length of side 3: ");
    scanf("%lf", &side3);
    
    type(side1, side2, side3);
    if (!(side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)) {
        printf("Area of the triangle: %.2f\n", area(side1, side2, side3));
    }
    return 0;
}

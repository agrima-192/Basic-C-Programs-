#include <stdio.h>
int main() {
    // Arithmetic Operators
    int a = 10, b = 5;
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division
    printf("a %% b = %d\n", a % b); // Modulo (remainder)

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a > b is %d\n", a > b);   // Greater than
    printf("a < b is %d\n", a < b);   // Less than
    printf("a == b is %d\n", a == b); // Equal to
    printf("a != b is %d\n", a != b); // Not equal to
    printf("a >= b is %d\n", a >= b); // Greater than or equal to
    printf("a <= b is %d\n", a <= b); // Less than or equal to

    // Logical Operators
    int x = 1, y = 0; // 1 for true, 0 for false
    printf("\nLogical Operators:\n");
    printf("x && y is %d\n", x && y); // Logical AND
    printf("x || y is %d\n", x || y); // Logical OR
    printf("!x is %d\n", !x);         // Logical NOT

    // Assignment Operators
    int c = 20;
    printf("\nAssignment Operators:\n");
    c += 5; // c = c + 5
    printf("c after c += 5 is %d\n", c);
    c -= 10; // c = c - 10
    printf("c after c -= 10 is %d\n", c);
    c *= 2; // c = c * 2
    printf("c after c *= 2 is %d\n", c);
    c /= 3; // c = c / 3
    printf("c after c /= 3 is %d\n", c);
    c %= 4; // c = c % 4
    printf("c after c %%= 4 is %d\n", c);

    // Increment and Decrement Operators
    int d = 7;
    printf("\nIncrement and Decrement Operators:\n");
    printf("d++ (post-increment) returns %d, d is now %d\n", d++, d);
    printf("++d (pre-increment) returns %d, d is now %d\n", ++d, d);
    printf("d-- (post-decrement) returns %d, d is now %d\n", d--, d);
    printf("--d (pre-decrement) returns %d, d is now %d\n", --d, d);

    // Ternary Operator
    int age = 18;
    char* status = (age >= 18) ? "Adult" : "Minor";
    printf("\nConditional Operator:\n");
    printf("Status: %s\n", status);

    // Bitwise Operators (Example with small numbers)
    int num1 = 5; // Binary: 0101
    int num2 = 3; // Binary: 0011
    printf("\nBitwise Operators (for num1=5, num2=3):\n");
    printf("num1 & num2 (AND) = %d\n", num1 & num2); // 0001 (1)
    printf("num1 | num2 (OR) = %d\n", num1 | num2);  // 0111 (7)
    printf("num1 ^ num2 (XOR) = %d\n", num1 ^ num2);  // 0110 (6)
    printf("~num1 (NOT) = %d\n", ~num1);             // Inverts all bits
    printf("num1 << 1 (Left Shift) = %d\n", num1 << 1); // 1010 (10)
    printf("num1 >> 1 (Right Shift) = %d\n", num1 >> 1); // 0010 (2)

    return 0;
}

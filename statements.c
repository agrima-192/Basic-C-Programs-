#include <stdio.h>
// showing use of return 
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}
int main() {
    printf("--- Demonstrating 'break' statement ---\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking the loop when i is %d\n", i);
            break;
        }
        printf("Current value of i: %d\n", i);
    }
    printf("Loop broken.\n\n");

    printf("--- Demonstrating 'continue' statement ---\n");
    for (int j = 1; j <= 5; j++) {
        if (j == 3) {
            printf("Skipping iteration when j is %d\n", j);
            continue;
        }
        printf("Current value of j: %d\n", j);
    }
    printf("Loop finished after continue.\n\n");

    printf("--- Demonstrating 'return' statement in main ---\n");
    int num1 = 10, num2 = 20;
    int result = addNumbers(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

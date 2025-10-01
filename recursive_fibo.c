#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int FIBO(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        // Recursive case: The nth Fibonacci number is the sum of the (n-1)th and (n-2)th
        return FIBO(n - 1) + FIBO(n - 2);
    }
}

int main() {
    int num, i;
    printf("Enter the number of terms for the Fibonacci sequence: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative number of terms.\n");
    } else {
        printf("Fibonacci sequence up to %d terms:\n", num);
        for (i = 0; i < num; i++) {
            printf("%d ", FIBO(i));
            printf("\n");
        }
    }
    return 0;
}

//Program to print sum of series upto n terms
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("Sum of the series up to %d terms = %d\n", n, sum);
    return 0;
}

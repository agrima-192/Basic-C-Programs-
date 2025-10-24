#include <stdio.h>
// Recursive function to calculate factorial
long long int fact_recursive(int n) {
    if (n == 0) {
        return 1;
    } else {
        return (long long int)n * fact_recursive(n - 1);
    }
}

// Non-recursive function to calculate factorial
long long int fact_non_recursive(int n) {
    long long int result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate binomial coefficient C(n, r)
long long int binomial_coefficient(int n, int r) {
    if (r < 0 || r > n) {
        return 0; // Invalid input for binomial coefficient
    }
    return fact_recursive(n) / (fact_recursive(r) * fact_recursive(n - r));
}

int main() {
    int n_val, r_val, i, j;

    printf("Enter the maximum value for n: ");
    scanf("%d", &n_val);

    printf("Enter the maximum value for r: ");
    scanf("%d", &r_val);

    printf("\n--- Factorial Calculations ---\n");
    printf("Number | Recursive Factorial | Non-Recursive Factorial\n");
    printf("-------|---------------------|------------------------\n");
    for (i = 0; i <= n_val; i++) {
        printf("%-6d | %-19lld | %-22lld\n", i, fact_recursive(i), fact_non_recursive(i));
    }

    printf("\n--- Binomial Coefficient C(n, r) ---\n");
    printf("n\\r | ");
    for (j = 0; j <= r_val; j++) {
        printf("%-7d", j);
    }
    printf("\n----|---------------------------------------------------\n");

    for (i = 0; i <= n_val; i++) {
        printf("%-3d | ", i);
        for (j = 0; j <= r_val; j++) {
            printf("%-7lld", binomial_coefficient(i, j));
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
// Function to print matrix
void printMatrix(int mat[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%5d ", mat[i][j]);
        printf("\n");
    }
}
// Function to add two matrices
void addMatrix(int A[10][10], int B[10][10], int r, int c) {
    int sum[10][10];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = A[i][j] + B[i][j];

    printf("\nSum of Matrices:\n");
    printMatrix(sum, r, c);
}
// Function to multiply two matrices
void multiplyMatrix(int A[10][10], int B[10][10], int m, int n, int p, int q) {
    int product[10][10] = {0};
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < n; k++)
                product[i][j] += A[i][k] * B[k][j];

    printf("\nProduct of Matrices:\n");
    printMatrix(product, m, q);
}
// Function to calculate determinant (recursive)
int determinant(int A[10][10], int n) {
    int det = 0, submat[10][10];
    if (n == 1)
        return A[0][0];
    if (n == 2)
        return (A[0][0]*A[1][1] - A[0][1]*A[1][0]);

    for (int x = 0; x < n; x++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == x) continue;
                submat[subi][subj] = A[i][j];
                subj++;
            }
            subi++;
        }
        det += (x % 2 == 0 ? 1 : -1) * A[0][x] * determinant(submat, n - 1);
    }
    return det;
}

int main() {
    int A[10][10], B[10][10];
    int m, n, p, q;
    // Input matrix A
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d%d", &m, &n);
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    // Input matrix B
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d%d", &p, &q);
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Print matrices
    printf("\nMatrix A:\n");
    printMatrix(A, m, n);
    printf("\nMatrix B:\n");
    printMatrix(B, p, q);
    // Sum
    if (m == p && n == q)
        addMatrix(A, B, m, n);
    else
        printf("\nSum not possible (order mismatch).\n");
    // Product
    if (n == p)
        multiplyMatrix(A, B, m, n, p, q);
    else
        printf("\nProduct not possible (A's columns != B's rows).\n");
    // Determinant
    if (m == n) {
        int detA = determinant(A, m);
        printf("\nDeterminant of Matrix A = %d\n", detA);
    } else {
        printf("\nDeterminant of Matrix A not possible (not square).\n");
    }

    if (p == q) {
        int detB = determinant(B, p);
        printf("Determinant of Matrix B = %d\n", detB);
    } else {
        printf("Determinant of Matrix B not possible (not square).\n");
    }
    return 0;
}

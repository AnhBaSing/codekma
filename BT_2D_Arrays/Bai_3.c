#include <stdio.h>

int main() {
    int m, p, n;
    printf("Nhap so hang va cot cua A (m p): ");
    scanf("%d %d", &m, &p);
    printf("Nhap so cot cua B (p n): ");
    scanf("%d", &n);

    int A[m][p], B[p][n], C[m][n];

    printf("Nhap ma tran A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &A[i][j]);

    printf("Nhap ma tran B:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    // Multiply 2 matrix
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < p; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Tich ma tran:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}

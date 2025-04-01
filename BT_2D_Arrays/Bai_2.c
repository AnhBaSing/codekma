#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];

    printf("Nhap ma tran A:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    printf("Nhap ma tran B:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Ma tran tong:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
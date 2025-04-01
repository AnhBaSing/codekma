#include <stdio.h>

#define N 3  // Matrix size is fixed to 3x3

void spiralMatrix(int A[N][N], int result[N][N]) {
    int top = 0, bottom = N - 1, left = 0, right = N - 1;
    int index = 1;  // Start filling from 1

    while (top <= bottom && left <= right) {
        // Move right
        for (int i = left; i <= right; i++) result[top][i] = index++;
        top++;

        // Move down
        for (int i = top; i <= bottom; i++) result[i][right] = index++;
        right--;

        // Move left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) result[bottom][i] = index++;
            bottom--;
        }

        // Move up
        if (left <= right) {
            for (int i = bottom; i >= top; i--) result[i][left] = index++;
            left++;
        }
    }
}

// Function to print matrix
void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", matrix[i][j]);  // Formatting for spacing
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);

    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result[N][N] = {0};  // Store spiral order matrix

    spiralMatrix(A, result);  // Process the predefined matrix

    printf("Spiral matrix:\n");
    printMatrix(result);  // Print result in matrix format

    return 0;
}

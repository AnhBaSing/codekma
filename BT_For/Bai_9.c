#include <stdio.h>

int main() {
    int i = 2, n;
    double sum = 1;
    
    printf("Nhap so n: ");
    scanf("%d", &n);
    
    while (i <= n) {
        int b = 1;
        for (int j = 1; j <= i; j++) {
            b *= j;
        }
        sum += 1.0 / b;
        i++;
    }
    
    printf("Tong la %.5lf", sum);
    
    return 0;  // Added missing return statement
}
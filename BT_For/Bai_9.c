#include <stdio.h>

int main() {
    int i = 2, n;
    double sum = 1;
    
    printf("Nhap so n: ");
    scanf("%d", &n);
    
    while (i <= n) { //  2 < n
        int b = 1;
        for (int j = 1; j <= i; j++) { // Steps to calculate factorial
            b *= j;
        }
        sum += 1.0 / b; // Sum of factorials
        i++;
    }
    printf("Tong la %.5lf", sum);
    
    return 0;  // Added missing return statement
}

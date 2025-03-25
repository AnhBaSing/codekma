#include <stdio.h>
int main(){
    int n;
    double i, sum = 0;
    printf("Nhap so n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        sum += 1/i;
    }
    printf("Tong S la %.2lf", sum);
    return 0;
}
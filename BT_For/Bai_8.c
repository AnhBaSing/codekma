#include <stdio.h>
int main(){
    int a,n,i, sum = 1;
    printf("Nhap so n: ");
    scanf("%d", &n);
    a = n;
    for (i = 1; i <= n; n-=i){
        sum *= n;
    }
    printf("Gia tri giai thua %d! la %d\n", a, sum);
}
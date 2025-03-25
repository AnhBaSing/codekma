#include <stdio.h>
int main(){
    int n,i, sum = 0;
    printf("Kiem tra so co phai la so hoan hao khong: ");
    scanf("%d", &n);
    for (i = 1; i<= n; i++){
        if ( n % i == 0){
            sum += i;
        }
    }
    if (sum == 2*n){
        printf("%d la so hoan hao\n", n);
    } else {
        printf("%d khong phai la so hoan hao\n", n);
    }
    return 0;
}
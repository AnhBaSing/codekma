#include <stdio.h>
int main(){
    int x,n=0;
    printf("Nhap mang so nguyen va cac so: ");
    scanf("%d", &x);
    int a[x], b[x];
    for (int i = 0; i < x; i++ ){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < x; i++ ){
        if (a[i] < 0){
            b[i] = 0;
        } else {
            b[i] = a[i];
        }
        printf("%d ", b[i]);
    } 
}    
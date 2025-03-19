#include <stdio.h>
int main(){
    int x;
    printf("Nhap so bat ki \n");
    scanf("%d", &x);
    printf("Gia tri x^2, x^3, x^4 lan luot la %d, %d, %d", (x*x), (x*x*x),(x*x*x*x) );
}
#include <stdio.h>

int main(){
    int a,b;
    printf("Nhap 2 gia tri a,b: ");
    scanf("%d %d", &a, &b);
    int* ptr1 = &b;
    int* ptr2 = &a;
    printf("Gia tri a = %d, gia tri b = %d", *ptr1, *ptr2);
}
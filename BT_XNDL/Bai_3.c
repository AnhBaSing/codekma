#include <stdio.h>

int main(void){
    int a, b;
    printf("Nhap 2 so \n");
    scanf("%d %d", &a, &b);
    printf("Phep cong 2 so bang %d\n", a+b);
    printf("Phep tru 2 so bang %d\n", a-b);
    printf("Phep nhan 2 so bang %d\n", a*b);
    printf("Phep chia 2 so bang %d\n", a/b);
    return 0;
}
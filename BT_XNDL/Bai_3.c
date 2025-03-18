#include <stdio.h>

int main(void){
    int a;
    int b;
    printf("Nhap so dau tien \n");
    scanf("%d", &a);
    printf("Nhap so thu 2 \n");
    scanf("%d", &b);
    printf("Phep cong 2 so bang %d\n", a+b);
    printf("Phep tru 2 so bang %d\n", a-b);
    printf("Phep nhan 2 so bang %d\n", a*b);
    printf("Phep chia 2 so bang %d\n", a/b);
}
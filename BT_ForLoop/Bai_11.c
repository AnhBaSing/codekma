#include <stdio.h>
int main(){
    int a, b;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &a);
    printf("He co so 16 la %X \nHe co so 8 la %o\n", a, a);
    printf("He co so 2 la ");
    for (int i = 1; i > 0; i++ ){
        printf("%d", a % 2);
        b = a / 2;
        if (b == 0){
            break;
        }
        a = b;
    }
    return 0;
}
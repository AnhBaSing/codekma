#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, x1, x2, delta;
    printf("Nhap 3 so a, b, c :");
    scanf("%d %d %d", &a, &b, &c);;
    if (a == 0) {
        printf("Day khong phai phuong trinh bac hai.\n");
        return 0;
    }
    delta = b*b - 4*a*c;
        if (delta > 0){
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("Phuong trinh co 2 nghiem phan biet: x1 = %d, x2 = %d", x1, x2 );
        }   else if (delta == 0) {
            x1 = -b/(2*a);
            printf("Phuong trinh co 2 nghiem kep: x1 = %d", x1);
        }
            else if (delta < 0){
                printf("Phuong trinh vo nghiem");
            }
}

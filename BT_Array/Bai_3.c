#include <stdio.h>
int main(){
    int x,p = 0,n = 0;
    double med = 0,medp = 0,medn = 0;
    printf("Nhap mang so nguyen va cac so: ");
    scanf("%d", &x);
    int a[x];
    for (int i = 0; i < x; i++ ){
        scanf("%d", &a[i]);
        med += a[i];
    }
    for (int i = 0; i < x; i++ ){
        if (a[i] > 0){
            medp += a[i];
            p++;
        } else if (a[i] < 0){
            medn += a[i];
            n++;
        }
    }
    printf("Trung binh cong cua mang la %.2lf\nTrung bing cong cua mang co so nguyen duong la %.2lf\nTrung binh cong cua mang co so nguyen am la %.2lf\n", med/x , medp/p, medn/n);
}
#include <stdio.h>
#define PI 3.14
#include <math.h>
int main() {
    double r;  
    printf("Nhap vao ban kinh hinh cau: ");
    scanf("%lf", &r);  
    double dienTich = 4 * PI * pow(r, 2); // 4*pi*(r^2)
    double theTich = (4.0 / 3.0) * PI * pow(r, 3);  // (4/3)*pi*(r^3)
    printf("Dien tich hinh cau la: %.2f\nThe tich hinh cau la: %.2f", dienTich, theTich);
    return 0;
}

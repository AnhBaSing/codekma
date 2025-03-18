#include <stdio.h>

#define PI 3.14

int main() {
    double r;  // Đổi từ int sang double để tính chính xác hơn
    printf("Nhap vao ban kinh hinh cau: ");
    scanf("%lf", &r);  // Sử dụng %lf để nhập số thực

    double dienTich = 4 * PI * (r * r);
    double theTich = (4.0 / 3.0) * PI * (r * r * r);  // Chia đúng với số thực

    printf("Dien tich hinh cau la: %.2f\n", dienTich);
    printf("The tich hinh cau la: %.2f\n", theTich);

    return 0;
}

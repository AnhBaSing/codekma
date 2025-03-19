#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    // Nhập 3 cạnh tam giác
    printf("Nhap 3 canh cua tam giac: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Kiểm tra điều kiện tam giác
    if (a + b > c && a + c > b && b + c > a) {
        printf("Ba so tao thanh mot tam giac.\n");

        // Xác định loại tam giác
        if (a == b && b == c) {
            printf("Day la tam giac deu.\n");
        } else if (a == b || a == c || b == c) {
            if (fabs(a * a + b * b - c * c) < 1e-9 || 
                fabs(a * a + c * c - b * b) < 1e-9 || 
                fabs(b * b + c * c - a * a) < 1e-9) {
                printf("Day la tam giac vuong can.\n");
            } else {
                printf("Day la tam giac can.\n");
            }
        } else if (fabs(a * a + b * b - c * c) < 1e-9 || 
                   fabs(a * a + c * c - b * b) < 1e-9 || 
                   fabs(b * b + c * c - a * a) < 1e-9) {
            printf("Day la tam giac vuong.\n");
        } else {
            printf("Day la tam giac thuong.\n");
        }

        // Tính chu vi và diện tích
        double P = a + b + c;
        double s = P / 2;  // Nửa chu vi
        double S = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Chu vi tam giac: %.2lf\n", P);
        printf("Dien tich tam giac: %.2lf\n", S);
    } else {
        printf("Ba so khong tao thanh tam giac.\n");
    }

    return 0;
}

#include <stdio.h>

// Check for Leap Year
int leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int thang, nam;
    printf("Nhap thang nam theo dinh dang mm/yy: ");
    scanf("%d/%d", &thang, &nam);
    switch (thang) { // Kiem tra cac thang, nam nhuan bang switch case
        case 4: case 6: case 9: case 11:
            printf("Thang %d nam %d co 30 ngay\n", thang, nam);
            break;
        case 2:
            if (leap(nam)) { // Tra ve ket qua xem nam nhuan
                printf("Thang %d nam %d co 29 ngay (Nam Nhuan)\n", thang, nam);
            } else {
                printf("Thang %d nam %d co 28 ngay\n", thang, nam);
            }
            break;
        default:
            printf("Thang %d nam %d co 31 ngay\n", thang, nam);
    }
    return 0;
}

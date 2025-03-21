#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_NUMERIC, "");
    int tien, thang, i = 1;
    printf("Nhap so tien va so thang gui tiet kiem: ");
    scanf("%d %d", &tien, &thang);
    double temp = tien; // Set temp's value equal to money
    do {
        temp += temp*(0.45/100); // Original money plus profit
        i++;
    }while (i <= thang);
    printf("Tong so tien sau %d thang nhan duoc la %'.3lf dong\n", thang, temp);
}
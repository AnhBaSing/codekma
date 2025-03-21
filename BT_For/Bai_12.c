#include <stdio.h>
#define PI 3.14159265358979323846
#include <math.h>

int main(){
    int i = 0 ;
    double x, eps, n, sin = 0;
    printf("Nhap x va eps: ");
    scanf("%lf %lf", &x, &eps);
    x *= PI / 180; // Convert x to radian
    do {
        int k = 1;
        for (int j =1; j <= 2*i + 1;j++ ){
            k*=j; // Caculate the factorial
        }
        n = pow(-1, i)*pow(x,2*i+1)/k;
        sin +=n;// Caculate Sin(x)
        i++;
    }while (fabs(n)>eps); // Condition to stop
    printf("%.6lf\n", sin);
    return 0; 
}
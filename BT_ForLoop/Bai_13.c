#include <stdio.h>
#include <math.h>

int main(){
    int i = 1 ;
    double x, eps, n = 1, E = 1;
    printf("Nhap x va eps: ");
    scanf("%lf %lf", &x, &eps);
    do {
        n *= x / i;
        E += n;// Caculate e^x
        i++;
    }while (fabs(n)>eps); // Condition to stop
    printf("e^%.0lf = %.6lf\n",x, E);
    return 0; 
}
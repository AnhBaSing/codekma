#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    unsigned int a,b,c,d;
    int r;
    printf("Nhap vao hai so: ");
    scanf("%u %u",&a,&b);
    c=a;
    d=b;
    while (b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("Uoc chung lon nhat la: %u\n",a);
    printf("Boi chung nho nhat la: %u\n",(c*d)/a);
    return 0;
}

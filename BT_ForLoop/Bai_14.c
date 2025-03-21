#include <stdio.h>
int main()
{
    double gdp,speed;
    int nam= 2014;
    printf("Nhap vao GDP 2014 va toc do tang truong kinh te:");
    scanf("%lf %lf",&gdp,&speed);
    double temp = gdp; // Set GDP as anchor point to caculate GPD growth
    printf("Nam\tGDP\n");
    printf("2014\t%.2lf\n",gdp);
    do
    {
        nam++;
        temp += gdp*(speed/100.0); // Current GDP add to GDP's estimated growth rate in a year to display GDP in next year
        printf("%d\t%.2lf\n",nam,temp);
    }
    while ( temp <= 2.0*gdp); // Print until meet requirement : GDP at some point must be equal to 2 times of GDP in 2014
    return 0;
}
#include<stdio.h>
int main()
{
    double p;/*p is the principle*/
    double t;/*t is the time*/
    double r;/*r is the rate*/
    printf("Enter principle:");
    scanf("%lf",& p);
    printf("Enter time:");
    scanf("%lf",& t);
    printf("Enter rate:");
    scanf("%lf",& r);
    printf("Simple Interesr:%lf",(p*t*r)/100);
    return 0;

}
#include<stdio.h>
int amstrong(int n)
{
int sum,k,r;
k=n;
while(k!=0)
{
    r=k%10;
    sum=sum+(r*r*r);
    k=k/10;
}
if(sum==n)
printf("It is an amstrong number");
else
printf("It is not an amstrong number");
}
int main()
{
    int m;
    printf("Enter a number");
    scanf("%d",&m);
    amstrong(m);
    return 0;
}
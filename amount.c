#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=60)
    printf("Pension amount is Rs10000");
    else if(age>=50)
    printf("Pension amount is Rs5000");
    else
    printf("Pension amount is Rs0");
    return 0;
}
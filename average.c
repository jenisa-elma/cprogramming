#include<stdio.h>
int main()
{
    char name[20];
    double mark1;/*mark1 is the student's mark in the first subject*/
    double mark2;/*mark2 is the student's mark in the second subject*/ 
    double mark3;/*mark3 is the student's mark in the third subject*/
    printf("Enter your name:");
    fgets(name,20,stdin);
    printf("Yor name is %s",name);
    printf("Enter first mark:");
    scanf("%lf",& mark1);
    printf("Enter second mark:");
    scanf("%lf",& mark2);
    printf("Enter third mark:");
    scanf("%lf",& mark3);
    printf("Output:%lf",(mark1+mark2+mark3)/3);
    return 0;
}
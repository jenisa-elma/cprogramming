#include<stdio.h>
int prime(int x)
{
    int i;
    for(i=2;i<x-1;i++)
    {
        if(x%i==0)
        {
            printf("\n Not a prime number\n");
            return 0;
        }
    }
    printf("\n It is a prime number\n");
    }

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
}

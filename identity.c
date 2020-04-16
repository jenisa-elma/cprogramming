#include<stdio.h>
int main()
{
    int i,j,m,n,a[3][3],flag=1;
    printf("\n Pleaseenter the number of rows and columns:");
    scanf("%d %d",&i,&j);
    printf("\n Please enter the matrix elements \n");
    for(m=0;m<i;m++)
    {
        for(n=0;n<j;n++)
        {
            scanf("%d",&a[m][n]);
        }
    }
    for(m=0;m<i;m++)
    {
        for(n=0;n<j;n++)
        {
            if(a[m][n]!=1 && a[n][m]!=0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("\n The matrix is an identity matrix");
    }
    else{
        printf("\n The matrix is not an identity matrix");
    }
    return 0;
    }
    
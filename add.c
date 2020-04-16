#include<stdio.h>
int main()
{
    int i,j,m,n,a[3][3],sum=0;
    printf("Enter the order of the matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        printf("Sum of the row=%d\n",sum);
    
    }

    for(j=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i][j];
        }
        printf("Sum of the column =%d\n",sum);
       sum=0; 
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,k,m,a[3][3],b[3][3],c[3][3];
    printf("Enter order of the matrix:\n");
    scanf("%d",&m);
    printf("Emter elements of first matrix:\n");
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
    printf("Enter elements of second matrix:\n");
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
    for(j=0;j<m;j++)
    {
        for(k=0;k<m;k++)
        c[i][j]=c[i][j]+a[i][k]+b[k][j];
    }
    printf("Resultant matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        printf("%d",c[i][j]);
        printf("\n");
    }
    return 0;
    
}
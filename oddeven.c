#include<stdio.h>
int main()
{
    int i,j,m,n,even=0,odd=0,a[3][3];
    printf("Enter the order of the matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if((a[i][j]%2)==0)
            even++;
            else
            odd++;
        }
    }

printf("The frequency of occurence of odd number=%d \n",odd);
printf("The frequency of occurence of even number=%d\n",even);
return 0;
}
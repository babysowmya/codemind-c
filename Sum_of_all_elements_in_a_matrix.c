#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int a[r][c],csum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          csum=csum+a[i][j]; 
        }
    }
        printf("%d ",csum);
}
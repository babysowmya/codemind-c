#include<stdio.h>
int main()
{
    int r,c,z=0,s=0;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j;
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
           if(a[i][j]%2==0)
           {
               z=z+a[i][j];
           }
        }
    }
        printf("%d ",z);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if(a[i][j]%2!=0)
           {
               s=s+a[i][j];
           }
        }
    }
        printf("%d ",s);
    
}
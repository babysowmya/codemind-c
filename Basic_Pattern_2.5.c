#include<stdio.h>
int main()
{
    int n,i,j;
    int ch;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        ch=64+i;
        for(j=1;j<=n-i+1;j++)
        {
            printf("%c ",ch);
        }
        printf("
");
    }
}
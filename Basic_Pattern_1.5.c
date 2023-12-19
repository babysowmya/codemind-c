#include<stdio.h>
int main()
{
    int i,j,n;
    int ch;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ch=64+i;
        for(j=1;j<=n;j++)
        {
            printf("%c ",ch);
        }
        printf("
");
    }
}
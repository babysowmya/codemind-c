#include<stdio.h>
int main()
{
    int n,t,rev=0,r,i,a=0,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=n%10;
        a=a+r;
        n=n/10;
    }
    b=a+n;
    printf("%d",b);
}
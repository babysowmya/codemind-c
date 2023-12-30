#include<stdio.h>
int main()
{
    int n,c=0,d=0,e;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    {
        c=c+a[i];
    }
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2!=0)
    {
        d=d+a[i];
    }
    }
    if(c>d)
    {
        e=c-d;
    }
    else
    {
        e=d-c;
    }
    printf("%d",e);
}
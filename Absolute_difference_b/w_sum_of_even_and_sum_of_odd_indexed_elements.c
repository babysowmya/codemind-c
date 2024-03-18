#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,d=0,e;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            c=c+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
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
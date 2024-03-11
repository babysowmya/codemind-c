#include<stdio.h>
int main()
{
    int a,b,i,r,rev=0,t;
    scanf("%d%d",&a,&b);
    t=a;
    for(i=a;i<=b;i++)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
        if(rev==t)
        {
          printf("%d ",t);
        }
}
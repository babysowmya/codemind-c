#include<stdio.h>
int main()
{
    int r,n,rev=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
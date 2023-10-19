#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if((X-30*Y)>=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
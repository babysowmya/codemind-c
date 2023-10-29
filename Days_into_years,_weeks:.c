#include<stdio.h>
int main()
{
    int d,y,rd,w;
    scanf("%d",&d);
    y=d/365;
    rd=d%365;
    w=rd/7;
    printf("%d
%d",y,w);
}
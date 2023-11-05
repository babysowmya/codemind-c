#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d%d%d",&a,&b,&h);
    float area=((a+b)/2.0)*h;
    printf("%.4f",area);
}
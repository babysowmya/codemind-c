#include<stdio.h>
int main()
{
    int t,e,m,h,s;
    scanf("%d%d%d%d%d",&t,&e,&m,&h,&s);
    if(t>34 && e>34 && m>34 && h>34 && s>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
    
}
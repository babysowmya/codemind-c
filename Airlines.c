#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
while(n--)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int z = (a*10)*c;
    int x = (b*c);
    if(z<=x)
    {
     printf("%d\n",z);
    }
    else
    {
        printf("%d\n",x);
    }
    
}
}


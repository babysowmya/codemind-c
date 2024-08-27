#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
while(n--)
{
    int a,b;
    scanf("%d%d",&a,&b);
    int z = (a*2)+(b*4);
    printf("%d\n",z);
}
}


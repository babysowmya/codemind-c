#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
while(n--)
{
    int a,b;
    scanf("%d%d",&a,&b);
    int z=a+200;
    if( b>=a && b<=z) printf("YES\n");
    else printf("NO\n");
}
}


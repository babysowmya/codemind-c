#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
while(n--)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b*c) printf("Yes\n");
    else printf("No\n");
}
}


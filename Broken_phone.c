#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
while(n--)
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b) printf("REPAIR\n");
    else if(a>b) printf("NEW PHONE\n");
    else printf("ANY\n");
}
}


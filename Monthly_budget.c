#include <stdio.h>

int main(void) {
	// your code goes here
int n;
scanf("%d",&n);
while(n--)
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(30*b<=a) printf("YES\n");
    else printf("NO\n");
}

}


#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a,b;
	    scanf("%d%d",&a,&b);
	    if(a<=2*b) printf("YES\n");
	    else printf("NO\n");
	    
	}

}


#include <stdio.h>
int main() {
	// your code goes here
int n;
scanf("%d",&n);
int i,a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    if(n>1 && n<=4 && n%2==0)
    {
        printf("1\n");
    }
    else
    {
        int x=a[i]/4;
        int y=(a[i]%4)/2;
        int z=x+y;
        printf("%d\n",z);
        
    }
}

}


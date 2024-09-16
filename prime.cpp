#include<stdio.h>
int main()
{
	int i,n,t=0,r,flag=0,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		  c=c+1;
        }
	}
	if(c==2)
	{
		t=t+i;
		while(t!=0)
		{
			r=t%10;
		}
		t=t/10;
	}
	if(flag==1)
	{
		printf("mega number");
	}
	else
	{
		printf("not a mega prime");
	}
}
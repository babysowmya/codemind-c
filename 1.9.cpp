#include<stdio.h>
int even_odd(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int res=even_odd(n);
	printf("%d",res);
}
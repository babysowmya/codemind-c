#include<stdio.h>
int r_n(int);
int main()
{
	int n;
	scanf("%d",&n);
	int res=r_n(n);
	printf("%d",res);
}
int r_n(int a)
{
	int r,rev=0;
	while(a>0)
	{
		r=a%10;
		rev=rev*10+r;
		a=a/10;
	}
	return rev;
}
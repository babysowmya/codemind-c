#include<stdio.h>
void add(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int a,int b)
{
	int c=a+b;
	printf("%d",c);
}
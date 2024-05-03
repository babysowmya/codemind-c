#include<stdio.h>
void add();
int main()
{
	add();
}
void add()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int c=a+b;
	printf("%d",c);
}
#include<stdio.h>
int main()
{
	int a=10;
	void *ptr;
	ptr=&a;
	printf("%d",*(int *)ptr);
}
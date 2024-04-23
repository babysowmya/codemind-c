#include<stdio.h>
int l_i(int *a,int size,int key)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i]==key)
		{
			return i;
		}
	}
			return -1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int key;
	scanf("%d",&key);
	int result=l_i(a,n,key);
	if(result==-1)
	{
		printf("key not found");
	}
	else
	{
		printf("key found at %d index",result);
	}
}
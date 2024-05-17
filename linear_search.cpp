#include<stdio.h>
int li_sch(int *a,int i,int size,int key)
{
	if(a[i]==key)
	{
	return i;
	}
	return -1;
li_sch(a,i++,n,key);
}
int main()
{
	int n,a[n],key;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	li_sch(a,i,n,key);
}
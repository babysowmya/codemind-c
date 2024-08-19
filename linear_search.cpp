#include<stdio.h>
int li_sch(int *a,int size,int i,int key)
{
	if(i==size)
	{
		return -1;
	}
	  if(a[i]==key)
      {
		return i;
	  }
		return li_sch(a,size,i+1,key);
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int key;
	scanf("%d",&key);
	int res=li_sch(a,n,0,key);
	if(res==-1)
	{
		printf("key not found");
	}
	else
	{
		printf("key found at %d index",res);
	}
}
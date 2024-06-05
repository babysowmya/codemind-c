#include<stdio.h>
int b_re(int *a,int key,int low,int high)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		else if(a[mid]>key)
		{
			return b_re(a,key,low,mid-1);
		}
		else
		{
			return b_re(a,key,mid+1,high);
		}
	}
	return -1;
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
	int res=b_re(a,key,0,n-1);
	if(res==-1)
	{
		printf("key not fond");
	}
	else
	{
		printf("key found at %d index",res);
	}
}
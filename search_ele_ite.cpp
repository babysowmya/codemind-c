#include<stdio.h>
int linear_search_ite(int *a,int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if(key==a[i])
		{
			return i;
		}
}
		return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
	scanf("%d",&key);
	int result=linear_search_ite(arr,n,key);
	if(result==-1) printf("key not found");
	else printf("key found at %d index",result);
}
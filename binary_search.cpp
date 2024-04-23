#include<stdio.h>
int binary_search_ite(int *A,int size,int key)
{
	int low,high;
	low=0;
	high=size-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(A[mid]==key) return mid;
		else if(A[mid]>key) high=mid-1;
		else low=mid+1;
	}
	return -1;
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	int key;
	scanf("%d",&key);
	int result=binary_search_ite(A,n,key);
	if(result==-1)
	printf("Element not found");
	else
	printf("Element found at %d index",result);
}
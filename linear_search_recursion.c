#include<stdio.h>
int linear_search_rec(int *A,int size,int ind,int key)
{	
	if(ind==size)
	{
		return -1;
	}
		if(A[ind] == key)
		{
		return ind;
	    }
	return linear_search_rec(A,size,ind+1,key);
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
	int result=linear_search_rec(A,n,0,key);
	if(result==-1)
	printf("Element not found");
	else
	printf("Element found at %d index",result);
}
#include<stdio.h>
void print_array(int *a,int size)
{
	int i;
	for(int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");	
}
void se_sort(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
			int t=a[i];
			a[i]=a[min];
			a[min]=t;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("before sorting: ");
	print_array(a,n);
	se_sort(a,n);
	printf("after sorting: ");
	print_array(a,n);
	return 0;
	
}
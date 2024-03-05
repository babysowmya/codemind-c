#include<stdio.h>
void print_array(int *a,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
void bubble_sort(int *a,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
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
	bubble_sort(a,n);
	printf("after sorting: ");
	print_array(a,n);
	return 0;
	
}
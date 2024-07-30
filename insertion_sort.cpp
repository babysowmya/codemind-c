#include<stdio.h>
void p_a(int *a,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}
void i_s(int *a,int n)
{
	for(int i=1;i<n;i++)
	{
		int key=a[i],j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		
	}
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
	printf("before swapping: ");
	p_a(a,n);
	i_s(a,n);
	printf("after swapping: ");
	p_a(a,n);
	return 0;
}
#include<stdio.h>
void p_a(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}
int par(int *a,int l,int h)
{
	int r[h-l+1];
	int pivot=a[l];
	int k=0;
	for(int i=l+1;i<=h;i++)
	{
		if(a[i]<pivot)
		{
			r[k]=a[i];
			k++;
		}
	}
	int ind=l+k;
	r[k]=pivot;
	k++;
	for(int i=l+1;i<=h;i++)
	{
		if(a[i]>pivot)
		{
			r[k]=a[i];
			k++;
		}
	}
	k=0;
	for(int i=l;i<=h;i++)
	{
		a[i]=r[k];
		k++;
	}
	return ind;
}
void q_s(int *a,int l,int h)
{
	if(l<h)
	{
		int p=par(a,l,h);
		q_s(a,l,p-1);
		q_s(a,p+1,h);
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
	printf("before sorting: ");
	p_a(a,n);
	q_s(a,0,n-1);
	printf("after sorting: ");
	p_a(a,n);
}
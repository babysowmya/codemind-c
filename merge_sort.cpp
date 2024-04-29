#include<stdio.h>
void print_array(int *a,int n)
{
int i;
for(i=0;i<n;i++)
{
	printf("%d  ",a[i]);
}
printf("\n");
}
void merge(int *a,int l,int m,int h)
{
	int result[h-l+1];
	int i=l,j=m+1,k=0;
	while(i<=m && j<=h)
	{
		if(a[i]<=a[j])
		{
			result[k]=a[i];
			i++;
			k++;
		}
		else
		{
			result[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=m)
	{
		result[k]=a[i];
		i++;
		k++;
	}
	while(j<=h)
	{
		result[k]=a[j];
		j++;
		k++;
	}
	k=0;
	for(i=l;i<=h;i++)
	{
		a[i]=result[k];
		k++;
	}
}
void m_s(int *a,int l,int h)
{
	if(l<h)
	{
		int m=(l+h)/2;
		m_s(a,l,m);
		m_s(a,m+1,h);
		merge(a,l,m,h);
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
	printf("before sorting:");
	print_array(a,n);
	m_s(a,0,n-1);
	printf("after sorting: ");
	print_array(a,n);
	return 0;
	
}
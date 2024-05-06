#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	j=n-1;
	while(i<j)
			{
		     int tem=a[i];
		     a[i]=a[j];
	      	 a[j]=tem;
	      	 i++;
	      	 j--;
		 }
		for(i=0;i<n;i++)
	    printf("%d ",a[i]);
}
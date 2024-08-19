#include<stdio.h>
void BubbleSort(int *a,int n,int i)
{
	//base case
	if(n==0 || i==n-1) return;
	if(a[i]>a[i+1])
	{
		int t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
		BubbleSort(a,n,i+1);
		BubbleSort(a,n-1,0);
}
int main()
{
	int a[]={2,9,1,7,0};
	int n=sizeof(a)/sizeof(int);
    BubbleSort(a,n,0);	
    int i;
    for(i=0;i<n;i++)
    {
    	printf("%d ",a[i]);
	}
}
 
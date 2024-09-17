#include<stdio.h>
int LastOcc(int *a,int n,int key)
{
	if(n==0) return -1;
	int sub=LastOcc(a+1,n-1,key);
	if(sub!=-1)
	{
		return sub+1;
	}
	if(a[0]==key) return 0;
	return -1;
}
int main()
{
	int a[]={2,5,7,9,4};
	int n=sizeof(a)/sizeof(int);
	int res=LastOcc(a,n,9);
	printf("%d",res);
}
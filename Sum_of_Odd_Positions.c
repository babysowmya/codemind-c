#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            c=c+a[i];
        }
    }
    printf("%d",c);
}
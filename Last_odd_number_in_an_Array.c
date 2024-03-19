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
    int c;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]%2!=0)
        {
            c=a[i];
            break;
        }
    }
    printf("%d",c);
}
#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(i%n==0)
        {
            c=c+1;
        }
           printf("%d",c);
    }
        
}
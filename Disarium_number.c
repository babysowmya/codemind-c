#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,r,c=0,s=0;
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        x=x/10;
        c++;
        
    }
    x=n;
    while(x!=0)
    {
        int r=x%10;
        s=s+pow(r,c);
        x=x/10;
        c--;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
    
    
    

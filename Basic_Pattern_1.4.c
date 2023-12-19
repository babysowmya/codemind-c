#include<stdio.h>
int main()
{
    int n,i,j;
    int ch;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++) 
       {
           ch=64+j;
          printf("%c ",ch); 
       }
       printf("
");
    }
}

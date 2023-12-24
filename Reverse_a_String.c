#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    scanf("%[^
]s",str);
    int i=0,t;
    int j=strlen(str)-1;
    while(i<=j)
    {
        t=str[i];
        str[i]=str[j];
        str[j]=t;
        i++;
        j--;
    }
    printf("%s",str);
}
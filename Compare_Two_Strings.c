#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str2[20];
    scanf("%[^
]s",str);
    scanf(" %[^
]s",str2);
    int res=strcmp(str,str2);
    if(res==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}
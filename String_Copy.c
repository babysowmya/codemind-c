#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    scanf("%[^
]s",str1);
    strcpy(str2,str1);
    printf("%s",str2);
}
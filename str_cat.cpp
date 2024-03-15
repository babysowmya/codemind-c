#include<stdio.h>
int main()
{
	char str[10],str2[10];
	int i,len=0;
	scanf("%[^\n]s",str);
	scanf(" %[^\n]",str2);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
	    str[len]=str2[i];
	    len++;
	}
	printf("%s",str);

	
}
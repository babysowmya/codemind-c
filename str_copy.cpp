#include<stdio.h>
int main()
{
	char str[20],str2[20];
	int i;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		str2[i]=str[i];
	}
	printf("%s",str2);
}
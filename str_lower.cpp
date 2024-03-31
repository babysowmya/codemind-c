#include<stdio.h>
int main()
{
	char str[20];
	int i;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
	printf("%s",str);
}

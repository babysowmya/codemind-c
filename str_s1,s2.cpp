#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
};
int main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d%s",&s[i].rollno,s[i].name);
	}
	for(i=0;i<5;i++)
	{
		printf("%d %s\n",s[i].rollno,s[i].name);
	}
	
}
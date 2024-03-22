#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
};
int main()
{
	struct student s1,s2;
	scanf("%d %s",&s1.rollno,s1.name);
	printf("%d %s",s1.rollno,s1.name);
	scanf("%d %s",&s2.rollno,s2.name);
	printf("%d %s",s2.rollno,s2.name);

}
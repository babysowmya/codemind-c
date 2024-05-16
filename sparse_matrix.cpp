#include<stdio.h>
#include<stdlib.h>
struct node{
    int row;
    int col;
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
void insert(int r,int c,int val)
{
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->row=r;
	newNode->col=c;
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void display(){
	printf("Non-zero elements of matrix\n");
	printf("row\tcol\tdata\n");
	Node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t%d\t%d\n",temp->row,temp->col,temp->data);
		temp=temp->next;
	}
	
}
int main(){
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int m[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(m[i][j]!=0){
				insert(i,j,m[i][j]);
			}
		}
	}
	display();
}
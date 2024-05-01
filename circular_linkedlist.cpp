#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *next=NULL;
void insert_at_head(int val)
{
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		head->next=head;
	}
	else
	{
		Node *temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
		head=newnode;
	}		
}
void display(){
	if(head==NULL)
	{
		printf("linked list is empty\n");
	}
	else
	{
		Node *temp=head;
		do{
			printf("%d",temp->data);
			temp=temp->next;
		}while(temp!=head);
		printf("\n");
		}
	}
void display_n_nodes(){
	int n;
	printf("enter no of nodes to dispay ");
	
}	
int main()
{
	int ch;
	while(1)
	{
		printf("enter\n1.insert at head\n2.insert at tail\n3.display\n4.display_n_nodes\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			printf("enter a value for node to be inserted ");
			scanf("%d",&val);
			insert_at_head(val);
		}
		else if(ch==2)
		{
			
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			display_n_nodes();
		}
		else
		{
			printf("Thank you\n");
			break;
		}
	}
}
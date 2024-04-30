//doublelinkedlist//
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
Node *tail=NULL;
void insert_at_head(int val)
{
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->prev=NULL;
	newnode->next=NULL;
	newnode->data=val;
	if(head==NULL && tail==NULL)
	{
		head=newnode;
		tail=newnode;
	}
	else
	{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
}
void insert_at_tail(int val)
{
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->prev=NULL;
	newnode->next=NULL;
	newnode->data=val;
	if(head==NULL && tail==NULL)
	{
		head=newnode;
		tail=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
}
void delete_at_head()
{
	if(head==NULL && tail==NULL)
	{
		printf("no nodes to delete\n");
	}
	else if(head->next==NULL && head->prev==NULL)//head==tail//
	{
		Node *delnode=head;
		head= NULL;
		tail=NULL;
		free(delnode);
	}
	else
	{
		Node *delnode=head;
		head=head->next;
		head->prev=NULL;
		free(delnode);
	}
}
void delete_at_tail()
{
	if(head==NULL && tail==NULL)
	{
		printf("no nodes to delete\n");
	}
	else if(head==tail)
	{
		Node *delnode=tail;
		head=NULL;
		tail==NULL;
		free(delnode);
	}
	else
	{
		Node *delnode=tail;
		tail=tail->prev;
		tail->next=NULL;
		free(delnode);
	}
}
void display_from_left()
{
	if(head==NULL &&tail==NULL)
	{
		printf("linked list is empty\n");
	}
	else
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}
void display_from_right()
{
	if(head==NULL && tail==NULL)
	{
		printf("linkedlist is empty\n");
	}
	else
	{
		Node *temp=tail;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->prev;
		}
		printf("\n");
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("enter\n1,insert at head\n2.insert at tail\n3.delete at head\n4.delete at tail\n5.display from left\n6.display from right");
		scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			printf("enter a vaue for the node to be inserted");
			scanf("%d",&val);
			insert_at_head(val);	
		}
		else if(ch==2)
		{
			int val;
			printf("enter value to be inserted");
			scanf("%d",&val);
			insert_at_tail(val);
		}
		else if(ch==3)
		{
			delete_at_head();
		}
		else if(ch==4)
		{
			delete_at_tail();
		}
		else if(ch==5)
		{
			display_from_left();
		}
		else if(ch==6)
		{
			display_from_right();
		}
		else
		{
			printf("Thank you\n");
			break;
		}
	}
	
}
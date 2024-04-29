//linked list operations
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
void insert_at_head(int val){
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		newNode->next=head;
		head=newNode;
	}	
}
void insert_at_tail(int val){
    Node *newNode,*temp;
	newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
		return;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
	}
}
void delete_at_head()
{
	if(head==NULL)
	{
		printf("no nodes to delete\n");
	}
	else
	{
		head=head->next;
	}
}
void delete_at_tail()
{
	if(head==NULL)
	{
		printf("no nodes in the linkedlist\n");
	}
	else if(head->next==NULL)
	{
		Node *delNode=head;
		head=NULL;
		free(delNode);
	}
	else
	{
		Node *temp=head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
			
		}
		Node *delNode=temp->next;
		temp->next=NULL;
		free(delNode);
	}
}
void display(){
	if(head==NULL){
		printf("no nodes to display");
		return;
	}
	node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
}
int main()
{
	int ch;
	while(1)
	{
		printf("enter\n1.insert at head\n2.insert at tail\n3.display\n4.delete at head\n5.delete at tail\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			printf("enter a value for the node to be inserted");
			scanf("%d",&val);
			insert_at_head(val);
			
		}
		else if(ch==2)
		{
			int value;
			scanf("%d",&value);
			insert_at_tail(value);
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			delete_at_head();
		}
		else if(ch==5){
			delete_at_tail();
		}
		else
		{
			printf("sorry for testing\n");
			break;
		}
	}
}
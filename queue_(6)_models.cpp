//queue using linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
Node *tail=NULL;
int size=0;
void enqueue(int val)
{
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->data=val;
	newnode->next=NULL;
if(head==NULL && tail==NULL)
{
	head=newnode;
	tail=newnode;
}
else
{
	tail->next=newnode;
	tail=newnode;
}
size++;
}
void dequeue()
{
	if(head==NULL && tail==NULL) 
	{
		printf("queue is empty\n");
		return;
	}
	Node *delnode=head;
	head=head->next;
	if(head==NULL) tail=NULL;
	size--;
	free(delnode);
}
void display(){
	if(head==NULL&&tail==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	Node *temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void getfront()
{
	if(head==NULL&&tail==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	printf("front: %d\n",head->data);
}
void getrear()
{
	if(head==NULL && tail==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	printf("rear: %d\n",tail->data);
}
void getsize()
{
	printf("size is: %d\n",size);
}
int main()
{
	int ch;
	while(1)
	{
	printf("Enter\n1. enqueue\n2. dequeue\n3. getfront\n4. getrear\n5. getsize\n6. display\n");
	scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			printf("Enter a value to insert into the queue:");
			scanf("%d",&val);
			enqueue(val);
		} 
		else if(ch==2)
		{
			dequeue();
		}
		else if(ch==3)
		{
			getfront();
		}
		else if(ch==4)
		{
			getrear();
		}
		else if(ch==5)
		{
			getsize();
		}
		else if(ch==6)
		{
			display();
		}
		else
		{
			break;
		}
	}	
}

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
void getfront()
{
	printf("%d ",head->data);
}
void enqueue(int val)
{
	Node *newnode=(Node *)malloc(sizeof(Node));
	Node *temp;
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		temp->next=newnode;
	}
}
void dequeue()
{
	if(head==NULL)
	{
		printf("No nodes to delete\n");
	}
	else
	{
		Node *delnode=head;
		head=head->next;
		free(delnode);
	}
}
void display(){
	if(head==NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
	printf("Enter\n1. enqueue\n2. dequeue\n3. getfront\n4. getrear\n5. getsize\n6. display\n");
	scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			printf("Enter a value to insert into the queue:");
			scanf("%d",&val);
			enqueue(val);
		} 
		else if(ch==2)
		{
			dequeue();
		}
		else if(ch==3)
		{
			getfront();
		}
		else if(ch==4)
		{
			getrear();
		}
		else if(ch==5)
		{
			getsize();
		}
		else if(ch==6)
		{
			display();
		}
		else
		{
			break;
		}
	}	
}*/
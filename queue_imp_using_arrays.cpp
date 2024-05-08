//Queue implementation using arrays
#include<stdio.h>
int q[100];
int size;
int front=0;
int rear =0;
void enqueue(int val)
{
	if(rear-front==size)
	{
		printf("queue is full\n");
		return;
	}
		q[rear]=val;
		rear++;
}
void dequeue()
{
	if(rear==front)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("%d is deleted\n",q[front]);
	front++;
}
void display()
{
	if(front==rear)
	{
		printf("queue is empty\n");
		return;
	}
	int i;
	for(i=front;i<rear;i++)
	{
		printf("%d ",q[i]);
	}
	printf("\n");
}
int main()
{
	printf("Enter the size of the queue");
	scanf("%d",&size);
	int ch;
	while(1){
		printf("Enter\n1. Enqueue\n2. Dequeue\n3. Display\n4. Any other to exit\n");
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
			display();
		}
		else
		{
			break;
		}
	}
}
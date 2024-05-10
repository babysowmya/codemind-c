//stack implementation using arrays//
#include<stdio.h>
int st[1001];//global variable//
int size;//global variable//
int top=-1;//global variable//
void PUSH(int ele)
{
	//overflow//
	if(top==size-1)
	{
		printf("stack is full\n");
	}
	else
	{
	    top++;
		st[top]=ele; //st[++top]=ele;//	
	}
}
void POP()
{
	// underflow contition//
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("element deleted: %d\n",st[top]);
		top--;
	}
}
void DISPLAY()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		int i;
		for(i= top;i>=0;i--)
		{
			printf("%d ",st[i]);
		}
		printf("\n");
	}
}
int main()
{
	printf("enter the size of stack: ");
	scanf("%d",&size);
	int ch;
	while(1)
	{
		printf("enter\n1. PUSH\n2. POP\n3. DISPLAY\nAny other to exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			int ele;
			printf("enter an element to PUSH: ");
			scanf("%d",&ele);
		    PUSH(ele);
		}
	    else if(ch==2)
      	{
		    POP();
    	}
    	else if(ch==3)
    	{
    		DISPLAY();
		}
		else
		{
			break;
		}
    }
}
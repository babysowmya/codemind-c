#include<stdio.h>
#include<string.h>
#include<ctype.h>
void evaluateRPN(char *postfix){
	int st[101];
	int top=-1,i;
	for(i=0;i<strlen(postfix);i++){
		if(isdigit(postfix[i])){
			st[++top]=postfix[i]-48;
		}
		else
		{
			int op2=st[top];
			top--;
			int op1=st[top];
			top--;
			int res;
			if(postfix[i]=='+')res=op1+op2;
			else if(postfix[i]=='-')res=op1-op2;
			else if(postfix[i]=='*')res=op1*op2;
		    else if(postfix[i]=='/')res=op1/op2;
		    st[++top]=res;	
		}
	}
	printf("The result is: %d",st[top]);
}
int main(){
	char postfix[101];
	printf("Enter a string in postfix form(use digits,+,-,*,/): ");
	scanf("%s",postfix);
	evaluateRPN(postfix);
	return 0;
}
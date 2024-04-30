// Polynomial representation using linked list
#include <stdio.h>
#include <stdlib.h>
struct node {
	float coeff;
	int expo;
	struct node *next;	
};
// alias
typedef struct node Node;
Node* insert_term(Node *head, float c, int e) {
	// Create the node
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->coeff = c;
	newNode->expo = e;
	newNode->next = NULL;
	// Implement insert at tail operation
	if (head == NULL) {
		head = newNode;	
	}
	else {
		// Reach last node to attach newNode
		Node *temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return head;
}
Node* create_polynomial() {
	Node *head = NULL;
	int n, i; // number of terms in the polynomial
	printf("Enter number of terms of the polynomial: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		float co;
		int ex;
		printf("Enter co-efficient of term %d: ", i);
		scanf("%f", &co);
		printf("Enter exponent of term %d: ", i);
		scanf("%d", &ex);
		head = insert_term(head, co, ex);
	}
	return head;
}
void display(Node *head) {
	Node *temp = head;
	while (temp != NULL) {
		printf("(%.1f)x^%d%c", temp->coeff, temp->expo, (temp->next==NULL) ? '\n' : '+');
		temp = temp->next;	
	}
}
Node *add_two_polynomial(Node *poly1,Node *poly2){
	Node *head=NULL;
	Node *temp1=poly1;
	Node *temp2=poly2;
	while(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->expo==temp2->expo)
		{
			head=insert_term(head,temp1->coeff+temp2->coeff,temp1->expo);
			temp1=temp1->next;
			temp2=temp2->next;
		}
		else if(temp1->expo>temp2->expo)
		{
			head=insert_term(head,temp1->coeff,temp1->expo);
			temp1=temp1->next;
		}
		else
		{
			head=insert_term(head,temp2->coeff,temp2->expo);
			temp2=temp2->next;
		}
	}
	Node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	if(temp1==NULL)
	{
		temp->next=temp2;
	}
	else
	{
		temp->next=temp1;
	}
	return head;
}
int main() {
	Node *poly1 = create_polynomial();
	Node *poly2 = create_polynomial();
	display(poly1);
	display(poly2);
	Node *result=add_two_polynomial(poly1,poly2);
	display(result);
}
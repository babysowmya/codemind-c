//consructing a binary tree
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node TreeNode;
void preorder(TreeNode *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
int main()
{
	int levels,i;
	printf("Enter no.of levels: ");
	scanf("%d",&levels);
	int no_of_nodes=(int)pow(2,levels)-1;
	TreeNode* nodes[no_of_nodes];
	for(i=0;i<no_of_nodes;i++)
	{
		printf("Index %d: \nEnter\n1. Node\n2. NULL\n",i);
		int ch;
		scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			printf("Enter a value for the node: ");
			scanf("%d",&val);
			TreeNode *newnode=(TreeNode *)malloc(sizeof(TreeNode));
			newnode->data=val;
			newnode->left=NULL;
			newnode->right=NULL;
			nodes[i]=newnode;
		}
		else
		{
			nodes[i]=NULL;
		}
	}
	for(i=0;i<no_of_nodes/2;i++)
	{
		if(nodes[i]!=NULL)
		{
			nodes[i]->left=nodes[2*i+1];
		    nodes[i]->right=nodes[2*i+2];
		}
	}
	TreeNode *root=nodes[0];
	preorder(root);	
}
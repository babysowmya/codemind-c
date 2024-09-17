// BST - Insertion, Search and In-Order Traversal
#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;	
};
typedef struct node TreeNode;
TreeNode *construct_BST(TreeNode *root, int val) {
	// Create a TreeNode
	TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
	// Populate the node
	newNode->data = val;
	newNode->left = NULL;
	newNode->right = NULL;
	// When root is NULL (Tree is empty)
	if (root == NULL) {
		return newNode;
	}
	TreeNode *curr = root, *parent = NULL;
	while (curr != NULL) {
		parent = curr;
		if (val < curr->data) {
			curr = curr->left;
		} else {
			curr = curr->right;
		}
	}
	if (val < parent->data) {
		parent->left = newNode;	
	} else {
		parent->right = newNode;	
	}
	return root;
}
void in_order(TreeNode *root) {
	if (root != NULL) {
		in_order(root->left);
		printf("%d ", root->data);
		in_order(root->right);	
	}
}
int search(TreeNode *root, int key) {
	if (root == NULL) {
		return 0; // 0 means not found
	}
	TreeNode *curr = root;
	while (curr != NULL) {
		if (key == curr->data) {
			return 1;	
		} else if (key < curr->data) {
			curr = curr->left;
		} else {
			curr = curr->right;
		}
	}
	return 0;
}
int main() {
	TreeNode *root = NULL;
	int n; // how many nodes
	printf("Enter number of nodes: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int val;
//		printf("Enter a value for node %d: ", i + 1);
		scanf("%d", &val);
		root = construct_BST(root, val);
	}
	// Traversal
//	in_order(root);
	// Searching
	int key;
	printf("Enter a value to look: ");
	scanf("%d", &key);
	int result = search(root, key);
	if (result == 1) printf("Found");
	else printf("Not Found");
}

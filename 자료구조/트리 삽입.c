#include<stdio.h>
#include<stdlib.h>

typedef struct Node* TreePointer;
typedef struct Node {
	TreePointer left;
	int data;
	TreePointer right;
}Node;
TreePointer root = NULL;

int insert(TreePointer ptr, int key);
TreePointer search(TreePointer ptr, int key);

int main() {
	//	Node node1 = {NULL, 1, NULL};
	//	Node node3 = {NULL, 3, NULL};
	//	Node node2 = {&node1, 2, &node3};
	//	Node node5 = {NULL, 5, NULL};
	//	Node node4 = {&node2, 1, &node5};
	//	root = &node4;
	//	insert(root, 6);
	//	printf("%d\n",node5.right->data);
	//	insert(root, 0);
	//	printf("%d",node1.left->data);
	insert(root, 4);
	insert(root, 2);
	insert(root, 1);
	insert(root, 3);
	insert(root, 5);
	printf("    %d\n", root->data);
	printf("  %d    %d\n", root->left->data, root->right->data);
	printf("%d  %d\n", root->left->left->data, root->left->right->data);
	insert(root, 5);
}

int insert(TreePointer ptr, int key) {
	TreePointer temp = search(ptr, key);
	if (!temp && root) return printf("Tree has a %d already!", key);
	TreePointer newnode = (TreePointer)malloc(sizeof(Node));
	newnode->data = key;
	newnode->left = NULL;
	newnode->right = NULL;
	if (!root) {
		root = newnode;
		return 0;
	}
	if (temp->data > key) temp->left = newnode;
	else temp->right = newnode;
}

TreePointer search(TreePointer ptr, int key) {
	if (!root) return NULL;
	if (ptr->data == key) return NULL;
	if (ptr->data > key) {
		if (!ptr->left) return ptr;
		else return search(ptr->left, key);
	}
	else {
		if (!ptr->right) return ptr;
		else return search(ptr->right, key);
	}
}
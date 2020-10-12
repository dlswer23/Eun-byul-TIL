#include<stdio.h>
#include<stdlib.h>
typedef struct Node* NodePointer;
typedef struct Node {
	int data;
	NodePointer link;
}Node;
NodePointer top = NULL;

void push(int value);

int main() {
	//데스트를 위한 공간
	push(1);
	push(2);
	printf("%d %d", top->data, top->link->data);
}

void push(int value) {
	NodePointer temp = (NodePointer)malloc(sizeof(Node));
	temp->data = value;
	temp->link = top;
	top = temp;
}
#include<stdio.h>
#include<stdlib.h>

typedef struct NODE* NodePointer;
typedef struct NODE {
	int data;
NodePointer link;
}NODE;
NodePointer head = NULL;

void Insert(NodePointer pre, int value);

int main() {
	Insert(head, 1);
	Insert(head, 2);
	printf("%d ", head->data);
	printf("%d ", head->link->data);
}

int serch(NodePointer ptr, int value) {
	int i;
	for (i = 1; ptr->data != value; ptr = ptr->link)i++;
	return i;
}

void Insert(NodePointer pre, int value) {
	NodePointer temp = (NodePointer)malloc(sizeof(NODE));
	temp->data = value;
	if (!head) { //리스트가 공백인 상태 
		temp->link = NULL;
		head = temp;
	}
	else { //리스트가 공백이 아닌 상태  
		temp->link = pre->link;
		pre->link = temp;
	}
	
	void Delete(NodePointer del, NodePointer tra){
		if (!head) return printf("List is Empty!\n");
		else {
			NodePointer temp = del;
			if (tra) tra->link = del->link;
			else head = head->link;
			free(temp);
		}
	
	
}
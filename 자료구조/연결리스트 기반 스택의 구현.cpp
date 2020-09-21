#include<stdio.h>
#include<stdlib.h>


typedef struct Stacklnit {
	int data;
	Stacklnit* link;
}Stack;



Stack* top = NULL;
void push(int value)
{
	Stack* newStack = (Stack*)malloc(sizeof(Stack));

	newStack->data = value;
	newStack->link = top;
	top = newStack;
}

int IsEmpty()
{
	if (top == NULL)
		return 1;
	else return 0;
}

int pop() {
	int value;
	Stack* temp = top;
	if (IsEmpty()) return 0;
	else {
		top = top->link;
		value = temp->data;
		free(temp);
		return value;
	}
}

int main() {
	push(NULL);
	printf("%d ", top->data);
	printf("%d", pop());

}
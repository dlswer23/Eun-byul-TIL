#include<stdio.h>

int top = -1;
int isFull() {
	if (top == 9)
		return 1;
	else
		return 0;
}

int isEmpty() {
	if (top == -1)
		return 1;
	else
		return 0;
}


int push(int *stack,int value){
	if (isFull())
		return 0;
	else
	{
		printf("push:%d\n", value);
		stack[++top] = value;
	}
}
int pop(int* stack) {
	if (isEmpty())
		return 0;
	else
	{
		printf("pop:%d\n", stack[top]);
		stack[top--]=0;
	}
}

void print(int *stack) {
	for (int i = 0; i <= top; i++)
		printf("%d\n", stack[i]);
}


int main() {
	int stack[10];
	push(stack, 20);
	push(stack, 10);
	push(stack, 30);
	push(stack, 40);
	push(stack, 100);
	push(stack, 20);
	pop(stack);
	print(stack);
}


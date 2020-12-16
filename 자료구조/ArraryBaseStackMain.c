#include<stdio.h>
#include "ArrBaseStack.h"

int main(void) {
	//stack의 생성 및 초기화

	Stack stack;
	StackInit(&stack);

	SPush(&stack, 1); SPush(&stack, 2);
	SPush(&stack, 3);  SPush(&stack, 4);  SPush(&stack, 5);

	while (!SIsEmpty(&stack))
		printf("%d", SPop(&stack));

	return 0;
}
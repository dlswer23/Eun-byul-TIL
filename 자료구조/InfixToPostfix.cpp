#include<stdio.h>
#include<string.h>
#include<stdilb>
#include"InfixToPost.h"
#include "LinkListstack.h"

int Pre_Op(Ndata ch) {
	switch (ch){
	case '*':case '/':
		return 5;
	case '+':case '-':
		return 3;
	case '(':
		return 1;

	default:
		return -1;

	}
}

void InfixToPstfix(Ndata* inExp, Ndata* postExp) {
	Stack* stack = StackInit();
	Node* Head = stack->Head->Next;

	int a = 0, b = 0;
	Ndata ch;

	while (ch = inExp[a++]) {
		if (ch == NULL) break;
		switch (ch)
	case'(':
		SPush(stack, ch);
		break;
	case')':
		while (1)
		{
			ch = sPop(stack);
			if (ch == '(') break;
			postExp[b++] = ch;
		}
		break;
	case '+': case '-':case '*': case '/':
		while (!SEmpty(stack) && Pre_Op(ch) <= Pre_Op(SPeek(stack)))
			postExp[b++] = Spop(stack);
		SPush(stack, ch);
		break;
	default:PostExp[b++] = ch;
	}
}
while(!SEmpty(stack)){
	PostExp[b++] = SPop(stack);
	}
}
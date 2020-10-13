#ifndef _LINK_LIST_STACK_H_
#define _LINK_LIST_STACK_H_

typedef char Ndata;

typedef struct _node {
	Ndata Data;
	struct _node* Next;
}Node;

typedef ListStackStack;

Stack* StackInit(void);
void SPush(Stack*, Ndata);
Ndata SPop(Stack*);
Ndata SPeek(Stack*);
int SEmpty(Stack*);

#endif
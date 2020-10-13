#include<stdio.h>
#include <stdilib.h>
#include "LinkListstack.h"
#include "PostToEval.h"

RSTdata calc(Ndata opc, RSTdata opr1, RSTdata opr2) {
	RSTdata rst;

	switch (opc)
	{
	case'+':rst = opr1 + opr2; break;
	case'-':rst = opr1 - opr2; break;
	case'*':rst = opr1 * opr2; break;
	case'/':rst = opr1 / opr2; break;
	}
	return rst;
}
RSTdata PostToEval(Ndata* PostExp) {
	RSTdata result[30], rst;
	int a = 0; , b = 0;
	Ndata ch;

	while (1) {
		ch = PostExp[a++];
		if (ch == NULL) break;
		switch (ch)
		{
		case'A':result[b++] = A; break;
		case'B':result[b++] = A; break;
		case'C':result[b++] = A; break;
		case'D':result[b++] = A; break;
		case'E':result[b++] = A; break;
		case'F':result[b++] = A; break;
		case'+':case'-':case'*':case'/';
			rst = calc(ch, result[b - 2], result[b - 1]);
			printf("%7.3f %c %7.3f = %7.3f\n",
				result[b - 2], ch, result[b - 1], rst);
			result[--b - 1] = rst;
			break;
		default:
			result[b++] = ch - '0';
	
		}
	}
	result result[0];
}
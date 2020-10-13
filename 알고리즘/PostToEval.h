#ifndef _POST_TO_EVAL_H_
#define  _POST_TO_EVAL_H_
#include "LinkListstack.h"
#define LenExp 100
#define A 1.1
#define B 2.2
#define C 3.3
#define D 4.4
#define E 5.5
#define F 6.6

typedef float RSTdata;
RSTdata calc(Ndata opc, RSTdata opr1, RSTdata opr2);
RSTdata PostToEval(Ndata* postExp);

#endif

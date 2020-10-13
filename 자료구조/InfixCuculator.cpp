#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "LinkListack.h"
 #include"LinkListStack.cpp"
#include "InfixToPostfix.h"
#include "InfixToPostfix.cpp"
#include "PostToEval.h"
#include "PostToEval.cpp"

int main(void) {
    Stack* stack = StackInit();

    Ndata InExp[LenExp] = "((A+B)*C-D)/E";
    int Len_Max = strlen(InExp);

    Ndata* PostExp = (char*)malloc(Len_Max);
    RSTdata rst;

    memset(PostExp, 0, Len_Max);

    printf("Infix : %s \n", InExp);

    infixToPostfix(inExp, PostExp);

    printf("Postfix : %s \n"PostExp);

    rst = PostToEval(PostExp);
    printf("연산결과=%7.3f \n", rst);

}


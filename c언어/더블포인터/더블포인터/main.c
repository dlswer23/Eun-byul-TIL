
//  main.c
//  더블포인터
//
//  Created by 이은별 on 2021/01/27.
//

#include <stdio.h>

/*int main(void) {
    int number = -7;
    int *ptrNumber;
    int ** dptrNumber;
    
    ptrNumber = &number;
    dptrNumber = &ptrNumber;
    
    printf("number 의 주소 : %p \n", &number);
    printf("ptrNumber 의 주소 : %p \n", &ptrNumber);
    printf("\n");
    
    printf("ptrNumber의 값 : %p \n", ptrNumber );
    printf("dptr의 값 : %p \n", dptrNumber);
    printf("\n");
    
    printf("ptrNumber : %p \n", &ptrNumber);
    printf("dptrNumber : %p \n", dptrNumber);
    printf("**dptrNumber : %p \n", **dprintf);
    
    return 0;*/

int main(void){
    
    int number1 = 10, number2 = 20,number3 = 30;
    
    int *ptrArray[3];
    
    ptrArray[0] = &number1;
    ptrArray[1] = &number2;
    ptrArray[2] = &number3;
        
    printf("%d \n",**ptr);
    
    int **dptr = ptrArray;
    
    printf("%d \n", *dptr[0]);
    printf("%d \n", *dptr[1]);
    printf("%d \n", *dptr[2]);
    
    return 0;
    
    
}

//
//  main.c
//  second
//
//  Created by 이은별 on 2021/01/20.
//

#include <stdio.h>


int main(void){
    
    int number1= 12;
    int number2 = 15;

    int* ptrNumber1= &number1;
    int* ptrNumber2= &number2;
    
    printf("%d + %d = %d \n", number1,number2,number1+number2);
    
    
    printf("%d + %d = %d \n",*ptrNumber1,*ptrNumber2,*ptrNumber1+*ptrNumber2);
    
    //주소를 참조한 값의 변경
    
    *ptrNumber1 = 20;
    *ptrNumber2 = 30;
    
    printf("%d + %d = %d\n", number1,number2,number1+number2);
    
    return 0;
    
    
    
    
}

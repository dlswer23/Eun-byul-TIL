//
//  main.c
//  포인터 증감 연산
//
//  Created by 이은별 on 2021/01/22.
//

#include <stdio.h>

int main(void){
    int arrayNumber[3]={10,20,30};
    
    printf("첫번째 원소의 값 : %d \n", arrayNumber[0]);
    printf("두번째 원소의 주소 : %d \n", arrayNumber[1]);
    printf("세번째 원소의 주소 값: %d \n", arrayNumber[2]);
    

    printf("\n");
    
    int *p1 = arrayNumber;
    
    printf("첫번째 원소의 값 : %d \n",*p1);
    printf("두번째 원소의 값 : %d \n",*(p1+1));
    printf("세번째 원소의 값: %d \n",*(p1+2));
    
    
   
}

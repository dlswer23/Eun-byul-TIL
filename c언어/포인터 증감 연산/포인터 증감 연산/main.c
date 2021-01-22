//
//  main.c
//  포인터 증감 연산
//
//  Created by 이은별 on 2021/01/22.
//

#include <stdio.h>

int main(void){
    int arrayNumber[3]={10,20,30};
    
    int i;
    
    for( i=0;i<3;i++){
        printf("%d \n", *(arrayNumber+i));
        //arrayNumber[i] == *arrayNumber
        
    }
    
    return 0;
    
    
    /*printf("첫번째 원소의 값 : %d \n", arrayNumber[0]);
    printf("두번째 원소의 주소 : %d \n", arrayNumber[1]);
    printf("세번째 원소의 주소 값: %d \n", arrayNumber[2]);
    

    printf("\n");
    
    int *p1 = arrayNumber;
    
    printf("첫번째 원소의 값 : %d \n",*p1);
    printf("두번째 원소의 값 : %d \n",*(p1+1));
    printf("세번째 원소의 값: %d \n",*(p1+2));
    
    
    
    
    printf("--------------------\n");
    
    int an[3] ={10,20,30};
    
    
    printf("1 : %d\n", an[0]);
    printf("2 : %d\n", an[1]);
    printf("3 : %d\n", an[2]);
    
    printf("\n");
    
    
    
    int* ptran = an;
    
    printf("1: %d\n",*ptran);
    printf("2: %d\n",*(ptran+3));
    printf("3: %d\n",*(ptran+2));
    

    char* str1 = NULL;
    str1 = "suhyun"; //문자열 값을 한번에 초기화 시켜줄 수 있다.
    
    char str2[100]="";
    str2[0] = 's'; //scanf를 통해서 정상적으로 값을 입력 받을 수 있다.*/
    
    
    
   
}

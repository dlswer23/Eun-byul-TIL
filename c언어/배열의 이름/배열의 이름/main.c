//
//  main.c
//  배열의 이름
//
//  Created by 이은별 on 2021/01/20.
//

#include <stdio.h>


int main(void){
    
    int arrayNumber[3]={10,20,30};
    *arrayNumber = 50;
    
    printf("배열의 이름 : %p \n", arrayNumber);
    printf("첫번째 원소의 주소 값 : %p \n", &arrayNumber[0]);
    printf("두번째 원소의 주소 값 : %p \n", &arrayNumber[1]);
    printf("세번째 원소의 주소 값 : %p \n", &arrayNumber[2]);
    
    printf("%d \n", *arrayNumber);
    
    return 0;
    
    /*결과값은
    첫번째 원소의 주소 값 : 0x7ffeefbff37c
    두번째 원소의 주소 값 : 0x7ffeefbff380
    세번째 원소의 주소 값 : 0x7ffeefbff384*/
    
}

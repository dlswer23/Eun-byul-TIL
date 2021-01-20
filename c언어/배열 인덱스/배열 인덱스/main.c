//
//  main.c
//  배열 인덱스
//
//  Created by 이은별 on 2021/01/20.
//

#include <stdio.h>

int main(){
    int arrayNumber[3]= {10,20,30};
    
    int *ptrInt = arrayNumber;
    
    printf("%d %d \n", ptrInt[0], arrayNumber[0]);
    printf("%d %d \n", ptrInt[1], arrayNumber[1]);
    printf("%d %d \n", ptrInt[2], arrayNumber[2]);
    
    printf("%d %d \n", *ptrInt,*arrayNumber);
    
    return 0;
}

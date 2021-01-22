//
//  main.c
//  배열의 원소
//
//  Created by 이은별 on 2021/01/22.
//

#include <stdio.h>


void showArrayElements(int *ptrarrary,int arraysize){
    printf("배열의 원소 모두 출력 --\n");
    int i;
    
    for(i=0;i<arraysize;i++){
        printf("[%d] = %d \n",i,ptrarrary[i]);
        
    }





int main(void)
{
    int arrayNumber1[]={10,20,30};
    int arrayNumber2[]={1,2,3,4,5};
    
    showArrayElements(arrayNumber1,sizeof(arrayNumber1) / sizeof(int));
    showArrayElements(arrayNumber2,sizeof(arrayNumber1) / sizeof(int));
                      
   return 0;
}

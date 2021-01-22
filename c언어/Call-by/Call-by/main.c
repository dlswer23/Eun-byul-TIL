//
//  main.c
//  Call-by
//
//  Created by 이은별 on 2021/01/22.
//


#include <stdio.h>

//실제 문제 길이를 알려주는 함수를 구현
int getLength(char*str){
    
    int len=0;
    int i=0;
    
    while(str[i] !=  '\0'){
        len++;
        i++;
    }
    return len;
}


int main(int argc,const char*argv[]){
    
    char str1[10]="hello";
    char str2[20]="Beauty of Sunday";
    
    
    
    printf("str length : %d\n",getLength(str1));
    printf("str length : %d\n",getLength(str2));
    
 
    
    return 0;
}

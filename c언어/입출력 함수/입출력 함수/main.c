//
//  main.c
//  입출력 함수
//
//  Created by 이은별 on 2021/01/25.
//

#include <stdio.h>

int main(void){
    char ch;
    
    printf("ABC 입력 후 엔터 : ");
    ch = getchar();
    
    putchar(ch);
    
    ch=getchar();
    putchar(ch);
    
    ch=getchar();
    putchar(ch);
    
    ch=getchar();
    putchar(ch);
    
    printf("z를 입력 후 엔터: ");
    ch = getchar();
    putchar(ch);
    
}

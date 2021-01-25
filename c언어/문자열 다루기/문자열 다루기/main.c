//
//  main.c
//  문자열 다루기
//
//  Created by 이은별 on 2021/01/25.
//

#include <stdio.h>


int getLenght(char *str){
    int len=0, i=0;
    
    while (str[i] != '\0') {
        
        len++;
        i++;
    }
    return len;

}

void strcat(char str1[],char str2[]){
    
    int k = getLenght(str1);
    int l = getLenght(str2);
    int i=0;
    
    for(i=0;i<l;i++){
        str1[k] = str2[i];
        k++;
    }
    /*
    while(str2[i] != '\0' ){
        str1[k++] = str2[i++];
    }*/
}





int main(int argc,cosnt char *argv[]){
    char str[10] = "This is ";
    char str2[20] = "Beauty of beauty";
    
    printf("str lenght: %lu \n",strlen(str1));
    printf("str lenght: %lu \n",strlen(str2));
    
    char vCopy[30]="hello";
    strcpy("Copy Result: %s \n",vCopy);
    
    strcat(vCopy,str2);
    printf("Sum Result: %s \n", vCopy);
    
    printf("eqauls 1: %d \n",strcmp("a","a"));
    //동일하므로 0
    printf("eqauls 2: %d \n",strcmp("b","a"));
    //왼쪽의 ASCII가 더 크기 때문에 양수 출력
    printf("eqauls 3: %d \n",strcmp("a","b"));
    //오른쪽의 ASCII가 더 크기 때문에 음수 출력
    
    
}

//
//  main.c
//  문자열 합치기
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


void SumString(char str1[],char str2[]){
    
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


int main(int argc, const char * argv[]){
    char str1[20]= "hi";
    char str2[10]=" hello";

    
    SumString(str1,str2);
    
    printf("%s \n",str1);
    
    return 0;
}

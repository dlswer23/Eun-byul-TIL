#include<stdio.h>

int main(){
     char c[] = {'A','P','P','L','E'};

     printCharArray(c,sizeof(c));

     replaceSpace(c,sizeof(c));
      printCharArray(c,sizeof(c));

      return 0;

}
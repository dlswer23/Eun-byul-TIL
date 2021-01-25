//
//  main.c
//  다차원배열
//
//  Created by 이은별 on 2021/01/25.
//

#include <stdio.h>

int main(void){
    int arrayDorm[4][2];
    int totalFloor =0;
    
    int i,j;
    
    for(i=0;i<4;i++){
        for(j=0;i<2;j++){
            printf("%d층 %d호 학생수", i+1,j+1);
            scanf("%d", &arrayDorm[i][j];
        }
    }
                  
    //층별 학생수 출력
                  
    for(i=0;i<4;i++){
        
                totalFloor =0;
    
                for(j=0;i<2;j++){
                    
                    totalFloor += arrayDorm[i][j];
                }
                printf("%d층의 학생 수 : %d \n",i+1, totalFloor);
                
            }
                  return 0;
}

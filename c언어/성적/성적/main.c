//
//  main.c
//  성적
//
//  Created by 이은별 on 2021/01/25.
//

#include <stdio.h>

int main(void){
    int arrGrade[3][4];

    int num=0;
    
    
    for(int i=0;i<3;i++ ){
        
        printf("==%d번째 학생 정보 입력\n",i+1);
    
        
        printf("학번 : ");
        scanf("%d",&arrGrade[i][0]);
        
        printf("수학 점수: ");
        scanf("%d",&arrGrade[i][1]);
        
        printf("물리 점수: ");
        scanf("%d", &arrGrade[i][2]);
        
        printf("프로그래밍 점수: ");
        scanf("%d", &arrGrade[i][3]);
        
    }
    
    printf("학번\t\수학\t물리\t프로그래밍\t\n");
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
        
            printf("%d\t", arrGrade[i][j]);
        }
        printf("\n");
    }
    return 0;
}

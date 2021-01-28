//
//  main.c
//  typedef
//
//  Created by 이은별 on 2021/01/27.
//

#include <stdio.h>
#include <string.h>

/*typedef struct Student{
    char studentName[15];
    int studentNumber;
} StudentInformation;

int main(void){
    StudentInformation arraystudent[2];
    
    char inputName[15];
    int inputNumber;
    
    int i;
    
    for(i=0;i<2;i++){
        printf("성명 입력 : ");
        scanf("%s",inputName);
        
        printf("힉반 입력 : ");
        scanf("%d", &inputNumber);
        
        while (getchar() != '\p') {}
        
        strcpy(arraystudent[i].studentName, inputName);
        arraystudent[i].studentNumber = inputNumber;
            
        
        }
    printf("\n\n");
    
    for(i=0;i<2;i++){
        printf("성명 : %s 학번 : %s \n", arraystudent[i].studentNumber,arraystudent[i].studentNumber);
    }
    return 0;
}
*/

/*typedef enum{SUN,MON,TUE,WED,THU,FRI,SAT}WEEK;


int main(int argc,const char* argv[]){
    
    WEEK today;
   
    printf("오늘의 요일 : \n");
    scanf("%d",&today);
    
    if(today == WED) puts("수요일 입니다,");
    else puts("수요일이 아닙니다.");
    return 0;
}*/

typedef enum{
    Math, Phys, Pro,SubLen
}SUBNAME;

typedef struct {
    char name[15];
    int score[SubLen];
    int total;
    
}Student;


int main(int argc, const char *argv[]){
     
    Student s[3];
    for(int i=0;i<3;i++){
        printf("\n%d Student\n", (i+1));
        printf("name: ");
        scanf("%s",s[i].name);
        printf("math : ");
        scanf("%d",s[i].score[Math]);
        printf("phys : ");
        scanf("%d",s[i].score[Phys]);
        printf("Pro : ");
        scanf("%d",s[i].score[Pro]);
        s[i].total = s[i].score[Math]+s[i].score[Phys]+s[i].score[Pro];
        
    }
    for(int i=0;i<3;i++){
        printf("\n%d's Student \n",(i+1));
        printf("Sum: %d \n",s[i].total);
    }
    return 0;
    
}

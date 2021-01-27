//
//  main.c
//  구조체
//
//  Created by 이은별 on 2021/01/27.
//

#include <stdio.h>



struct Position20{
    double positionX;
    double positionY;
};


int main(void){
    struct Position20 point1 = {1,2};
    struct Position20 point2 ={100,200};
    
    struct Position20* ptrPoint = &point1;
    
    (*ptrPoint).positionX = 4;
    (*ptrPoint).positionY = 5;
    printf("[%d %d] \n", ptrPoint->positionX, ptrPoint->positionY);
    
    ptrPoint = &point2;
    ptrPoint->positionX = 105;
    ptrPoint->positionY = 210;
    printf("[%d %d] \n", ptrPoint->positionX,ptrPoint->positionY);
    
    return 0;
}


/*int main(void){
    struct Position20 poinTri[3];
    
    int i;
    
    for(i=0;i<3;i++){
        printf("정의 x좌표와 y좌표 입력: ");
        scanf("%d %d", &poinTri[i].positionX, &poinTri[i].positionY);
    }
    
    for(i =0;i<3;i++){
    printf(("%d %d)",poinTri[i].positionX,&poinTri[i].positionY);
        
    }
               printf("\n");
        
               return 0;


int main(void){
    
    struct Position20 point1;
    point1.positionX = 60;
    point1.positionY = 30;
    
    struct Position20 point2;
    point2.positionX = 30;
    point2.positionY = 15;
    
    struct Position20 pointcenter;
    pointcenter.positionX =(point1.positionX+ point2.positionY) /2.0;
    pointcenter.positionX = (point1.positionY+ point2.positionX) /2.0;
    
    printf("p1의 좌표 (%.2f)\n", point1.positionX+ point1.positionY);
    printf("p2의 좌표 (%.2f)\n", point2.positionX+ point2.positionY);
    printf("p1 과 p2의 중점 (%.2f, %.2f)\n", pointcenter.positionX, pointcenter.positionY);
    
    return 0;
    
struct P2 getCenter()
{
    struct P2 center;
    center.x = 2.0;
    center.y = 3.0;
    return center;
};

int main(int argc, const char *argv[]){
    struct P2 pointCenter = getCenter();
    printf("%f \n",pointCenter);
    return 0;*/
    
    

    


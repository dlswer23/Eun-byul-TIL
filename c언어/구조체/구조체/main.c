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
    
    
    
 
    
    
}

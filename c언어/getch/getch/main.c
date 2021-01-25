//
//  main.c
//  getch
//
//  Created by 이은별 on 2021/01/25.
//

#include <stdio.h>
#include<termios.h>
#include<unistd.h>
#include<string.h>

int _getch(void){
    
    struct termios oldt, newt;
    int ch;
    tcgetattr( STDIN_FILENO, &oldt);
    newt=oldt;
    newt.c_lflag &= ~( ICANON |  ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newt );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt);
    return ch;
    
}

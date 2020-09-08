#include<iostream>
 

//반환형식 호출규약 함수 이름(매게뱐수,초기화);
int Test(int b, int a = 1, int = 0) {
    return a*10;
}

int main() {
    Test(10);
    std::cout << Test(20) << std::endl;
}
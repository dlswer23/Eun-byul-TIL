#include<iostream>
 

//��ȯ���� ȣ��Ծ� �Լ� �̸�(�ŰԹ���,�ʱ�ȭ);
int Test(int b, int a = 1, int = 0) {
    return a*10;
}

int main() {
    Test(10);
    std::cout << Test(20) << std::endl;
}
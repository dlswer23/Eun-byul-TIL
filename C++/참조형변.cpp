#include<iostream>

// 참조형변수
// 형식 & 이름 ;l-value 
//	형식 & 이름 ;r-value //임시객체(연산중의)
int main() {
	int a(10);
	int b(20);
	int& pa(a); //l-value 참조
	std::cout << a << " " << pa << std::endl;
	pa = b;
	a = 10;
	a = b;
	/*int a(10);
	int* pa(&a);

	pa = &a;

	return 0;*/
}
#include<iostream>

// ����������
// ���� & �̸� ;l-value 
//	���� & �̸� ;r-value //�ӽð�ü(��������)
int main() {
	int a(10);
	int b(20);
	int& pa(a); //l-value ����
	std::cout << a << " " << pa << std::endl;
	pa = b;
	a = 10;
	a = b;
	/*int a(10);
	int* pa(&a);

	pa = &a;

	return 0;*/
}
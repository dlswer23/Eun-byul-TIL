#include<iostream>

int main() {
	int a;
	int num = 0;
	std::cout << "�����Է�\n";
	std::cin >> a;
	std::cout << "%d�� ���\n";
	for (int i = 1; i < 10; i++) {
		
		std::cout << a << '*' << i << "=" << a * i << "\n";
	}
}
#include<iostream>

int main() {
	int a;
	int num = 0;
	std::cout << "숫자입력\n";
	std::cin >> a;
	std::cout << "%d단 출력\n";
	for (int i = 1; i < 10; i++) {
		
		std::cout << a << '*' << i << "=" << a * i << "\n";
	}
}
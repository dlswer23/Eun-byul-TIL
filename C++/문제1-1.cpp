#include<iostream>

int main() {

	int a;
	int hap = 0;
	for (int i = 1; i < 6; i++) {
		std::cin >> a;
		std::cout << i<< " 번째 정수입력\n:" << a;
		hap =hap + a;
	}
	std::cout << "합계: " << hap;
}
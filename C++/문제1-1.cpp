#include<iostream>

int main() {

	int a;
	int hap = 0;
	for (int i = 1; i < 6; i++) {
		std::cin >> a;
		std::cout << i<< " ��° �����Է�\n:" << a;
		hap =hap + a;
	}
	std::cout << "�հ�: " << hap;
}
#include<iostream>

int main() {
	int a;
	int num;
	for (int i = 0; ; i++) {
		std::cout << "�Ǹ� �ݾ��� ���������� �Է�(-1 to end) :  " << "\n";
		std::cin >> a;
		std::cout << "�̹� �� �޿� :" << 50+a* 0.12 << "\n";
		 
		if (a == -1)
			std::cout << "���α׷��� �����մϴ�";
			break;

	}
}
#include<iostream>

int main() {
	int a;
	int num;
	for (int i = 0; ; i++) {
		std::cout << "판매 금액을 만원단위로 입력(-1 to end) :  " << "\n";
		std::cin >> a;
		std::cout << "이번 달 급여 :" << 50+a* 0.12 << "\n";
		 
		if (a == -1)
			std::cout << "프로그램을 종료합니다";
			break;

	}
}
#include<iostream>
#include<string>

int main() {

	int age;
	std::string strJob;
	std::string strName;

	std::cout << "나이를 입력하세요 : \t";
	std::cin >> age;
	std::cout << age;

	printf("\n");

	std::cout << "직업를 입력하세요 : \t";
	std::cin >> strJob;
	std::cout << strJob;

	printf("\n");

	std::cout << "이름를 입력하세요 : \t";
	std::cin >> strName;
	std::cout << strName;

	printf("\n");

	std::cout <<"당신의 이름은 "<<strName<<"이며, " <<"당신의 나이는 "<< age<<"이며, "<< "당신의 직업은 "<<strJob << "입니다";
}
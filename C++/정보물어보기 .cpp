#include<iostream>
#include<string>

int main() {

	int age;
	std::string strJob;
	std::string strName;

	std::cout << "���̸� �Է��ϼ��� : \t";
	std::cin >> age;
	std::cout << age;

	printf("\n");

	std::cout << "������ �Է��ϼ��� : \t";
	std::cin >> strJob;
	std::cout << strJob;

	printf("\n");

	std::cout << "�̸��� �Է��ϼ��� : \t";
	std::cin >> strName;
	std::cout << strName;

	printf("\n");

	std::cout <<"����� �̸��� "<<strName<<"�̸�, " <<"����� ���̴� "<< age<<"�̸�, "<< "����� ������ "<<strJob << "�Դϴ�";
}
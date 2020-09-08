#include<iostream>
#define ADD(a,b) ((a)+(b))
int Add(int a, int b)
{
	return a = b;

}
inline int AddNew(int a, int b) {
	return a + b;
}
int main() {
	int a, b;
	std::cin >> a >> b;

	std::cout << "ADD() : " << ADD(a, b) << std::endl;
	std::cout << "Add() : " << ADD(a, b) << std::endl;
	std::cout << "AddNew() : " << AddNew(a, b) << std::endl;

	return 0;
}
#include<iostream>
int TestFunc(int nParam, int nParam2 = 2)
{
	return nParam * nParam2;

}

int main() {
	std::cout << TestFunc(10) << std::endl;
	
	std::cout << TestFunc(10,5) << std::endl;

	return 0;
}
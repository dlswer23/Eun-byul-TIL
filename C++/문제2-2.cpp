#include<iostream>
using namespace std;

int main() {

	const int num=12;
	std::cout << "num :" <<  num << endl;
	const int *pNum= &num;
	std::cout << "*pNum :" << *pNum << endl;
	const int *&refpNum = pNum;
	std::cout << "*refpNum :" << *refpNum;

}
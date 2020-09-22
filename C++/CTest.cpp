#include<iostream>

class CRefTest
{
private:
	int& m_nData;
public:

	CRefTest(int& rParam) :m_nData(rParam)
	{
		std::cout << "CRefTest ::CRefTest(int&rParas) " << m_nData << std::endl;
	}
};

int main() {
	int a(10);
	CRefTest t(a);
	a = 20;

}
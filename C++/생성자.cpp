#include<iostream>

using namespace std;
class CTest {
	int m_nData; //private

public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}
	CTest(int n)
	{
		m_nData = n;
		cout << "CTest(int n)������" << endl; 
	}
	~CTest() {
		cout << "CTest::~Ctest()" << endl;
	}
};
	
	int main() {

		cout << "main() ����" << endl;

		CTest a;// ��ü���� << �ν��Ͻ� ���� << �����ڸ� ȣ��
		cout << "main() ��" << endl;
		return 0;
	}

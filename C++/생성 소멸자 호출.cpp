#include<iostream>

using namespace std;
class CTest {
	int m_nData; //private

public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}
	CTest(int n) // �������� ������~
	{
		m_nData = n;
		cout << "CTest(int n)������" << endl;
	}
	~CTest() { // �Ҹ���
		cout << "CTest::~Ctest()" << endl;
	}
};

int main() {

	cout << "main() ����" << endl;
	int a(10);
	CTest b(a);

	/*CTest a(10);// ��ü���� << �ν��Ͻ� ���� << �����ڸ� ȣ��
	CTest* pa = new CTest[5]{ 1,2,3 };
	delete[] pa;

	ver1.
	
	for (int i = 0; i < 5; i++)
		pa[i] = new CTest(10);

	ver2.

	for (suto& n : pa)
		n = new CTest(10);*
		

	ver3.
	pa[0] = new CTest(10);
	pa[1] = new CTest(10);	
	pa[2] = new CTest(10);	
	pa[3] = new CTest(10);	
	pa[4] = new CTest(10);	
	*/
	cout << "main() ��" << endl;
	return 0;
}

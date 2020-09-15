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
		cout << "CTest(int n)생성자" << endl; 
	}
	~CTest() {
		cout << "CTest::~Ctest()" << endl;
	}
};
	
	int main() {

		cout << "main() 시작" << endl;

		CTest a;// 객체선언 << 인스턴스 생성 << 생성자를 호출
		cout << "main() 끝" << endl;
		return 0;
	}

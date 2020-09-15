#include<iostream>
using namespace std;
// 생성자 : 객체를 생성하는 함수(자동으로)
// 소멸자 : 객체를 소멸할 때 호출되는 함수(자동으로)
// 클래스 이름 = 함수이름
// 반환형식 X , 소멸자 ~ 함수이름


class CMyData {
	int m_nData; //private

public:
	int GetData() {}
	void SetData(int nParam) { m_nData = nParam; }
};

int main (){
	CMyData a; // 객체선언 << 인스턴스 << 생성자 호출
	a.SetData(10);
	cout << a.GetData() << endl;
	return 0;
	}

//접근 제어 지시자 
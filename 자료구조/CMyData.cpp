#include<iostream>
using namespace std;

class CMyData {

public:

	CMyData() : m_nX(0) {
		cout << "CMyData()" << endl;
	}
	CMyData(int nX){
		SetData(nX); CMyData::SetData(nX);
	}
	int GetData() const {
		return m_nX;}
	void SetData(int nX) {
		m_nX = nX; //내가 원하는 값으로 저장하기 위하여 == 사용자의 입력 값으로 직접 저장 
	}

private:
		int m_nX;

};



	class CMyDataEx : public CMyData
	{
	public:

		CMyDataEx() {}
		CMyDataEx(int nX,int nY) {}

		int GetX()
		{
			return CMyData::GetData();
		}
		int  GetY()
		{
			return m_nY;
		}

		void SetData(int nX, int nY) {
			CMyData::SetData(nX);


		}

	private:
		int m_nY;

	};

	int main() {
		CMyDataEx test;
		test.SetData(10, 20);
		cout << test.GetData() << endl;
		cout << test.GetData() << endl;

	}

	//CMyData클래스
	//멤버변수 int 형 m_nX
	//멤버함수 
	//1. 디폴트 생성자 함수 
	//2.매개변수 int nV를 가지는 생성자 함수
	//3. 멤버변수 m_nX값을 반환하는 GetData()함수
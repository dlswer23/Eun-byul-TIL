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
		m_nX = nX;
	}

private:
		int m_nX;

};



	class CMyDataEx : public CMyData {
		CMyDataEx() {
			CMyData::SetData(nX);

			m_nY = nY;
		}
		int GetX();
		{
			return CMyData::GetData();
		}
		int  GetY();
		{
			return m_nY;
		}



		CMyDataEx(int nX, int nY) {
			
		}

	private:
		int m_nY;
	};

	int main() {
		CMyDataEx test;

	}
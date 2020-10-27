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
		m_nX = nX; //���� ���ϴ� ������ �����ϱ� ���Ͽ� == ������� �Է� ������ ���� ���� 
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

	//CMyDataŬ����
	//������� int �� m_nX
	//����Լ� 
	//1. ����Ʈ ������ �Լ� 
	//2.�Ű����� int nV�� ������ ������ �Լ�
	//3. ������� m_nX���� ��ȯ�ϴ� GetData()�Լ�
#include<iostream>
using namespace std;
// ������ : ��ü�� �����ϴ� �Լ�(�ڵ�����)
// �Ҹ��� : ��ü�� �Ҹ��� �� ȣ��Ǵ� �Լ�(�ڵ�����)
// Ŭ���� �̸� = �Լ��̸�
// ��ȯ���� X , �Ҹ��� ~ �Լ��̸�


class CMyData {
	int m_nData; //private

public:
	int GetData() {}
	void SetData(int nParam) { m_nData = nParam; }
};

int main (){
	CMyData a; // ��ü���� << �ν��Ͻ� << ������ ȣ��
	a.SetData(10);
	cout << a.GetData() << endl;
	return 0;
	}

//���� ���� ������ 
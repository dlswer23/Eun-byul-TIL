#include <iostream>
using namespace std;
struct Node
{
	int	data;
	Node* link;
};
class CMyList
{
public:
	CMyList() {}
	~CMyList() {	/*	���	��ü	����(�޸�	����)*/	}
		void	Insert(int	num);	//	���ο�	���	����(�޸�	�Ҵ�)	��	link	����
		void	PrintData();
private:
	Node* pHead = nullptr;
};

void CMyList::Insert(int num) {
	Node* value = new Node;
	value->data = num;
	value->link = pHead;
	pHead = value;
}

void CMyList::PrintData() 
{
	int count=0;
	cout << "����Ʈ������";
	Node* ptr;

	for (ptr = pHead; ptr->link!= nullptr; ptr = ptr->link)
	{
		cout << ptr->data << "-";
		count++;
	}
	cout << ptr->data;
	count++;
	cout << "\t" << count << "��";
	

}

int	main()
{
	CMyList	list;
	list.Insert(20);
	list.Insert(30);
	list.Insert(40);
	list.Insert(10);
	list.PrintData();
	return	0;
};
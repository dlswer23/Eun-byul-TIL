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
	~CMyList() {	/*	노드	전체	삭제(메모리	해제)*/	}
		void	Insert(int	num);	//	새로운	노드	생성(메모리	할당)	및	link	연결
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
	cout << "리스트데이터";
	Node* ptr;

	for (ptr = pHead; ptr->link!= nullptr; ptr = ptr->link)
	{
		cout << ptr->data << "-";
		count++;
	}
	cout << ptr->data;
	count++;
	cout << "\t" << count << "개";
	

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
#pragma once
typedef struct node
{
	int	data;
	struct node* next;
	struct node* prev;
}Node;

class CMyList
{

public:

	static int sert();
	virtual void showMenu();
	CMyList() {}
	~CMyList();
	void Insert();	//	새로운	노드	생성(메모리	할당)	및	link	연결
	void PrintData();
	bool Search(int data);
	Node* getHead() const;
	void setHead(Node* node);
	void setData(Node* node);
	Node* getTail() const;
	void setTail(Node* node);
	int getLength();
	void setLength(int tiny);


private:
	
	 Node* headNode = nullptr;
	 Node* tailNode = nullptr;
	int m_nLength = 0;
};
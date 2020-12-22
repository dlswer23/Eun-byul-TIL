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
	void Insert();	//	���ο�	���	����(�޸�	�Ҵ�)	��	link	����
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
#include <iostream>
#include "CMyList.h"
using namespace std;

int CMyList::sert()
{
	int data;
	cout << "������ �����͸� �Է����ּ��� : ";
	cin >> data;
	while (!cin) {
		cout << "���ڸ� �Է��ϼ���" << endl << endl;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "������ �����͸� �Է����ּ��� : ";
		cin >> data;
	}

	return data;
}


void CMyList::showMenu()
{
	cout << "-------------\n" << "CMyList �޴�\n" << "1 ����\n" << "2 ���\n" << "0 ����\n" << "------------- \n";
}



void CMyList::Insert() {
	Node* value = new Node;
	int data = CMyList::sert();

	if (Search(data)==false) {
		cout << "�ߺ��� ���Դϴ�.\n";
		Insert();
		return;
	}

	value->data = data;
	value->next = NULL;
	value->prev = NULL;

	if (headNode == NULL) {
		headNode = value;
		tailNode = value;
	
	}
	else {
		value->next = headNode;
		headNode->prev = value;
		headNode = value;
	}
	m_nLength++;
	PrintData();
}

bool CMyList::Search(int data) { //�� �Լ��� �ߺ� ó���� ���ִ� �Լ� �ߺ��� ������ true, �ߺ� �Ǹ� false
	Node* value = headNode;
	while (value != NULL)
	{
		if (value->data == data)
			return false;

		value = value->next;
	}
	return true;
}

Node* CMyList::getHead() const
{
	return this->headNode;
}

void CMyList::setData(Node* node)
{
	this->headNode = node;
}

void CMyList::setHead(Node* node) {
	this->headNode = node;
}

Node* CMyList::getTail() const
{
	return this->tailNode;
}

void CMyList::setTail(Node* node)
{
	this->tailNode = node;
}

int CMyList::getLength()
{
	return this->m_nLength;
}

void CMyList::setLength(int tiny)
{
	this->m_nLength = tiny;
}



void CMyList::PrintData()
{
	
	Node* ptr = headNode;
	if (ptr==nullptr)
	{
		cout << "����� �����Ͱ� �����ϴ�." << endl;
		return;
	}

	cout << "CMyList ������ : [Head] ";
	for (int i = 0; i < m_nLength; i++)
	{

		printf("%d ", ptr->data);

		ptr = ptr->next;
	}

	cout << "[Tail]\n";
	cout << "������ ���� : " << m_nLength << "��" << endl;
}

CMyList::~CMyList() {
	Node* delNode;
	for (int i = 0; i < this->m_nLength; i++) {
		delNode = this->headNode;
		this->headNode = this->headNode->next; 
		delete delNode;
	}
}

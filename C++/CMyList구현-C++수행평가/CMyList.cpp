#include <iostream>
#include "CMyList.h"
using namespace std;

int CMyList::sert()
{
	int data;
	cout << "삽입할 데이터를 입력해주세요 : ";
	cin >> data;
	while (!cin) {
		cout << "숫자를 입력하세요" << endl << endl;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "삽입할 데이터를 입력해주세요 : ";
		cin >> data;
	}

	return data;
}


void CMyList::showMenu()
{
	cout << "-------------\n" << "CMyList 메뉴\n" << "1 삽입\n" << "2 출력\n" << "0 종료\n" << "------------- \n";
}



void CMyList::Insert() {
	Node* value = new Node;
	int data = CMyList::sert();

	if (Search(data)==false) {
		cout << "중복된 값입니다.\n";
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

bool CMyList::Search(int data) { //이 함수는 중복 처리를 해주는 함수 중복이 없으면 true, 중복 되면 false
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
		cout << "출력할 데이터가 없습니다." << endl;
		return;
	}

	cout << "CMyList 데이터 : [Head] ";
	for (int i = 0; i < m_nLength; i++)
	{

		printf("%d ", ptr->data);

		ptr = ptr->next;
	}

	cout << "[Tail]\n";
	cout << "데이터 개수 : " << m_nLength << "개" << endl;
}

CMyList::~CMyList() {
	Node* delNode;
	for (int i = 0; i < this->m_nLength; i++) {
		delNode = this->headNode;
		this->headNode = this->headNode->next; 
		delete delNode;
	}
}

#include "CMyListEx.h"
#include <iostream>
using namespace std;

CMyListEx::CMyListEx()
{
	/*CMyList::CMyList();*/
}

CMyListEx::CMyListEx(int sert) 
{
	Node* value = new Node;
	Node* headNode = getHead();
	Node* tailNode = getTail();

	value->data = sert;
	value->next = NULL;
	value->prev = NULL;

	if (headNode == NULL) {
		this->setHead(value);
		this->setTail(value);
	}
	else {
		value->next = headNode;
		headNode->prev = value;
		headNode = value;
	}
	this->setLength(this->getLength() + 1);
}

CMyListEx::~CMyListEx()
{
	
}

void CMyListEx::showMenu()const
{
	cout << "-----------------\n" << "CMyList �޴�\n" << "1 ���� Head\n" << "2 ���� Tail\n" << "3 ���� Head\n" << "4 ���� Tail\n" << "5 ��� Head -> Tail\n" << "6 ��� Tail -> Head\n" << "0 ����\n" << "-----------------\n";
}

void CMyListEx::insert()
{
	CMyList::Insert();
}

void CMyListEx::InsertTail()
{
	int data = sert();
	
	if (Search(data)==false) {
		cout << "�ߺ��Դϴ�." << endl;
		InsertTail();
		return;
	}
	Node* newnode = new Node;
	newnode->data = data;
	newnode->next = nullptr;
	newnode->prev = nullptr;
	if (getHead() != NULL && getTail() != NULL) {
		getTail()->next = newnode;
		newnode->prev = getTail();
	}
	else {
		setHead(newnode);
	}
	int length = getLength();
	length += 1;
	setLength(length);
	setTail(newnode);
	PrintData();
}

void CMyListEx::Delete()
{

	Node* head = getHead();
	int length = getLength();

	if (head == NULL) {
		cout << "������ �����Ͱ� �����ϴ�" << endl << endl;
		return;
	}
	if (head->next) {
		head->next->prev = NULL;
	}
	else {
		setTail(NULL);
		setHead(NULL);
		setLength(0);
		return;
	}
	Node* temp = head;
	head = head->next;
	head->prev = NULL;
	delete temp;
	setHead(head);
	setLength(length - 1);
	PrintData();
}

void CMyListEx::DeleteTail()
{

	Node* tail = getTail();
	int length = getLength();

	if (tail == NULL) {
		cout << "������ �����Ͱ� �����ϴ�" << endl << endl;
		return;
	}
	if (tail->prev) {
		tail->prev->next = NULL;
	}
	else {
		setTail(NULL);
		setHead(NULL);
		setLength(0);
		return;
	}
	Node* temp = tail;
	tail = tail->prev;
	tail->next = NULL;
	delete temp;
	setTail(tail);
	setLength(length - 1);
	PrintData();
}





void CMyListEx::PrintHead()
{
	Node* ptr = getHead();
	if (ptr == NULL)
	{
		cout << "����� �����Ͱ� �����ϴ�." << endl;
		return;
	}

	cout << "CMyList ������ : [Head] ";

	while (ptr != NULL)
	{
		if (ptr->next == NULL)
			cout << ptr->data << "-";
		else
			ptr = ptr->next;

		ptr = ptr->next;
	}

	cout << "[Tail]\n";
	cout << "������ ���� : " << getLength() << "��" << endl;
}

void CMyListEx::PrintTail()
{

	Node* ptr = getTail();

	if (ptr == NULL)
	{
		cout << "����� �����Ͱ� �����ϴ�." << endl;
		return;
	}

	cout << "CMyList ������ : [Tail] ";

	for (int i = 0; i < getLength(); i++)
	{

		printf("%d ", ptr->data);

		ptr = ptr->prev;
	}

	cout << "[Head]\n";
	cout << "������ ���� : " << getLength() << "��" << endl;


}

CMyListEx& CMyListEx::operator+=(int data) {
	Node* value = new Node;
	Node* headNode = getHead();	
	Node* tailNode = getTail();

	if (Search(data) == false) {
		return *this;
	}

	value->data = data;
	value->next = NULL;
	value->prev = NULL;

	if (headNode == NULL) {
		this->setHead(value);
		this->setTail(value);
	}
	else {
		value->next = headNode;
		headNode->prev = value;
		headNode = value;
	}
	cout << this->getLength() << endl;
	this->setLength(this->getLength() + 1);
	cout << this->getLength() << endl;
	return *this;
}
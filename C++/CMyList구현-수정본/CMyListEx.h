#pragma once
#include "CMyList.h"

class CMyListEx : public CMyList
{
public:

	CMyListEx(int sert);
	CMyListEx();
	~CMyListEx();
	void showMenu() const;
	void insert();
	void InsertTail();
	void Delete();
	void DeleteTail();
	void PrintHead();
	void PrintTail();
	CMyListEx& operator+=(int);
};

#include	<iostream>
#include	"CMyList.h"
#include "CMyListEx.h"
using	namespace	std;

int	main()
{
	/*CMyList* myList = new	CMyList;*/
	CMyListEx* myListex = new CMyListEx(1);
	int	num;
	while (1)
	{
		myListex->showMenu();
		cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "	0,	1,	2,	3,	4,	5,	6	��	���ڸ�	�Է��ϼ���~!	:	";
			continue;
		}
		switch (num)
		{
		case	1: myListex->Insert();
			break;
		case	2: myListex->InsertTail();
			break;
		case	3: myListex->Delete();
			break;
		case	4: myListex->DeleteTail();
			break;
		case	5: myListex->PrintData();
			break;
		case	6: myListex->PrintTail();
			break;
		case	0: cout << "	�����մϴ�!\n";
			delete	myListex;
			return	0;
		default:
			cout << "	0,	1,	2,	3,	4,	5,	6	��	���ڸ�	�Է��ϼ���~!	:	";
			continue;
		}
	}
	return	0;

}
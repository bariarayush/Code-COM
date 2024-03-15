#include "pch.h"
#include "CatBaseUnknown.h"
#include<iostream>
using namespace std;

int CatBaseUnknown::_countRef = 0;

CatBaseUnknown::CatBaseUnknown()
{
	cout << "Constructor CatBaseUnknown::CatBaseUnknown()\n";
}

CatBaseUnknown::~CatBaseUnknown()
{
	cout << "Outside CatBaseUnknown::CatBaseUnknown()\n";
}

//void CatBaseUnknown::release()
//{
//	--_countRef;
//	cout << "Reference count : " << _countRef << endl;
//
//	if (_countRef == 0)
//	{
//		delete this;
//		cout << "Deleted....\n";
//	}
//}
//
//void CatBaseUnknown::addRef()
//{
//	++_countRef;
//	cout << "Reference count : " << _countRef << endl;
//}
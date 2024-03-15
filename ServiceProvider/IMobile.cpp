#include "pch.h"
#include "IMobile.h"
#include<iostream>
using namespace std;

IMobile::IMobile()
{
	cout << "Inside IMobile::IMobile()\n";
}

IMobile::~IMobile()
{
	cout << "Outside IMobile::IMobile()\n";
}

//void IMobile::QueryInterface(int choice, IUnknown*& pInput)
void IMobile::QueryInterface(int choice, void** pInput)
{
	choice = 1;
	pInput = NULL;
}

void IMobile::addRef()
{
	++_countRef;
	cout << "Reference count : " << _countRef << endl;
}


void IMobile::release()
{
	--_countRef;
	cout << "Reference count : " << _countRef << endl;

	if (_countRef == 0)
	{
		delete this;
		cout << "Deleted\n";
	}
}
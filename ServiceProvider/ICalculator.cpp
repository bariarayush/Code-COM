#include "pch.h"
#include "ICalculator.h"

#include<iostream>
using namespace std;

ICalculator::ICalculator()
{
	cout << "Inside ICalculator::ICalculator()\n";
}

ICalculator::~ICalculator()
{
	cout << "Outside ICalculator::ICalculator()\n";
	/*release();*/
}


//void ICalculator::QueryInterface(int choice, IUnknown*& piunknown)
 void ICalculator::QueryInterface(int choice, void** piunknown)
{
	choice = 1;
	piunknown = NULL;
}

void ICalculator::addRef()
{
	++_countRef;
	cout << "Reference count : " << _countRef << endl;
}

void ICalculator::release()
{
	--_countRef;
	cout << "Reference count : " << _countRef << endl;

	if (_countRef == 0)
	{
		delete this;
		cout << "Deleted\n";
	}
}
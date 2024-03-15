#include "pch.h"
#include "CMobile.h"
#include"../ServiceProvider/IMobile.h"
#include"TIE_ICalculator.h"
#include<iostream>
using namespace std;


CMobile::CMobile()
{
	_num1 = 10;
	_num2 = 15;
	_rstr = "Recieving Call.....";
	_mstr = "Making Call.......";

	cout << "CMobile Called\n";
	addRef();

}

void CMobile::makeCall()
{
	cout << _mstr << endl;
}

void CMobile::recieveCall()
{
	cout << _rstr << endl;
}

void CMobile::add()
{
	cout << " Addtion of " << _num1 << " + " << _num2 << " = " << _num1 + _num2 << endl;
}

void CMobile::substract()
{
	cout << " Substraction of " << _num1 << " - " << _num2 << " = " << _num1 - _num2<<endl;
}

//void CMobile::QueryInterface(int choice, IUnknown*& piUknown)
void CMobile::QueryInterface(int choice, void** piunknown)
{
	switch (choice)
	{
		case 1:
		{
			*piunknown = (IMobile*)this;
		}
		break;

		case 2:
		{
			if (!pTCalculator) {
				pTCalculator = new TIE_ICalculator(this);
				*piunknown = (IMobile*)pTCalculator;
			}
			else 
				*piunknown = (IMobile*)pTCalculator;
		}
		break;
	}
}


void CMobile::addRef()
{
	++_countRef;
	cout << "Reference count : " << _countRef << endl;
}

void CMobile::release()
{
	--_countRef;
	cout << "Reference count : " << _countRef << endl;
	
	if (_countRef == 0)
	{
		delete this;
		cout << "Deleted....\n";
	}
}

CMobile::~CMobile()
{
	cout << "CMobile Destructor called....\n";
}
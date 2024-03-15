#include "pch.h"
#include "TIE_ICalculator.h"
#include<iostream>
#include"../AirtelService/CMobile.h"
using namespace std;
#include "IMobile.h"


TIE_ICalculator::TIE_ICalculator(CMobile* piMob)
{
	piMobile = piMob;
	_n1 = 30;
	_n2 = 23;

	cout << "Constructor TIE_ICalculator::TIE_ICalculator()\n";
	addRef();

}

void TIE_ICalculator::add()
{
	cout << "Calculator ";
	piMobile->add();
}

void TIE_ICalculator::substract()
{
	cout << "Calculator ";
	piMobile->substract();
}

TIE_ICalculator::~TIE_ICalculator()
{
	cout << "Outside TIE_ICalculator::~TIE_ICalculator()\n";
}

void TIE_ICalculator::addRef()
{
	++_countRef;
	cout << "Reference count : " << _countRef << endl;
}

void TIE_ICalculator::release()
{
	--_countRef;
	cout << "Reference count : " << _countRef << endl;

	if (_countRef == 0)
	{
		delete this;
		cout << "Deleted....\n";
	}
}



void TIE_ICalculator::QueryInterface(int choice, void** piunknown)
{
	//switch (choice)
	//
	//{
	//case 1:   
	//	*piunknown = (TIE_ICalculator*)this;
	//	break;

	//case 2:

	//	if (!piMobile) 
	//	{
	//		piMobile = new CMobile();
	//		*piunknown = piMobile;

	//	}

	//	else
	//		*piunknown = piMobile;
	//	break;
	//}

	if (!piMobile)
	{
		piMobile = new CMobile();
	}

	piMobile->QueryInterface(choice, piunknown);
}


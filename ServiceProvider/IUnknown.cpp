#include "pch.h"
#include "IUnknown.h"
#include<iostream>
using namespace std;

IUnknown::IUnknown()
{
	cout << "constructor IUnknown::IUnknown()\n";
}

IUnknown::~IUnknown()
{
	cout << "Outside IUnknown::IUnknown()\n";
}

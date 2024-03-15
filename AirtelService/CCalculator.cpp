#include "pch.h"
#include "CCalculator.h"
#include"../ServiceProvider/ICalculator.h"
#include<iostream>
using namespace std;

CCalculator::CCalculator()
{
	_n1 = 30;
	_n2 = 23;

	cout << "CCalculator Called\n";

}

void CCalculator::add()
{
	cout << "Calculator: Addtion of " << _n1 << " + " << _n2 << " = " << _n1 + _n2 << endl;;
}

void CCalculator::substract()
{
	cout << "Calculator: Substraction of " << _n1 << " - " << _n2 << " = " << _n1 - _n2;
}



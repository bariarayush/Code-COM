#include "pch.h"
#include "CHelloWorld.h"

#include<iostream>
#include<string>
#include"IHelloWorld.h"
using namespace std;

CHelloWorld::CHelloWorld()
{
	_str = "Hello Airtel";
}

void CHelloWorld::greet()
{
	cout << _str << endl;
}



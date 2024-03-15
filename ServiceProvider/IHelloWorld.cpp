#include "pch.h"
#include "IHelloWorld.h"
#include<iostream>
using namespace std;

IHelloWorld::IHelloWorld()
{}

void IHelloWorld::greet()
{
	cout << str<< endl;
}

void IHelloWorld::message()
{
	cout << str<<" 0" << endl;
}

#pragma once
#ifdef AIRTELSERVICE_EXPORTS
#define EXI _declspec(dllexport)

#else
#define EXI _declspec(dllimport)
#endif

#include"../ServiceProvider/ICalculator.h"
#include"../ServiceProvider/IMobile.h"
#include"TIE_ICalculator.h"
#include<string>
using namespace std;

class EXI CMobile : public IMobile
{
	TIE_ICalculator* pTCalculator;
	int _num1,_num2;
	string _rstr, _mstr;

public:
	 CMobile();
	 ~CMobile();
	 void makeCall();
	 void recieveCall();
	 void add();
	 void substract();
	 //void QueryInterface(int choice, IUnknown*& piUknown);
	 void addRef();
	 void release();
	 void QueryInterface(int choice, void** piunknown);
};


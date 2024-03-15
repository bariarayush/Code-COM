#pragma once
#ifdef AIRTELSERVICE_EXPORTS
#define XIM _declspec(dllexport)

#else
#define XIM _declspec(dllimport)
#endif

#include"../ServiceProvider/ICalculator.h"

class XIM CCalculator:public ICalculator
{
	int _n1, _n2;
public:
	 CCalculator();
	 void add();
	 void substract();
};


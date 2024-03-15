#pragma once
#ifdef AIRTELSERVICE_EXPORTS
#define DEFAULT _declspec(dllexport)

#else
# define DEFAULT _declspec(dllimport)
#endif

#include"ICalculator.h"
class CMobile;

class DEFAULT TIE_ICalculator:public ICalculator
{
	CMobile* piMobile;
	int _n1, _n2;

public:

	TIE_ICalculator(CMobile* piMob);
	~TIE_ICalculator();
	void add();
	void substract();
	void addRef();
	void release();
	void QueryInterface(int choice, void** piunknown);
};


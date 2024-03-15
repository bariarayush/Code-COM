#pragma once
#ifdef SERVICEPROVIDER_EXPORTS
#define EXIM _declspec(dllexport)

#else
# define EXIM _declspec(dllimport)
#endif

#include"../ServiceProvider/CatBaseUnknown.h"

//class EXIM ICalculator : virtual public CatBaseUnknown
class EXIM ICalculator : public CatBaseUnknown
{
public:
	ICalculator();
	~ICalculator();
	virtual void add() = 0;
	virtual void substract() = 0;
	//virtual void QueryInterface(int choice, IUnknown*& piUknown);
	virtual void addRef();
	virtual void release();
	virtual void QueryInterface(int choice, void** piunknown);
};


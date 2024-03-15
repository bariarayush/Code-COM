#pragma once
#ifdef SERVICEPROVIDER_EXPORTS
#define EXIM _declspec(dllexport)

#else
# define EXIM _declspec(dllimport)
#endif

#include"../ServiceProvider/CatBaseUnknown.h"

//class EXIM IMobile: virtual public CatBaseUnknown
class EXIM IMobile :  public CatBaseUnknown
{
public:
	IMobile();
	~IMobile();
	virtual void makeCall() = 0;
	virtual void recieveCall() = 0;
	//virtual void QueryInterface(int choice, IUnknown*& piUknown);
	virtual void addRef();
	virtual void release();
	virtual void QueryInterface(int choice, void** piUknown);
};


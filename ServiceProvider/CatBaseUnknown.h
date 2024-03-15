#pragma once
#ifdef SERVICEPROVIDER_EXPORTS
#define EXIM _declspec(dllexport)

#else
# define EXIM _declspec(dllimport)
#endif

#include"../ServiceProvider/IUnknown.h"

class EXIM CatBaseUnknown : public IUnknown
{
protected:
	static int _countRef;

public:
	CatBaseUnknown();
    ~CatBaseUnknown();
	virtual void addRef() = 0;
	virtual void release() = 0;
};


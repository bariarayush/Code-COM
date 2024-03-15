#pragma once
#ifdef SERVICEPROVIDER_EXPORTS
#define EXIM _declspec(dllexport)

#else
# define EXIM _declspec(dllimport)
#endif


class EXIM IUnknown
{

public:
	IUnknown();
	~IUnknown();
	//virtual void QueryInterface(int choice, IUnknown*& piUknown) = 0;
	virtual void QueryInterface(int choice, void** piunknown) = 0;
};


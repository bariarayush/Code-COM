#pragma once
#ifdef SERVICEPROVIDER_EXPORTS
#define EXIM _declspec(dllexport)

#else
# define EXIM _declspec(dllimport)
#endif

class EXIM IHelloWorld
{
protected:
	char str[18] = "Base";
public:
	IHelloWorld();
	virtual void greet();
	virtual void message();
};


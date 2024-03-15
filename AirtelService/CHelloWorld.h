#pragma once
#ifdef AIRTELSERVICE_EXPORTS
#define EXM _declspec(dllexport)

#else
#define EXM _declspec(dllimport)
#endif 

#include<string>
#include"IHelloWorld.h"
using namespace std;

class EXM CHelloWorld: public IHelloWorld
{
    string _str;

public:
    CHelloWorld();
    void greet();
};






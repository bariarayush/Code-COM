#pragma once
#ifdef AIRTELSERVICE_EXPORTS
#define XM _declspec(dllexport)

#else
#define XM _declspec(dllimport)
#endif

#include"IHelloWorld.h"
#include"CHelloWorld.h"
#include"../ServiceProvider/ICalculator.h"
#include"../ServiceProvider/IMobile.h"
#include"CMobile.h"

class XM CFactory
{
public:
    static IHelloWorld* get_HelloInstance();
    static ICalculator* get_calInstance(int x);
   /* static IMobile* get_mobInstance();*/
    static void* get_Instance(int choice, void** piunknown);
};


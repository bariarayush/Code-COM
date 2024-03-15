
#include "pch.h"
#include "CFactory.h"
#include"CCalculator.h"
#include"IHelloWorld.h"
#include"CHelloWorld.h"

IHelloWorld* CFactory::get_HelloInstance()
{
	return new CHelloWorld();
}


//void* CFactory::get_Instance(int choice, void** piunknown)
//{
//	CMobile* pMobile = new CMobile();
//	switch (choice)
//	{
//	case 1:
//		*piunknown = (IMobile*)pMobile;
//		return piunknown;
//		break;
//
//	case 2:
//		pMobile->QueryInterface(2, piunknown);
//		return piunknown;
//		break;
//	}
//
//
//}



void* CFactory::get_Instance(int choice, void** piunknown)
{
    CMobile* pMobile = new CMobile();
    switch (choice)
    {
    case 1:
        *piunknown = static_cast<IMobile*>(pMobile);
        /*pMobile->release();*/
        return *piunknown;
        break;


    case 2:
        
        pMobile->QueryInterface(2, piunknown);
        /*pMobile->release();*/
        return *piunknown;
        break;

    default:
        return nullptr;
    }
    

}




ICalculator* CFactory::get_calInstance(int x)
{
	switch (x)
	{
	case 1:
		return new CCalculator();
		break;
	case 2:
	{
		IMobile* mptr  = new CMobile();
		return dynamic_cast<ICalculator*>(static_cast<CMobile*>(mptr));
	}
	break;
	}
		
}


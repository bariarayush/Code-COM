#include"IHelloWorld.h"
#include"../ServiceProvider/IMobile.h"
#include"../ServiceProvider/ICalculator.h"
#include"CFactory.h"
//#include"AnotherHelloWorld.h"

int main()
{
    //IHelloWorld* iptr = CFactory::get_HelloInstance();
    //iptr->greet();

  
    IMobile* piMobOnMob = nullptr;
    CFactory::get_Instance(1, (void**)&piMobOnMob);
    piMobOnMob->makeCall();
    piMobOnMob->recieveCall();

    ////******************************************** 1st Method***************************************

    ICalculator* piCalOnMob = NULL;
    piMobOnMob->QueryInterface(2, (void**)&piCalOnMob);
    piCalOnMob->add();
    

    //******************************************** 2nd Method***************************************
    // 
    //ICalculator* piCalOnMob = NULL;
    //piMobOnMob->QueryInterface(2, reinterpret_cast<IUnknown*&>(piCalOnMob));
    //piCalOnMob->add();

    /*piCalOnMob->release();

    piMobOnMob->release();*/


    //ICalculator* piCalOnMob = nullptr;
    //CFactory::get_Instance(2, (void**)&piCalOnMob);
    //piCalOnMob->add();

    //IMobile* piMobOnMob = NULL;
    //piCalOnMob->QueryInterface(2, (void**)&piMobOnMob);
    //piMobOnMob->makeCall();
    //piMobOnMob->recieveCall();


    piMobOnMob->release();
    piCalOnMob->release();

    




    //ICalculator* calptr = CFactory::get_calInstance(2);
    //calptr->add();
    //calptr->substract();

    //pCal->add();
    //pCal->substract();


    //ICalculator* cptr = CFactory::get_calInstance(1);
    //cptr->add();
    //cptr->substract();


    //AnotherHelloWorld* ptr = new AnotherHelloWorld();
    //ptr->greet();

    // AnotherHelloWorld obj;
    //obj.greet();

}


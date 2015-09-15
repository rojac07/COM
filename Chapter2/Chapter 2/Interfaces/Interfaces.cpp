// Interfaces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>
#include "windows.h"

// The interface.
interface ICar
{
    virtual void SpeedUp(long delta) = 0;        
    virtual void CurrentSpeed(long *currSp) = 0;
};

/////////////////////////////////////////

// The basic Car.
class Car : public ICar
{
private:
    long m_currSpeed;
public:
    Car() { m_currSpeed = 0; }    
	virtual ~Car(){}

    // ICar implementation. 
    void SpeedUp(long delta)
    {
		cout << "I am a basic car" << endl;
        m_currSpeed += delta;	
    }         
    void CurrentSpeed(long *currSp)
    {
        *currSp = m_currSpeed;	
    }         
};
/////////////////////////////////////////

// The wicked cool car.
class HotRod: public ICar
{
private:
    long m_currSpeed;
public:
    HotRod() { m_currSpeed = 0; }    
	virtual ~HotRod(){}
    // ICar implementation (massive turbo booster!). 
    void SpeedUp(long delta)
    {
		cout << "I am a hot rod!" << endl;
        m_currSpeed += (delta * 20);	
    }         
    void CurrentSpeed(long *currSp)
    {
        *currSp = m_currSpeed;	
    }         
};
/////////////////////////////////////////

// Not a Car.
class CellPhone
{};

// Prototypes.
void RevEngine(ICar* pCar);

// Take the cars out for a test drive.
int main(int argc, char* argv[])
{
	// An array of ICar interfaces. 
	ICar* theCars[2];
	theCars[0] = new Car();
	theCars[1] = new HotRod(); 

	// Speed up each car 5 times. 
	for (int j = 0; j < 5; j++)
	{
		for(int i = 0; i < 2; i++)
		{
			theCars[i]->SpeedUp(10);
			long currSp =  0;
			theCars[i]->CurrentSpeed(&currSp);
			cout << "  ->Speed: " << currSp << endl;
		}
	}

	// Clean up memory.
	delete[] *theCars;

	// Uncomment to generate error.
	/*
	ICar car;
	car.CurrentSpeed(10);
	*/

	// Better!
	ICar* pAnotherCar = new Car();
	ICar* pAnotherHotRod = new HotRod();

	// Rev the car.
	RevEngine(pAnotherCar);
	RevEngine(pAnotherHotRod);
	delete pAnotherCar;
	delete pAnotherHotRod;

	// Uncomment for error.
	// CellPhone cp;
	// RevEngine(cp);
	return 0;
}

void RevEngine(ICar* pCar)
{
	cout << "Reving a car..." << endl;
	long currSp = 0;

	for(int i = 0; i < 5; i++)
	{
		pCar->SpeedUp(10);
		pCar->CurrentSpeed(&currSp);
		cout << "Speed: " << currSp << endl;
	}
	for(i = 5; i > 0; i--)
	{
		pCar->SpeedUp(-10);
		pCar->CurrentSpeed(&currSp);
		cout << "Speed: " << currSp << endl;
	}
}

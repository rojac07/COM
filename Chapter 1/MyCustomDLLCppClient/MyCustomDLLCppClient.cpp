// MyCustomDLLCppClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include "MyCustomDLL.h"
using namespace std;


int main(int argc, char* argv[])
{
	// A typedef to hold the address of the AddNumbers() method.
	typedef int (*PFNADDNUMBERS) (int, int);
	PFNADDNUMBERS pfnAddMethod;

	// A typedef to hold the address of the DisplayBetterCar() method.
	typedef void (*PFNDISPLAYBETTERCAR) (CAR2*);
	PFNDISPLAYBETTERCAR pfnDisplayBetterCar;

	HINSTANCE dllHandle = NULL;              

	// Load the dll and keep the handle to it
	// Assume this DLL is in the same folder as the 
	// client EXE.
	dllHandle = LoadLibrary("MyCustomDll.dll");

	// If the handle is valid, try to get the function address. 
	if (NULL != dllHandle) 
	{ 
		//Get pointer to our function using GetProcAddress:
		pfnAddMethod = (PFNADDNUMBERS)GetProcAddress(dllHandle,
         "AddNumbers");

		// If the function address is valid, call the function. 
		if (NULL != pfnAddMethod) 
		{      
			int retVal = pfnAddMethod(100, 100);
			cout << "100 + 100 is: " << retVal << endl;
		}

		// Make a car.
		CAR2 myCar;
		myCar.petName = "JoJo";
		myCar.theCar.make = "Viper";
		myCar.theCar.color = "Red";

		pfnDisplayBetterCar = (PFNDISPLAYBETTERCAR)GetProcAddress(dllHandle,
         "DisplayBetterCar");
		
		// If the function address is valid, call the function. 
		if (NULL != pfnDisplayBetterCar) 
		{      
			pfnDisplayBetterCar(&myCar);
		}

		//Free the library:
		FreeLibrary(dllHandle);       
	}
	
	return 0;
}

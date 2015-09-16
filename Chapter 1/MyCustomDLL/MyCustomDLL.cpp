// MyCustomDLL.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "MyCustomDLL.h"

// For CoTaskMemAlloc().
#include <objbase.h>

BOOL APIENTRY DllMain( HANDLE hModule, 
 DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
			MessageBox(NULL, "Dll is loading!", "DllMain() says...", MB_OK);
		break;
		case DLL_PROCESS_DETACH:
			MessageBox(NULL, "Dll is UNloading!", "DllMain() says...", MB_OK);
		break;
    }
    return TRUE;
}

// ***** The exported methods ***** //

// 1) A very simple DLL export.
extern "C" MYCUSTOMDLL_API int AddNumbers(int x, int y)
{
	return x + y;
}

// 2) A method taking an array.
extern "C" MYCUSTOMDLL_API int AddArray(int x[], int size)
{
	int ans = 0;

	for(int i = 0; i < size; i++)
	{
		ans = ans + x[i];
	}

	return ans;
}


// 3) A method taking a struct.
extern "C" MYCUSTOMDLL_API void DisplayBetterCar(CAR2* theCar)
{
	 // Read values of car and put in message box.	
	MessageBox(NULL, theCar->theCar.color, "Car Color", MB_OK);
	MessageBox(NULL, theCar->theCar.make, "Car Make", MB_OK);
	MessageBox(NULL, theCar->petName, "Car Pet Name", MB_OK);
}

// 4) A Method returning an array of structs.
extern "C" MYCUSTOMDLL_API void GiveMeThreeBasicCars(CAR** theCars)
{
	int numbOfCars = 3;
	*theCars = (CAR*)CoTaskMemAlloc( numbOfCars * sizeof( CAR ));

	char* carMakes[3] = {"BMW", "Ford", "Viper"};
	char* carColors[3] = {"Green", "Pink", "Red"};

	CAR* pCurCar = *theCars;
	for( int i = 0; i < numbOfCars; i++, pCurCar++ )
	{
		pCurCar->color = carColors[i];
		pCurCar->make = carMakes[i];
	}
}

// 5) Method to create a CMiniVan.
extern "C" MYCUSTOMDLL_API CMiniVan* CreateMiniVan() 
{
	return new CMiniVan();
}

// 6) Method to destroy a CMiniVan
extern "C" MYCUSTOMDLL_API void DeleteMiniVan(CMiniVan* obj)
{
	delete obj;
}
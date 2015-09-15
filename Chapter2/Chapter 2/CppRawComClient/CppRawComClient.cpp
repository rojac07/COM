// CppRawComClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream.h>

// MIDL generated files from the COM server.
#include "RawComCar_i.c"	// Defines GUIDs.
#include "RawComCar.h"		// Defines interface definitions.

int main(int argc, char* argv[])
{
	// Bootstrap COM.
	CoInitialize(NULL);

	// Just for kicks, let's get IUnknown first.
	IUnknown* pUnk = NULL;
	ICar* pCar = NULL;
	HRESULT hr = E_FAIL;
	IClassFactory* pCF = NULL;

	// Using CoGetClassObject().
	/*
	hr = CoGetClassObject(CLSID_ComCar, CLSCTX_INPROC_SERVER,
				   NULL, IID_IClassFactory, (void**)&pCF);
	hr = pCF->CreateInstance(NULL, IID_ICar, (void**)&pCar); 
    */

	// Using CoCreateInstance().
	hr = CoCreateInstance(CLSID_ComCar, NULL, CLSCTX_INPROC, IID_IUnknown, (void**)&pUnk);
	
	// Now ask for ICar.
	if(SUCCEEDED(hr))
	hr = pUnk->QueryInterface(IID_ICar, (void**)&pCar);

	// Speed up car.
	if(SUCCEEDED(hr))
	{
		for(int i = 0; i < 5; i++)
		{
			long currSp = 0;
			pCar->SpeedUp(10);
			pCar->CurrentSpeed(&currSp);
			cout << "Car Speed: " << currSp << endl;
		}
	}

	// Turn on radio.
	IRadio* pRadio = NULL;
	pCar->QueryInterface(IID_IRadio, (void**)&pRadio);
	pRadio->CrankTunes();

	// Clean up.
	if(pCar != NULL) pCar->Release();	 
	if(pCF!= NULL) pCF->Release();
	if(pUnk!= NULL) pUnk->Release();	 
	if(pRadio!= NULL) pRadio->Release();
	CoUninitialize();	 
	return 0;
}

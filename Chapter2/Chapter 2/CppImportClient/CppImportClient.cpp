// CppImportClient.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream.h>

// Import the type info for the rawcomcar.dll
#import "C:\Apress Books\InteropBook\Labs\Chapter 1\RawComCar\Debug\RawComCar.tlb" \
        no_namespace named_guids

int main(int argc, char* argv[])
{
	CoInitialize(NULL);		

	// Create the ComCar and get ICar..
	ICarPtr spCar(__uuidof(ComCar));	
	spCar->SpeedUp(10);
	cout << "Speed is: " << spCar->CurrentSpeed() << endl;

	// Now turn on the radio.
	IRadioPtr spRadio = spCar;	// Calls QueryInterface().
	spRadio->CrankTunes();

	// Clean up.
	spCar = NULL;
	spRadio = NULL;
	CoUninitialize();

	return 0;
}

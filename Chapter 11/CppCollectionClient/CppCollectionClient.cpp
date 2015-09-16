// CppCollectionClient.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream.h>

// Adjust your paths accordingly...
#import "C:\WINDOWS\Microsoft.NET\Framework\v1.0.3617\mscorlib.tlb" \
no_namespace named_guids

#import "C:\Apress Books\InteropBook\Labs\Chapter 11\DotNetCollection\bin\Debug\DotNetCollection.tlb" \
no_namespace named_guids

int main(int argc, char* argv[])
{
	CoInitialize(NULL);

	// Create collection and get enumerator.
	_CarCollectionPtr pColl(__uuidof(CarCollection));
	IEnumVARIANTPtr pEnum;
	pEnum = pColl->GetEnumerator();
	 
	// Use COM enum.
	VARIANT theCars[3];
	ULONG numberReturned = 0;

	// Ask for three cars.
	pEnum->Next(3, theCars, &numberReturned);
	cout << "You got back " << numberReturned << " cars." << endl;	

	// Print out each car.
	for(ULONG i = 0; i < numberReturned; i++)
	{
		_CarPtr temp = theCars[i].punkVal;
		cout << temp->GetCarState() << endl;
		temp = NULL;
	}

	// Trigger .NET exception and
	// map to COM error object.
	try
	{
		pColl->RemoveCar(888);
	}
	catch(_com_error &e)
	{ 
		cout << "Error from: " << e.Source() <<
		endl << "Message: " << e.Description() << endl;
	}

	pColl = NULL;
	CoUninitialize();
	return 0;
}
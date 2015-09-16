// CppDotNetClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream.h>

// For ATL conversion macros.
#include <atlbase.h>
#include <atlconv.h>

// Adjust your paths accordingly...
#import "C:\WINDOWS\Microsoft.NET\Framework\v1.0.3617\mscorlib.tlb" \
no_namespace named_guids

#import "C:\Apress Books\InteropBook\Labs\Chapter 10\DotNetMathServer\bin\Debug\DotNetMathServer.tlb" \
no_namespace named_guids

int main(int argc, char* argv[])
{
	CoInitialize(NULL);
	USES_CONVERSION;

	IBasicMathPtr pBM(__uuidof(DotNetCalcWithInterface));
	cout << "50 + 50 is: " << pBM->Add(50, 50) << endl;

	// Use _Object interface.
	_ObjectPtr ptrObj = pBM;
	cout << "ToString vlaue: " << W2A(ptrObj->ToString) << endl;
	cout << "Hash vlaue: " << ptrObj->GetHashCode() << endl;

	_TypePtr ptrType = ptrObj->GetType();
	cout << "Base Type of _Object: " << W2A(ptrType->BaseType->FullName) << endl;

	// Clean up.
	pBM = NULL;
	ptrType = NULL;
	ptrObj = NULL;

	CoUninitialize();
	return 0;
}

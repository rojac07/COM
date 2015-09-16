// CustomIDLData.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <atlbase.h>
#include <atlconv.h>
#include <iostream.h>

int main(int argc, char* argv[])
{
	USES_CONVERSION;

	CoInitialize(NULL);
	ITypeLib2* pTLib2 = NULL;
	ITypeInfo2* pTInfo2 = NULL;
	
	// Load the type library.
	LoadTypeLibEx(L"customIDLServer.tlb", REGKIND_NONE, (ITypeLib**)&pTLib2);

	// Read out the custom data from the library.
	CUSTDATA theCustomData;
	pTLib2->GetAllCustData(&theCustomData);
	for(ULONG i = 0; i < theCustomData.cCustData; i++)
	{	
		VARIANT customValue;
		VariantInit(&customValue);
		VariantCopy(&customValue, &theCustomData.prgCustData[i].varValue);

		if(customValue.vt == VT_BSTR)
		{
			// Display custom data.
			CComBSTR customGUID(theCustomData.prgCustData[i].guid);
			cout << "Custom data name is: " << W2A(customGUID) << endl;			
			cout << "Custom data value is: " << W2A(customValue.bstrVal) << endl;
			VariantClear(&customValue);
		}
	}
	cout << endl;

	// Read out the custom data from the types.
	for(UINT j = 0; j < pTLib2->GetTypeInfoCount(); j++)	
	{	
		pTLib2->GetTypeInfo(j, (ITypeInfo**)&pTInfo2);
		pTInfo2->GetAllCustData(&theCustomData);
		
		for(ULONG k = 0; k < theCustomData.cCustData; k++)
		{	
			VARIANT customValue;
			VariantInit(&customValue);
			VariantCopy(&customValue, &theCustomData.prgCustData[k].varValue);

			if(customValue.vt == VT_BSTR)
			{
				// Display custom data.
				CComBSTR customGUID(theCustomData.prgCustData[k].guid);
				cout << "Custom data name is: " << W2A(customGUID) << endl;			
				cout << "Custom data value is: " << W2A(customValue.bstrVal) << endl;
				VariantClear(&customValue);
			}
		}
		pTInfo2->Release();
		cout << endl;
	}
	// Clean up.
	if(pTLib2) pTLib2->Release();
	CoUninitialize();
	return 0;
}

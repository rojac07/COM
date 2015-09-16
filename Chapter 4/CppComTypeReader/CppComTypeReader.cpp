// CppComTypeReader.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <windows.h>

// Include these ATL files to get the string stuff...
#include <atlbase.h>	
#include <atlconv.h>

#include <iostream.h>

// Prototypes for helper functions.
void DumpLibraryStats(ITypeLib* pTypeLib);
void DumpComTypes(ITypeLib* pTypeLib);

int main(int argc, char* argv[])
{
	// ATL helper macro to convert between ANSI and Unicode strings.
	USES_CONVERSION;
	char oneMoreTime; // ('n' or 'y')
	char pathToComServer[100] = {0}; 

	do
	{
		// Get path to COM server.
		cout << "Please enter path to COM server (or *tlb file)";
		ITypeLib* pTypeLib = NULL;
		cin.ignore(0, '\n');
		cin.get(pathToComServer, 100);
	
		// Load type information for a COM server.
		if(SUCCEEDED(LoadTypeLibEx(A2W(pathToComServer), REGKIND_DEFAULT, &pTypeLib)))
		{
			// Read info about the type lib.
			DumpLibraryStats(pTypeLib);

			// Read info about COM types.
			DumpComTypes(pTypeLib);

			// COM clean up.
			pTypeLib->Release();
		}

		// Want another?
		cout << "Do you want to enter another? (y or n)";
		cin >> oneMoreTime;  
	}while (oneMoreTime != 'n');

	return 0;
}


void DumpLibraryStats(ITypeLib* pTypeLib)
{
	pTypeLib->AddRef();
	cout << "\n****** Stats about the Library ******" << endl;
	USES_CONVERSION;
	TLIBATTR* libAttr;
	pTypeLib->GetLibAttr(&libAttr);
	CComBSTR bstrGuid(libAttr->guid);
	cout << "Major: " << libAttr->wMajorVerNum << endl;
	cout << "Minor: " << libAttr->wMinorVerNum << endl;
	cout << "LibID: " << W2A(bstrGuid.Copy()) << endl;
	cout << "Locale ID: " << libAttr->lcid << endl;
	pTypeLib->ReleaseTLibAttr(libAttr);
	pTypeLib->Release();
}

void DumpComTypes(ITypeLib* pTypeLib)
{
	// Dump out the types.
	USES_CONVERSION;
	pTypeLib->AddRef();
	ULONG typeCount = pTypeLib->GetTypeInfoCount();
	cout << "\n****** The COM Types ******" << endl;
	cout << "There are " << typeCount << " in this type lib" << endl << endl;

	for(ULONG typeIndex = 0; typeIndex < typeCount; typeIndex++)
	{
		ITypeInfo* pInfo = NULL;
		TYPEATTR* typeAtt;
		CComBSTR temp;
		ULONG index = 0;
		ULONG numbMembers = 0;

		pTypeLib->GetTypeInfo(typeIndex, &pInfo);
		pInfo->GetTypeAttr(&typeAtt);		

		// Based on the kind of COM type, print out some information. 
		switch(typeAtt->typekind)
		{
		case TKIND_COCLASS:  // type is a coclass.
			cout << "(" << typeIndex << ")" << " Coclass with " << typeAtt->cImplTypes << " interface(s). ******" << endl;
			temp = typeAtt->guid;
			cout << "->CLSID: " << W2A(temp.Copy()) << endl;
			pInfo->GetDocumentation(-1, &temp, NULL, NULL, NULL);
			cout << "->Name: " << W2A(temp.Copy()) << endl;
		break;

		case TKIND_DISPATCH:  // type is a IDispatch derived interface.
			cout << "(" << typeIndex << ")" << " IDispatch based interface with " << typeAtt->cFuncs << " method(s). ******" << endl;
			temp = typeAtt->guid;
			cout << "->IID: " << W2A(temp.Copy()) << endl;	
			pInfo->GetDocumentation(-1, &temp, NULL, NULL, NULL);
			cout << "->Name: " << W2A(temp.Copy()) << endl;
			
			numbMembers = typeAtt->cFuncs;
			for(index = 0; index < numbMembers; index++)
			{
				FUNCDESC* fx;
				pInfo->GetFuncDesc(index, &fx);
				pInfo->GetDocumentation(fx->memid, &temp, NULL, NULL, NULL);
				cout << "  ->" << W2A(temp.Copy()) << " has " << fx->cParams << " params" << endl;
				pInfo->ReleaseFuncDesc(fx);
			}			
		break;

		case TKIND_INTERFACE: // Type is an IUnknown derived interface.
			cout << "(" << typeIndex << ")" << " IUnknown based interface with " << typeAtt->cFuncs << " method(s). ******" << endl;
			temp = typeAtt->guid;
			cout << "->IID: " << W2A(temp.Copy()) << endl;			
			pInfo->GetDocumentation(-1, &temp, NULL, NULL, NULL);
			cout << "->Name: " << W2A(temp.Copy()) << endl;
			
			numbMembers = typeAtt->cFuncs;
			for(index = 0; index < numbMembers; index++)
			{
				FUNCDESC* fx;
				pInfo->GetFuncDesc(index, &fx);
				pInfo->GetDocumentation(fx->memid, &temp, NULL, NULL, NULL);
				cout << "  ->" << W2A(temp.Copy()) << " has " << fx->cParams << " param(s)" << endl;
				pInfo->ReleaseFuncDesc(fx);
			}			
		break;

		case TKIND_ENUM:  // Type is an enum.
			cout << "(" << typeIndex << ")" << " Enum with " << typeAtt->cVars << " member(s). ******" << endl;
			pInfo->GetDocumentation(-1, &temp, NULL, NULL, NULL);
			cout << "->Name: " << W2A(temp.Copy()) << endl;
			
			numbMembers = typeAtt->cVars;
			for(index = 0; index < numbMembers; index++)
			{
				VARDESC* var;
				pInfo->GetVarDesc(index, &var);
				pInfo->GetDocumentation(var->memid, &temp, NULL, NULL, NULL);				 
				cout << "  ->" << W2A(temp.Copy()) << endl;
				pInfo->ReleaseVarDesc(var);
			}
		break;
		
		default:
			cout << "Some other type I don't care about..." << endl;

		}
		cout << endl;
		pInfo->ReleaseTypeAttr(typeAtt);
		pInfo->Release();
	}
	pTypeLib->Release();
}

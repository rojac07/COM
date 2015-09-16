// CppComTypeWriter.cpp : Defines the entry point for the console application.
//
// "oaidl.idl"
/*
	This application illustrates the process of building COM type
	information on the fly (at runtime).  While it is true that most
	COM developers do not need an deep understanding of these low
	level COM interfaces, (unless you are a tool builder) you will
	find an understanding of these items extremely valuable when
	exploring COM <-> .NET interop issues.

	In effect, this program builds the following *.tlb file in
	memory and saves it to disk as "MyTypeLib.tlb".
	(GUIDs will be unique each time you run this application...)

	--------------------------------------------------------------

	[
	  uuid(...some guid...),
	  version(1.0),
	  helpstring("The Hello Library")
	]
	library HelloLibrary
	{
		importlib("stdole32.tlb");

		[
		  odl,
		  uuid(...some guid...),
		  helpstring("Hello Interface"),
		  hidden
		]
		interface IHello : IUnknown 
		{
			[helpstring("This method says hello...")]
			HRESULT _stdcall SayHello();
		};

		[
		  uuid(...some guid...),
		  helpstring("Hello Class")
		]
		coclass Hello {
			[default] interface IHello;
		};
	};

	--------------------------------------------------------------

	Extend and have fun!  AWT.
*/

#include "stdafx.h"
#include <windows.h>
#include <iostream.h>

// Prototypes.
ICreateTypeLib* CreateTypeLibrary();
ITypeInfo* CreateInterface(ICreateTypeLib *pctlib);
void CreateCoClass(ICreateTypeLib* pctlib, ITypeInfo* pCurrType); 

int main(int argc, char* argv[])
{
	CoInitialize(NULL);

	// Local vars.
	ICreateTypeLib *pCTL = NULL;
	ITypeInfo *pCurrType = NULL;

	// Create the type library.
	pCTL = CreateTypeLibrary();
	
	// Create IHello interface.
	pCurrType = CreateInterface(pCTL);
	
	// Now create the coclass.
	CreateCoClass(pCTL, pCurrType);

	// Save the type lib!
	pCTL->SaveAllChanges();

	// COM clean up.
	if(pCTL != NULL ) pCTL->Release();
	if(pCurrType != NULL ) pCurrType->Release();	
	CoUninitialize();
	return 0;
}


// This helper method creates the type library
// and returns the ICreateTypeLibrary interface to
// the caller.
ICreateTypeLib* CreateTypeLibrary()
{

	/* Creates the following library shell:
	[
	  uuid(...some guid....),
	  version(1.0),
	  helpstring("The Hello Library")
	]
	library HelloLibrary
	{
	}
	*/

	cout << "Creating COM type library!" << endl;

	// Variables for the operation.
	ICreateTypeLib *pCTL = NULL;	 
	GUID theGUID;
	CoCreateGuid(&theGUID);

	// Make the type lib file and get the ICreateTypeLib interface.
	CreateTypeLib(SYS_WIN32, L"MyTypeLib.tlb", &pCTL);

	// Set version, name and LIBID.
	pCTL->SetVersion(1, 0);
	pCTL->SetName(L"HelloLibrary");	
	pCTL->SetGuid(theGUID);
	pCTL->SetDocString(L"The Hello Library");
	return pCTL;
}

// This helper method creates the IHello interface
// and the Hello() method.
ITypeInfo* CreateInterface(ICreateTypeLib* pctlib)
{
    /*   
    Generate the typeinfo for the following interface
    
    [
      uuid(...some guid....),        // IID_IHello
      helpstring("Hello Interface"), 
	  odl,
	  hidden
    ]
    interface IHello : IUnknown
    {   [helpstring("This method says hello...")]
		HRESULT SayHello(void);        
    } 
    */ 

	cout << "Creating IHello interface!" << endl;
    ICreateTypeInfo *pctinfo = NULL; 
    HREFTYPE hreftype;  
    ITypeInfo *ptinfoIUnknown = NULL;
    ITypeLib *ptlibStdOle = NULL;
    GUID theGUID;
	FUNCDESC funcdesc;
	CoCreateGuid(&theGUID);

    // Get type info for IUnknown (as it is the base interface
	// of IHello).
    LoadTypeLib(OLESTR("stdole32.tlb"), &ptlibStdOle); 
    ptlibStdOle->GetTypeInfoOfGuid(IID_IUnknown, &ptinfoIUnknown);  
    ptlibStdOle->Release();
    
	// Make the IHello interface.
    pctlib->CreateTypeInfo(OLESTR("IHello"), TKIND_INTERFACE, &pctinfo);
    pctinfo->SetGuid(theGUID);
    pctinfo->SetDocString(OLESTR("Hello Interface"));  
    pctinfo->SetTypeFlags(TYPEFLAG_FHIDDEN);

	// Save typeinfo of IHello for others who may refer to it.  
    ITypeInfo* ptinfoIHello = NULL;
    pctinfo->QueryInterface(IID_ITypeInfo, (void**)&ptinfoIHello);
    
    // Output base interface of IHello (IUnknown)
    pctinfo->AddRefTypeInfo(ptinfoIUnknown, &hreftype);
    pctinfo->AddImplType(0, hreftype);
     
    // Make SayHello() method.
	cout << "Creating IHello.SayHello() method!" << endl;
    OLECHAR* rgszFuncArgNamesSH[1] = {OLESTR("SayHello")};
    funcdesc.memid = 1;
    funcdesc.lprgscode = NULL;    
    funcdesc.lprgelemdescParam = NULL;
    funcdesc.funckind = FUNC_PUREVIRTUAL;    
    funcdesc.invkind = INVOKE_FUNC;
    funcdesc.callconv = CC_STDCALL;
    funcdesc.cParams = 0;
    funcdesc.cParamsOpt = 0;
    funcdesc.oVft = 0;
    funcdesc.cScodes = 0;    
    funcdesc.elemdescFunc.tdesc.vt = VT_HRESULT;
    funcdesc.elemdescFunc.idldesc.dwReserved = NULL;
    funcdesc.elemdescFunc.idldesc.wIDLFlags  = IDLFLAG_NONE;
    funcdesc.wFuncFlags = 0;
    pctinfo->AddFuncDesc(0, &funcdesc);
    pctinfo->SetFuncAndParamNames(0, rgszFuncArgNamesSH, 1);        
	pctinfo->SetFuncDocString(0, OLESTR("This method says hello..."));
	pctinfo->LayOut();
    pctinfo->Release(); 
	
	return ptinfoIHello;
}

// This helper method creates the CoClass
// given an ICreateTypeLibrary interface and
// an ITypeInfo which describes the interface to add.
void CreateCoClass(ICreateTypeLib* pctlib, ITypeInfo* ptinfoIHello)
{
    /*  
    Generate the typeinfo for the following coclass
    
    [
       uuid(...some guid...),     
       helpstring("Hello Class")
    ]                                             
    coclass Hello
    {   
        [default] interface IHello;
    }

   */
	cout << "Creating Hello CoClass!" << endl;

    GUID theGUID; 
	CoCreateGuid(&theGUID);
	ICreateTypeInfo *pctinfo = NULL;
    HREFTYPE hreftype;  

    pctlib->CreateTypeInfo(OLESTR("Hello"), TKIND_COCLASS, &pctinfo);
	pctinfo->SetGuid(theGUID);
	pctinfo->SetTypeFlags(TYPEFLAG_FCANCREATE); 
    pctinfo->SetDocString(OLESTR("Hello Class"));  
    
    // List IHello in the coclass
    pctinfo->AddRefTypeInfo(ptinfoIHello, &hreftype);
    pctinfo->AddImplType(0, hreftype);
	pctinfo->SetImplTypeFlags(0, IMPLTYPEFLAG_FDEFAULT);
    pctinfo->LayOut();
    pctinfo->Release(); 
}

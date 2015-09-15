// RawComCar.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "rawcomcar_i.c"	// MIDL generated file.
#include "comcarcf.h"		 
#include "scriptablecarcf.h" 

// Global server variables.
ULONG g_LockCount = 0;		// Represents the number of locks.
ULONG g_ObjectCount = 0;	// Represents the number of living objects.


// Understand that COM DLLs do not need a DllMain()
// to function correctly.  But, if you are interested,
// go ahead an uncommnet the following and run the 
// VB 6.0 test client...

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved)
{
	// Just for fun...
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
        MessageBox(NULL, "I have been loaded!", "DllMain says:", MB_OK);
    else if (ul_reason_for_call == DLL_PROCESS_DETACH)
        MessageBox(NULL, "I have been Unloaded!", "DllMain says:", MB_OK);
    return TRUE;     
}


// These two we DO have to have!
// If we went the full 9 yards, we
// would also implement DllRegisterServer() and DllUnregisterServer(),
// but we used a *.reg file for simplicity.

/////////////////////////////////////////////////////////////////////////////
// Used to determine whether the DLL can be unloaded by COM.

STDAPI DllCanUnloadNow(void)
{
	// We can unload if we have no objects and no locks.
    if(g_LockCount == 0 && g_ObjectCount == 0)
		return S_OK;
	else
		return E_FAIL;
}

/////////////////////////////////////////////////////////////////////////////
// Returns a class factory to create an object of the requested type.

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	// Which Car do you want?
    if(rclsid == CLSID_ComCar)
	{
		ComCarCF* pCarCF = new ComCarCF();
		return pCarCF->QueryInterface(riid, ppv);
	}
	else if(rclsid == CLSID_ScriptableCar)
	{
		ScriptableCarCF* pCarCF = new ScriptableCarCF();
		return pCarCF->QueryInterface(riid, ppv);
	}
	else
	{		
		return CLASS_E_CLASSNOTAVAILABLE;
	}

}

/////////////////////////////////////////////////////////////////////////////
// DllRegisterServer - Adds entries to the system registry
STDAPI DllRegisterServer(void)
{
    MessageBox(NULL, "If I had code, I would register these types...",
		"DllRegisterServer", MB_OK);
    return S_OK;
}

/////////////////////////////////////////////////////////////////////////////
// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
    MessageBox(NULL, "If I had code, I would UN-register these types...",
		"DllUnregisterServer", MB_OK);
    return S_OK;
}

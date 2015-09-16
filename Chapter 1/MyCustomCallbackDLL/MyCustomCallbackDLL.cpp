// MyCustomCallbackDLL.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "MyCustomCallbackDLL.h"

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved)
{
    return TRUE;
}

// THEPOINT Callback prototype.
typedef bool (CALLBACK *POINTCALLBACKFUNCTION)( THEPOINT* i );

// Simple Callback prototype.
typedef bool (CALLBACK *SIMPLECALLBACKFUNCTION)();

extern "C" MYCUSTOMCALLBACKDLL_API void ChangePOINTAndReportBack(POINTCALLBACKFUNCTION pf, THEPOINT* thePoint)
{
   MessageBox(NULL, "Received THEPOINT and am about to change it...", 
	   "Unmanaged DLL", MB_OK);

	// Take the incoming THEPOINT and change it.
	thePoint->x = 10000;
	thePoint->y = 20000;
   
	// Call the managed function.
	bool res = (*pf)(thePoint);

	// Get result from callback.
	if( res )
		MessageBox(NULL, "Callback says TRUE", 
			"Unmanaged DLL", MB_OK);
	else
		MessageBox(NULL, "Callback says FALSE", 
			"Unmanaged DLL", MB_OK);
}

extern "C" MYCUSTOMCALLBACKDLL_API void VerifyAndReportBack(SIMPLECALLBACKFUNCTION pf)
{
   MessageBox(NULL, "You called me...about to call you!", 
	   "Unmanaged DLL", MB_OK);
   
	// Call the managed function.
	bool res = (*pf)();

	// Get result from callback.
	if( res )
		MessageBox(NULL, "Callback says TRUE", 
			"Unmanaged DLL", MB_OK);
	else
		MessageBox(NULL, "Callback says FALSE", 
			"Unmanaged DLL", MB_OK);
}
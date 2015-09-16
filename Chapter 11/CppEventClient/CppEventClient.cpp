// CppEventClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <atlbase.h>
CComModule _Module;
#include <atlcom.h>
#include <iostream.h> 

// Adjust path if needed!!
#import "C:\WINDOWS\Microsoft.NET\Framework\v1.0.3617\mscorlib.tlb" \
no_namespace named_guids rename("_Module", "_NETModule")

#import "C:\Apress Books\InteropBook\Labs\Chapter 11\DotNetEventServer\bin\Debug\DotNetEventServer.tlb" \
no_namespace named_guids


// The helper sink.
_ATL_FUNC_INFO OnTheEventInfo = {CC_STDCALL, VT_EMPTY, 1, {VT_BSTR}};
class CEventSink : public IDispEventSimpleImpl<1, CEventSink, &DIID__DEventInterface> 
{
public:
	BEGIN_SINK_MAP(CEventSink)
		SINK_ENTRY_INFO(1, DIID__DEventInterface, 1, OnTheEvent, &OnTheEventInfo)
	END_SINK_MAP()

	void __stdcall OnTheEvent(BSTR msg)
	{
		USES_CONVERSION;
		cout << "The message is: " << W2A(msg) << endl;
		SysFreeString(msg);
	}

	// Set up advisory connection...
	CEventSink(_DotNetEventSender* pObj)
	{
		pDotNetObject = pObj;
		pDotNetObject->AddRef();
		DispEventAdvise((IUnknown*)pDotNetObject);
	}

	// Detatch from event source.
	~CEventSink()
	{
		pDotNetObject->Release();
		DispEventUnadvise((IUnknown*)pDotNetObject);
	}

private:
	_DotNetEventSender* pDotNetObject;
};


int main(int argc, char* argv[])
{
	USES_CONVERSION;

	CoInitialize(NULL);
	
	// Create the dot net class.
	_DotNetEventSender *pDotNetEventSender = NULL;
	CoCreateInstance(CLSID_DotNetEventSender, NULL, CLSCTX_SERVER, 
		IID__DotNetEventSender, (void**)&pDotNetEventSender);
	
	// Make instance of the sink.
	CEventSink theSink((_DotNetEventSender*)pDotNetEventSender);	

	// Trigger the event!!
	pDotNetEventSender->FireTheEvent();
	
	// COM clean up.
	pDotNetEventSender->Release();
	CoUninitialize();
	return 0;
}

// TheBrokenObject.cpp : Implementation of CTheBrokenObject
#include "stdafx.h"
#include "AtlComErrorServer.h"
#include "TheBrokenObject.h"

/////////////////////////////////////////////////////////////////////////////
// CTheBrokenObject


STDMETHODIMP CTheBrokenObject::ReturnFailedHRESULT()
{
	// Return a failed HRESULT.
	// DISP_E_NOTACOLLECTION is a standard HR which
	// informs the caller that a given item is
	// not a COM collection.  

	// Of course, returning this HR is semantically
	// out of whack for this method, but it is
	// more interesting than a simple E_FAIL.

	return DISP_E_NOTACOLLECTION;
}

STDMETHODIMP CTheBrokenObject::ReturnComErrorObject()
{
	// The ATL Error() methods (defined in CComCoClass)
	// hide the gory details of building a COM error object.
	Error("This is a realllllly bad error");

	return E_FAIL;
}

STDMETHODIMP CTheBrokenObject::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ITheBrokenObject
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
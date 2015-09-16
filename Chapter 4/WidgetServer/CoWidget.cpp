// CoWidget.cpp : Implementation of CCoWidget
#include "stdafx.h"
#include "WidgetServer.h"
#include "CoWidget.h"

/////////////////////////////////////////////////////////////////////////////
// CCoWidget

STDMETHODIMP CCoWidget::InParamsOnly(long x, long y)
{
    // Just use the incoming data.
    return S_OK;
}

STDMETHODIMP CCoWidget::OutParamsOnly(long *x, long *y)
{
    // Allocate data for the caller.
    *x = 100;
    *y = 200;
    return S_OK;
}

STDMETHODIMP CCoWidget::InAndOutParams(long *x, long *y)
{
    // Client sends us some initial data, but we can
    // reallocate.
    *x = *x + 100;  // Add 100 to x.
    *y = *y + 100;  // Add 900 to y.
    return S_OK;
}

STDMETHODIMP CCoWidget::SumByRetVal(long x, long y, long *answer)
{
	// Return sum.
	*answer = x + y;
	return S_OK;
}

STDMETHODIMP CCoWidget::UseThisSafeArray(SAFEARRAY** ppStrings)
{
	USES_CONVERSION;

	// Get local copy of strings.
	SAFEARRAY* pSA = *ppStrings;

	// Be sure we don't have a multidimentional array.
	UINT numbOfDims = SafeArrayGetDim(pSA);
	if(numbOfDims != 1)
		return E_INVALIDARG;

	// Be sure we have strings in the array.
	VARTYPE vt = 0;
	SafeArrayGetVartype(pSA, &vt);
	if(vt != VT_BSTR)
		return E_INVALIDARG;

	// Get upper bound of array.
	long ubound = 0;
	SafeArrayGetUBound(pSA, 1, &ubound);

	// Now show each string.
	BSTR* temp = NULL;
	SafeArrayAccessData(pSA, (void**)&temp);
	for(int i = 0; i <= ubound; i++)
	{
		MessageBox(NULL, W2A(temp[i]), "BSTR says...", MB_OK);
		
	}
	SafeArrayUnaccessData(pSA);
	return S_OK;
}

STDMETHODIMP CCoWidget::GiveMeSomeStrings(SAFEARRAY** ppStrings)
{
	// Send back some strings to the client.
	SAFEARRAY *pSA;
	SAFEARRAYBOUND bounds = {4, 0};
	
	// Create the array (client must free the array with SafeArrayDestroy() ).
	pSA = SafeArrayCreate(VT_BSTR, 1, &bounds);

	// Fill the array with data.
	BSTR *theStrings;
	SafeArrayAccessData(pSA, (void**)&theStrings);
	theStrings[0] = SysAllocString(L"Hello");
	theStrings[1] = SysAllocString(L"from");
	theStrings[2] = SysAllocString(L"the");
	theStrings[3] = SysAllocString(L"coclass!");
	SafeArrayUnaccessData(pSA);

	// Set return value.
	*ppStrings = pSA;

	return S_OK;
}

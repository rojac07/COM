// CoWidget.h : Declaration of the CCoWidget

#ifndef __COWIDGET_H_
#define __COWIDGET_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCoWidget
class ATL_NO_VTABLE CCoWidget : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCoWidget, &CLSID_CoWidget>,
	public IParams,
	public ISafeArray
{
public:
	CCoWidget()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_COWIDGET)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCoWidget)
	COM_INTERFACE_ENTRY(IParams)
	COM_INTERFACE_ENTRY(ISafeArray)
END_COM_MAP()

// IParams
public:
	STDMETHOD(InParamsOnly)(long x, long y);
	STDMETHOD(OutParamsOnly)(long *x, long *y);
	STDMETHOD(InAndOutParams)(long *x, long *y);
	STDMETHOD(SumByRetVal)(long x, long y, long *answer);

// ISafeArray
	STDMETHOD(GiveMeSomeStrings)(SAFEARRAY** ppStrings);
	STDMETHOD(UseThisSafeArray)(SAFEARRAY** ppStrings);

};

#endif //__COWIDGET_H_

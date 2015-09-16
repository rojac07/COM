// CoTruck.h : Declaration of the CCoTruck

#ifndef __COTRUCK_H_
#define __COTRUCK_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCoTruck
class ATL_NO_VTABLE CCoTruck : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCoTruck, &CLSID_CoTruck>,
	public IStartable,
	public IStoppable 
{
public:
	CCoTruck()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_COTRUCK)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCoTruck)
	COM_INTERFACE_ENTRY(IStartable)
	COM_INTERFACE_ENTRY(IStoppable)
END_COM_MAP()

// IStartable
public:
	STDMETHOD(Start)();
// IStopable
	STDMETHOD(Break)();
};

#endif //__COTRUCK_H_

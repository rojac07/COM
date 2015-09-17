// ComBoat.h : Declaration of the CComBoat

#ifndef __COMBOAT_H_
#define __COMBOAT_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CComBoat
class ATL_NO_VTABLE CComBoat : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CComBoat, &CLSID_ComBoat>,
	public IComBoat,
	public ITurboBoat
{
public:
	CComBoat()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_COMBOAT)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CComBoat)
	COM_INTERFACE_ENTRY(IComBoat)
	COM_INTERFACE_ENTRY(ITurboBoat)
END_COM_MAP()

// IComBoat
public:
	STDMETHOD(TurboSwimming)();
	STDMETHOD(Swimming)();
};

#endif //__COMBOAT_H_

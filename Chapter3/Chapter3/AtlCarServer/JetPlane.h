// JetPlane.h : Declaration of the CJetPlane

#ifndef __JETPLANE_H_
#define __JETPLANE_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CJetPlane
class ATL_NO_VTABLE CJetPlane : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CJetPlane, &CLSID_JetPlane>,
	public IJet,
	public ITurbo
{
public:
	CJetPlane()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_JETPLANE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CJetPlane)
	COM_INTERFACE_ENTRY(IJet)
	COM_INTERFACE_ENTRY(ITurbo)
END_COM_MAP()

// IJet
public:
	STDMETHOD(TakeOff)();
// ITurbo
	STDMETHOD(TurboBlast)()
	{
		MessageBox(NULL, "Jet Blasters on!", "ITurbo", MB_OK);
		return S_OK;
	}
};

#endif //__JETPLANE_H_

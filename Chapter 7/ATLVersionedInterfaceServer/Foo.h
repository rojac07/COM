// Foo.h : Declaration of the CFoo

#ifndef __FOO_H_
#define __FOO_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CFoo
class ATL_NO_VTABLE CFoo : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFoo, &CLSID_Foo>,
	public IFoo3
{
public:
	CFoo()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_FOO)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CFoo)
	COM_INTERFACE_ENTRY(IFoo)
	COM_INTERFACE_ENTRY(IFoo2)
	COM_INTERFACE_ENTRY(IFoo3)
END_COM_MAP()

// IFoo
public:
	STDMETHOD(A)();
	STDMETHOD(B)();
	STDMETHOD(C)();
};

#endif //__FOO_H_

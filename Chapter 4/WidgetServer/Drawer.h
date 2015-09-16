// Drawer.h : Declaration of the CDrawer

#ifndef __DRAWER_H_
#define __DRAWER_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CDrawer
class ATL_NO_VTABLE CDrawer : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CDrawer, &CLSID_Drawer>,
	public IDraw
{
public:
	CDrawer()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_DRAWER)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CDrawer)
	COM_INTERFACE_ENTRY(IDraw)
END_COM_MAP()

// IDraw
public:
	STDMETHOD(DrawALine)(/*[in, out]*/ MYPOINT* p1, /*[in, out]*/ MYPOINT* p2);
};

#endif //__DRAWER_H_

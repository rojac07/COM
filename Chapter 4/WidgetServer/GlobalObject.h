// GlobalObject.h : Declaration of the CGlobalObject

#ifndef __GLOBALOBJECT_H_
#define __GLOBALOBJECT_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CGlobalObject
class ATL_NO_VTABLE CGlobalObject : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CGlobalObject, &CLSID_GlobalObject>,
	public IGlobalObject
{
public:
	CGlobalObject()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_GLOBALOBJECT)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CGlobalObject)
	COM_INTERFACE_ENTRY(IGlobalObject)
END_COM_MAP()

// IGlobalObject
public:
	STDMETHOD(SomeMethod)();
};

#endif //__GLOBALOBJECT_H_

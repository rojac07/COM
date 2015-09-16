// AtlAdder.h : Declaration of the CAtlAdder

#ifndef __ATLADDER_H_
#define __ATLADDER_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAtlAdder
class ATL_NO_VTABLE CAtlAdder : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAtlAdder, &CLSID_AtlAdder>,
	public IDispatchImpl<IAdd, &IID_IAdd, &LIBID_ATLHELPCUSTOMATTSSERVERLib>
{
public:
	CAtlAdder()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_ATLADDER)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CAtlAdder)
	COM_INTERFACE_ENTRY(IAdd)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IAdd
public:
	STDMETHOD(Add)(/*[in]*/ int x, /*[in]*/ int y, /*[out, retval]*/ int* answer);
};

#endif //__ATLADDER_H_

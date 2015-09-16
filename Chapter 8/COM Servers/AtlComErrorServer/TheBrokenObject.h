// TheBrokenObject.h : Declaration of the CTheBrokenObject

#ifndef __THEBROKENOBJECT_H_
#define __THEBROKENOBJECT_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTheBrokenObject
class ATL_NO_VTABLE CTheBrokenObject : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTheBrokenObject, &CLSID_TheBrokenObject>,
	public ISupportErrorInfo,
	public IDispatchImpl<ITheBrokenObject, &IID_ITheBrokenObject, &LIBID_ATLCOMERRORSERVERLib>
{
public:
	CTheBrokenObject()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_THEBROKENOBJECT)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CTheBrokenObject)
	COM_INTERFACE_ENTRY(ITheBrokenObject)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// ITheBrokenObject
public:
	STDMETHOD(ReturnComErrorObject)();
	STDMETHOD(ReturnFailedHRESULT)();
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
};

#endif //__THEBROKENOBJECT_H_

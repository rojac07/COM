// CoHexagon.h : Declaration of the CCoHexagon

#ifndef __COHEXAGON_H_
#define __COHEXAGON_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCoHexagon
class ATL_NO_VTABLE CCoHexagon : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCoHexagon, &CLSID_CoHexagon>,
	public IDispatchImpl<IDrawable, &IID_IDrawable, &LIBID_ATLSHAPESSERVERLib>
{
public:
	CCoHexagon()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_COHEXAGON)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCoHexagon)
	COM_INTERFACE_ENTRY(IDrawable)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IDrawable
public:
	STDMETHOD(SetColor)(/*[in]*/ SHAPECOLOR c);
	STDMETHOD(Draw)(/*[in]*/ int top, /*[in]*/ int left, /*[in]*/ int bottom, /*[in]*/ int right);
};

#endif //__COHEXAGON_H_

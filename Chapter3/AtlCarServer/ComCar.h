// ComCar.h : Declaration of the CComCar

#ifndef __COMCAR_H_
#define __COMCAR_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CComCar
class ATL_NO_VTABLE CComCar : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CComCar, &CLSID_ComCar>,
	public IComCar
{
public:
	CComCar()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_COMCAR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CComCar)
	COM_INTERFACE_ENTRY(IComCar)
END_COM_MAP()

// IComCar
public:
	STDMETHOD(TurnOnRadio)(/*[in]*/ RADIOTYPE make);
	STDMETHOD(SpeedUp)(/*[in]*/ long data);
};

#endif //__COMCAR_H_

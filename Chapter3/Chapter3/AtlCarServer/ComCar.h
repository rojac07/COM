// ComCar.h : Declaration of the CComCar

#ifndef __COMCAR_H_
#define __COMCAR_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CComCar
class ATL_NO_VTABLE CComCar : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CComCar, &CLSID_ComCar>,
	public IComCar,
	public ITurbo
{
public:
	CComCar() : m_currSpeed(0)
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_COMCAR)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CComCar)
	COM_INTERFACE_ENTRY(IComCar)
	COM_INTERFACE_ENTRY(ITurbo)
END_COM_MAP()

// IComCar
public:
	STDMETHOD(TurnOnRadio)(/*[in]*/ RADIOTYPE make);
	STDMETHOD(TurboBlast)();
	STDMETHOD(SpeedUp)(/*[in]*/ long delta);
private:
	long m_currSpeed;
// ITurbo
};

#endif //__COMCAR_H_

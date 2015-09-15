// ComCar.h: interface for the ComCar class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COMCAR_H__0F54EC28_07C8_4863_ABC2_9360E6F30983__INCLUDED_)
#define AFX_COMCAR_H__0F54EC28_07C8_4863_ABC2_9360E6F30983__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <windows.h>

// MIDL generated file!
#include "rawcomcar.h"

// ComCar implements IUnknown and ICar.
class ComCar : public ICar, public IRadio  
{
public:
	ComCar();
	virtual ~ComCar();

	// IUnknown impl.
	STDMETHOD_(ULONG,AddRef)();
	STDMETHOD_(ULONG,Release)();
	STDMETHOD (QueryInterface)(REFIID riid, void**);

	// ICar impl.
	STDMETHOD (SpeedUp)(long delta);
	STDMETHOD (CurrentSpeed)(long* currSp);

	// IRadio impl.
	STDMETHOD (CrankTunes)();

	// Ref counter.
	ULONG m_refCount;

	// Current speed!
	long m_currSpeed;
};

#endif // !defined(AFX_COMCAR_H__0F54EC28_07C8_4863_ABC2_9360E6F30983__INCLUDED_)

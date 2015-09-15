// ScriptableCar.h: interface for the ScriptableCar class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCRIPTABLECAR_H__8C0E7CE4_CE96_4204_A2F6_DFB0D4089183__INCLUDED_)
#define AFX_SCRIPTABLECAR_H__8C0E7CE4_CE96_4204_A2F6_DFB0D4089183__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "rawcomcar.h"

class ScriptableCar : public IScriptableCar  
{
public:
	ScriptableCar();
	virtual ~ScriptableCar();
	
	// IUnknown.
	STDMETHODIMP_(DWORD)AddRef();
	STDMETHODIMP_(DWORD)Release();
	STDMETHODIMP QueryInterface(REFIID riid, void** ppv);

	// IDispatch
    STDMETHODIMP GetTypeInfoCount( UINT *pctinfo);
    STDMETHODIMP GetTypeInfo( UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
    STDMETHODIMP GetIDsOfNames( REFIID riid, LPOLESTR *rgszNames, 
								UINT cNames, LCID lcid, DISPID *rgDispId);
    STDMETHODIMP Invoke( DISPID dispIdMember, REFIID riid, LCID lcid, 
						 WORD wFlags, DISPPARAMS *pDispParams, 
						 VARIANT *pVarResult, 
						 EXCEPINFO  *pExcepInfo, UINT *puArgErr); 

	// Members of IScriptableCar.
	STDMETHOD (put_Speed)(long delta);
	STDMETHOD (get_Speed)(long* currSp);
	STDMETHOD (CrankTunes)();

	// Current speed!
	long m_currSpeed;

	// Ref counter.
	ULONG m_refCount;

	// To hold onto our type information.
	ITypeInfo* m_ptypeInfo;		

};

#endif // !defined(AFX_SCRIPTABLECAR_H__8C0E7CE4_CE96_4204_A2F6_DFB0D4089183__INCLUDED_)

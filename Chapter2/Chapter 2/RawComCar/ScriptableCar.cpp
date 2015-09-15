// ScriptableCar.cpp: implementation of the ScriptableCar class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ScriptableCar.h"

extern ULONG g_ObjectCount;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

ScriptableCar::ScriptableCar() : m_currSpeed(0), m_ptypeInfo(NULL), 
							     m_refCount(0)
{
	++g_ObjectCount;
	
	// When our object is constructed, we are going to 
	// load up the *tlb file and store it in our ITypeInfo pointer.
	ITypeLib* pTypeLibrary = NULL;
	HRESULT hr;
	hr = LoadRegTypeLib(LIBID_RawComCarLib, 1, 0, 
				        LANG_NEUTRAL, &pTypeLibrary);
	
	if(SUCCEEDED(hr))
	{
		pTypeLibrary->GetTypeInfoOfGuid(IID_IScriptableCar, &m_ptypeInfo);
		pTypeLibrary->Release();
	}

}

ScriptableCar::~ScriptableCar()
{
	--g_ObjectCount;
	m_ptypeInfo->Release();

}

STDMETHODIMP ScriptableCar::GetTypeInfoCount( UINT *pctinfo)
{
	// We DO support type information in this object.
	*pctinfo = 1;
	return S_OK;
}

STDMETHODIMP ScriptableCar::GetTypeInfo( UINT iTInfo,
    LCID lcid,ITypeInfo **ppTInfo)
{
	// Return pointer as we DO support type info.
	*ppTInfo = m_ptypeInfo;
	m_ptypeInfo->AddRef();
	return S_OK;
}

STDMETHODIMP ScriptableCar::GetIDsOfNames( REFIID riid,
    LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId)
{
	// Now we just delegate the work of the look-up to our type library.
	return DispGetIDsOfNames(m_ptypeInfo, rgszNames, cNames, rgDispId);
}

STDMETHODIMP ScriptableCar::Invoke( DISPID dispIdMember, REFIID riid,
         LCID lcid, WORD wFlags, DISPPARAMS *pDispParams,
         VARIANT *pVarResult, EXCEPINFO  *pExcepInfo, UINT *puArgErr)
{
	// Again, delegate to the type info.
	return DispInvoke(this, m_ptypeInfo, dispIdMember, wFlags, pDispParams,
			       pVarResult, pExcepInfo, puArgErr);
}

STDMETHODIMP_(ULONG) ScriptableCar::AddRef()
{
	return ++m_refCount;
}


STDMETHODIMP_(ULONG) ScriptableCar::Release()
{
	if(--m_refCount == 0)
		delete this;
	return m_refCount;
}


STDMETHODIMP ScriptableCar::QueryInterface(REFIID riid, void** ppInterface) 
{
	// Remember!  Always AddRef() when handing out an interface.
	if(riid == IID_IUnknown)
	{
		*ppInterface = (IUnknown*)(ICar*)this;
		((IUnknown*)(*ppInterface ))->AddRef();
		return S_OK;
	}
	else if(riid == IID_IScriptableCar)
	{
		*ppInterface = (ICar*)this;
		((IUnknown*)(*ppInterface ))->AddRef();
		return S_OK;
	}
	else if(riid == IID_IDispatch)
	{
		*ppInterface = (IDispatch*)this;
		((IUnknown*)(*ppInterface ))->AddRef();
		return S_OK;
	}
	else
	{
		*ppInterface = NULL;
		return E_NOINTERFACE;
	}
}

STDMETHODIMP ScriptableCar::put_Speed(long delta) 
{
	m_currSpeed += delta;
	return S_OK;
}


STDMETHODIMP ScriptableCar::get_Speed(long* currSp)
{
	*currSp = m_currSpeed;
	return S_OK;
}

STDMETHODIMP ScriptableCar::CrankTunes()
{
	MessageBox(NULL, "Cranking music!", "ScriptableCar", MB_OK);
	return S_OK;
}

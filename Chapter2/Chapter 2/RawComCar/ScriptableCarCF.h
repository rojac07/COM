// ScriptableCarCF.h: interface for the ScriptableCarCF class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SCRIPTABLECARCF_H__EF54C0AF_EAF2_43BC_9006_14EF2FB0060A__INCLUDED_)
#define AFX_SCRIPTABLECARCF_H__EF54C0AF_EAF2_43BC_9006_14EF2FB0060A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class ScriptableCarCF : public IClassFactory  
{
public:
	ScriptableCarCF();
	virtual ~ScriptableCarCF();

	// IUnknown impl.
	STDMETHOD_(ULONG,AddRef)();
	STDMETHOD_(ULONG,Release)();
	STDMETHOD (QueryInterface)(REFIID riid, void** pInterface);

	// ICF impl.
	STDMETHOD (CreateInstance)(LPUNKNOWN pUnkOuter, REFIID iid, void** pInterface);
	STDMETHOD (LockServer)(BOOL lock);

	// Ref counter.
	ULONG m_refCount;

};

#endif // !defined(AFX_SCRIPTABLECARCF_H__EF54C0AF_EAF2_43BC_9006_14EF2FB0060A__INCLUDED_)

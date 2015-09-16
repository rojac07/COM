/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Feb 20 22:17:48 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 9\AtlHelpCustomAttsServer\AtlHelpCustomAttsServer.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AtlHelpCustomAttsServer_h__
#define __AtlHelpCustomAttsServer_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IAdd_FWD_DEFINED__
#define __IAdd_FWD_DEFINED__
typedef interface IAdd IAdd;
#endif 	/* __IAdd_FWD_DEFINED__ */


#ifndef __AtlAdder_FWD_DEFINED__
#define __AtlAdder_FWD_DEFINED__

#ifdef __cplusplus
typedef class AtlAdder AtlAdder;
#else
typedef struct AtlAdder AtlAdder;
#endif /* __cplusplus */

#endif 	/* __AtlAdder_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IAdd_INTERFACE_DEFINED__
#define __IAdd_INTERFACE_DEFINED__

/* interface IAdd */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAdd;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC7C1641-4031-45EA-8B61-7AAAD04A0BA7")
    IAdd : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ int x,
            /* [in] */ int y,
            /* [retval][out] */ int __RPC_FAR *answer) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAddVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IAdd __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IAdd __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IAdd __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IAdd __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IAdd __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IAdd __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IAdd __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IAdd __RPC_FAR * This,
            /* [in] */ int x,
            /* [in] */ int y,
            /* [retval][out] */ int __RPC_FAR *answer);
        
        END_INTERFACE
    } IAddVtbl;

    interface IAdd
    {
        CONST_VTBL struct IAddVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAdd_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAdd_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAdd_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAdd_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IAdd_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IAdd_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IAdd_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IAdd_Add(This,x,y,answer)	\
    (This)->lpVtbl -> Add(This,x,y,answer)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE IAdd_Add_Proxy( 
    IAdd __RPC_FAR * This,
    /* [in] */ int x,
    /* [in] */ int y,
    /* [retval][out] */ int __RPC_FAR *answer);


void __RPC_STUB IAdd_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAdd_INTERFACE_DEFINED__ */



#ifndef __ATLHELPCUSTOMATTSSERVERLib_LIBRARY_DEFINED__
#define __ATLHELPCUSTOMATTSSERVERLib_LIBRARY_DEFINED__

/* library ATLHELPCUSTOMATTSSERVERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ATLHELPCUSTOMATTSSERVERLib;

EXTERN_C const CLSID CLSID_AtlAdder;

#ifdef __cplusplus

class DECLSPEC_UUID("4C3DB474-61BF-49BF-979B-68A5FB53E43B")
AtlAdder;
#endif
#endif /* __ATLHELPCUSTOMATTSSERVERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

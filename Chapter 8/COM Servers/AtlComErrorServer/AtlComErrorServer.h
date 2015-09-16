/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Jan 22 16:30:00 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 7\COM Servers\AtlComErrorServer\AtlComErrorServer.idl:
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

#ifndef __AtlComErrorServer_h__
#define __AtlComErrorServer_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __ITheBrokenObject_FWD_DEFINED__
#define __ITheBrokenObject_FWD_DEFINED__
typedef interface ITheBrokenObject ITheBrokenObject;
#endif 	/* __ITheBrokenObject_FWD_DEFINED__ */


#ifndef __TheBrokenObject_FWD_DEFINED__
#define __TheBrokenObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class TheBrokenObject TheBrokenObject;
#else
typedef struct TheBrokenObject TheBrokenObject;
#endif /* __cplusplus */

#endif 	/* __TheBrokenObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __ITheBrokenObject_INTERFACE_DEFINED__
#define __ITheBrokenObject_INTERFACE_DEFINED__

/* interface ITheBrokenObject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITheBrokenObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D52B3F7A-1D2A-48F7-B839-397090A7656A")
    ITheBrokenObject : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReturnFailedHRESULT( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReturnComErrorObject( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITheBrokenObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITheBrokenObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITheBrokenObject __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITheBrokenObject __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ITheBrokenObject __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ITheBrokenObject __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ITheBrokenObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ITheBrokenObject __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReturnFailedHRESULT )( 
            ITheBrokenObject __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReturnComErrorObject )( 
            ITheBrokenObject __RPC_FAR * This);
        
        END_INTERFACE
    } ITheBrokenObjectVtbl;

    interface ITheBrokenObject
    {
        CONST_VTBL struct ITheBrokenObjectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITheBrokenObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITheBrokenObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITheBrokenObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITheBrokenObject_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITheBrokenObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITheBrokenObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITheBrokenObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITheBrokenObject_ReturnFailedHRESULT(This)	\
    (This)->lpVtbl -> ReturnFailedHRESULT(This)

#define ITheBrokenObject_ReturnComErrorObject(This)	\
    (This)->lpVtbl -> ReturnComErrorObject(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITheBrokenObject_ReturnFailedHRESULT_Proxy( 
    ITheBrokenObject __RPC_FAR * This);


void __RPC_STUB ITheBrokenObject_ReturnFailedHRESULT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ITheBrokenObject_ReturnComErrorObject_Proxy( 
    ITheBrokenObject __RPC_FAR * This);


void __RPC_STUB ITheBrokenObject_ReturnComErrorObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITheBrokenObject_INTERFACE_DEFINED__ */



#ifndef __ATLCOMERRORSERVERLib_LIBRARY_DEFINED__
#define __ATLCOMERRORSERVERLib_LIBRARY_DEFINED__

/* library ATLCOMERRORSERVERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ATLCOMERRORSERVERLib;

EXTERN_C const CLSID CLSID_TheBrokenObject;

#ifdef __cplusplus

class DECLSPEC_UUID("DD7A12D1-7662-4F77-9776-FC00B1AA45AF")
TheBrokenObject;
#endif
#endif /* __ATLCOMERRORSERVERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

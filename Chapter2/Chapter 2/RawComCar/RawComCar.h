/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Mar 01 00:28:25 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 2\RawComCar\RawComCar.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
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

#ifndef __RawComCar_h__
#define __RawComCar_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __ICar_FWD_DEFINED__
#define __ICar_FWD_DEFINED__
typedef interface ICar ICar;
#endif 	/* __ICar_FWD_DEFINED__ */


#ifndef __IRadio_FWD_DEFINED__
#define __IRadio_FWD_DEFINED__
typedef interface IRadio IRadio;
#endif 	/* __IRadio_FWD_DEFINED__ */


#ifndef __IScriptableCar_FWD_DEFINED__
#define __IScriptableCar_FWD_DEFINED__
typedef interface IScriptableCar IScriptableCar;
#endif 	/* __IScriptableCar_FWD_DEFINED__ */


#ifndef __ComCar_FWD_DEFINED__
#define __ComCar_FWD_DEFINED__

#ifdef __cplusplus
typedef class ComCar ComCar;
#else
typedef struct ComCar ComCar;
#endif /* __cplusplus */

#endif 	/* __ComCar_FWD_DEFINED__ */


#ifndef __ScriptableCar_FWD_DEFINED__
#define __ScriptableCar_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScriptableCar ScriptableCar;
#else
typedef struct ScriptableCar ScriptableCar;
#endif /* __cplusplus */

#endif 	/* __ScriptableCar_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __ICar_INTERFACE_DEFINED__
#define __ICar_INTERFACE_DEFINED__

/* interface ICar */
/* [object][uuid] */ 


EXTERN_C const IID IID_ICar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("710D2F54-9289-4f66-9F64-201D56FB66C7")
    ICar : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SpeedUp( 
            /* [in] */ long delta) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CurrentSpeed( 
            /* [retval][out] */ long __RPC_FAR *currSp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICar __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICar __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICar __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SpeedUp )( 
            ICar __RPC_FAR * This,
            /* [in] */ long delta);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CurrentSpeed )( 
            ICar __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *currSp);
        
        END_INTERFACE
    } ICarVtbl;

    interface ICar
    {
        CONST_VTBL struct ICarVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICar_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICar_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICar_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICar_SpeedUp(This,delta)	\
    (This)->lpVtbl -> SpeedUp(This,delta)

#define ICar_CurrentSpeed(This,currSp)	\
    (This)->lpVtbl -> CurrentSpeed(This,currSp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ICar_SpeedUp_Proxy( 
    ICar __RPC_FAR * This,
    /* [in] */ long delta);


void __RPC_STUB ICar_SpeedUp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICar_CurrentSpeed_Proxy( 
    ICar __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *currSp);


void __RPC_STUB ICar_CurrentSpeed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICar_INTERFACE_DEFINED__ */


#ifndef __IRadio_INTERFACE_DEFINED__
#define __IRadio_INTERFACE_DEFINED__

/* interface IRadio */
/* [object][uuid] */ 


EXTERN_C const IID IID_IRadio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B6C6126-92A8-47ef-86DA-A12BFFD9BC42")
    IRadio : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CrankTunes( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRadioVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRadio __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRadio __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRadio __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CrankTunes )( 
            IRadio __RPC_FAR * This);
        
        END_INTERFACE
    } IRadioVtbl;

    interface IRadio
    {
        CONST_VTBL struct IRadioVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRadio_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRadio_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRadio_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRadio_CrankTunes(This)	\
    (This)->lpVtbl -> CrankTunes(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRadio_CrankTunes_Proxy( 
    IRadio __RPC_FAR * This);


void __RPC_STUB IRadio_CrankTunes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRadio_INTERFACE_DEFINED__ */


#ifndef __IScriptableCar_INTERFACE_DEFINED__
#define __IScriptableCar_INTERFACE_DEFINED__

/* interface IScriptableCar */
/* [object][dual][uuid] */ 


EXTERN_C const IID IID_IScriptableCar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DBAA0495-2F6A-458a-A74A-129F2C45B642")
    IScriptableCar : public IDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Speed( 
            /* [in] */ long currSp) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Speed( 
            /* [retval][out] */ long __RPC_FAR *currSp) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CrankTunes( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IScriptableCarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IScriptableCar __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IScriptableCar __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IScriptableCar __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IScriptableCar __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IScriptableCar __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IScriptableCar __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IScriptableCar __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Speed )( 
            IScriptableCar __RPC_FAR * This,
            /* [in] */ long currSp);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Speed )( 
            IScriptableCar __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *currSp);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CrankTunes )( 
            IScriptableCar __RPC_FAR * This);
        
        END_INTERFACE
    } IScriptableCarVtbl;

    interface IScriptableCar
    {
        CONST_VTBL struct IScriptableCarVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScriptableCar_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IScriptableCar_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IScriptableCar_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IScriptableCar_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IScriptableCar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IScriptableCar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IScriptableCar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IScriptableCar_put_Speed(This,currSp)	\
    (This)->lpVtbl -> put_Speed(This,currSp)

#define IScriptableCar_get_Speed(This,currSp)	\
    (This)->lpVtbl -> get_Speed(This,currSp)

#define IScriptableCar_CrankTunes(This)	\
    (This)->lpVtbl -> CrankTunes(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propput][id] */ HRESULT STDMETHODCALLTYPE IScriptableCar_put_Speed_Proxy( 
    IScriptableCar __RPC_FAR * This,
    /* [in] */ long currSp);


void __RPC_STUB IScriptableCar_put_Speed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE IScriptableCar_get_Speed_Proxy( 
    IScriptableCar __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *currSp);


void __RPC_STUB IScriptableCar_get_Speed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE IScriptableCar_CrankTunes_Proxy( 
    IScriptableCar __RPC_FAR * This);


void __RPC_STUB IScriptableCar_CrankTunes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IScriptableCar_INTERFACE_DEFINED__ */



#ifndef __RawComCarLib_LIBRARY_DEFINED__
#define __RawComCarLib_LIBRARY_DEFINED__

/* library RawComCarLib */
/* [custom][version][uuid] */ 


EXTERN_C const IID LIBID_RawComCarLib;

EXTERN_C const CLSID CLSID_ComCar;

#ifdef __cplusplus

class DECLSPEC_UUID("096AC71D-3EB6-4974-A071-A3B1C0B7FC8D")
ComCar;
#endif

EXTERN_C const CLSID CLSID_ScriptableCar;

#ifdef __cplusplus

class DECLSPEC_UUID("7AD9AFC9-771C-495c-A330-006D54A23650")
ScriptableCar;
#endif
#endif /* __RawComCarLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

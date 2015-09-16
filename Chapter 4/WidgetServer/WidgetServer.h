/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Mar 06 22:33:27 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 4\WidgetServer\WidgetServer.idl:
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

#ifndef __WidgetServer_h__
#define __WidgetServer_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IParams_FWD_DEFINED__
#define __IParams_FWD_DEFINED__
typedef interface IParams IParams;
#endif 	/* __IParams_FWD_DEFINED__ */


#ifndef __ISafeArray_FWD_DEFINED__
#define __ISafeArray_FWD_DEFINED__
typedef interface ISafeArray ISafeArray;
#endif 	/* __ISafeArray_FWD_DEFINED__ */


#ifndef __IGlobalObject_FWD_DEFINED__
#define __IGlobalObject_FWD_DEFINED__
typedef interface IGlobalObject IGlobalObject;
#endif 	/* __IGlobalObject_FWD_DEFINED__ */


#ifndef __IDraw_FWD_DEFINED__
#define __IDraw_FWD_DEFINED__
typedef interface IDraw IDraw;
#endif 	/* __IDraw_FWD_DEFINED__ */


#ifndef __CoWidget_FWD_DEFINED__
#define __CoWidget_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoWidget CoWidget;
#else
typedef struct CoWidget CoWidget;
#endif /* __cplusplus */

#endif 	/* __CoWidget_FWD_DEFINED__ */


#ifndef __GlobalObject_FWD_DEFINED__
#define __GlobalObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class GlobalObject GlobalObject;
#else
typedef struct GlobalObject GlobalObject;
#endif /* __cplusplus */

#endif 	/* __GlobalObject_FWD_DEFINED__ */


#ifndef __Drawer_FWD_DEFINED__
#define __Drawer_FWD_DEFINED__

#ifdef __cplusplus
typedef class Drawer Drawer;
#else
typedef struct Drawer Drawer;
#endif /* __cplusplus */

#endif 	/* __Drawer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_WidgetServer_0000 */
/* [local] */ 

typedef /* [public][public][public][uuid] */ struct  __MIDL___MIDL_itf_WidgetServer_0000_0001
    {
    long xPos;
    long yPos;
    }	MYPOINT;



extern RPC_IF_HANDLE __MIDL_itf_WidgetServer_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_WidgetServer_0000_v0_0_s_ifspec;

#ifndef __IParams_INTERFACE_DEFINED__
#define __IParams_INTERFACE_DEFINED__

/* interface IParams */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IParams;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F11657E4-8C9E-40EB-8AFD-312BBD9D606C")
    IParams : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InParamsOnly( 
            /* [in] */ long x,
            /* [in] */ long y) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OutParamsOnly( 
            /* [out] */ long __RPC_FAR *x,
            /* [out] */ long __RPC_FAR *y) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InAndOutParams( 
            /* [out][in] */ long __RPC_FAR *x,
            /* [out][in] */ long __RPC_FAR *y) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SumByRetVal( 
            /* [in] */ long x,
            /* [in] */ long y,
            /* [retval][out] */ long __RPC_FAR *answer) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IParamsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IParams __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IParams __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IParams __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InParamsOnly )( 
            IParams __RPC_FAR * This,
            /* [in] */ long x,
            /* [in] */ long y);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OutParamsOnly )( 
            IParams __RPC_FAR * This,
            /* [out] */ long __RPC_FAR *x,
            /* [out] */ long __RPC_FAR *y);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InAndOutParams )( 
            IParams __RPC_FAR * This,
            /* [out][in] */ long __RPC_FAR *x,
            /* [out][in] */ long __RPC_FAR *y);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SumByRetVal )( 
            IParams __RPC_FAR * This,
            /* [in] */ long x,
            /* [in] */ long y,
            /* [retval][out] */ long __RPC_FAR *answer);
        
        END_INTERFACE
    } IParamsVtbl;

    interface IParams
    {
        CONST_VTBL struct IParamsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IParams_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IParams_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IParams_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IParams_InParamsOnly(This,x,y)	\
    (This)->lpVtbl -> InParamsOnly(This,x,y)

#define IParams_OutParamsOnly(This,x,y)	\
    (This)->lpVtbl -> OutParamsOnly(This,x,y)

#define IParams_InAndOutParams(This,x,y)	\
    (This)->lpVtbl -> InAndOutParams(This,x,y)

#define IParams_SumByRetVal(This,x,y,answer)	\
    (This)->lpVtbl -> SumByRetVal(This,x,y,answer)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IParams_InParamsOnly_Proxy( 
    IParams __RPC_FAR * This,
    /* [in] */ long x,
    /* [in] */ long y);


void __RPC_STUB IParams_InParamsOnly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IParams_OutParamsOnly_Proxy( 
    IParams __RPC_FAR * This,
    /* [out] */ long __RPC_FAR *x,
    /* [out] */ long __RPC_FAR *y);


void __RPC_STUB IParams_OutParamsOnly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IParams_InAndOutParams_Proxy( 
    IParams __RPC_FAR * This,
    /* [out][in] */ long __RPC_FAR *x,
    /* [out][in] */ long __RPC_FAR *y);


void __RPC_STUB IParams_InAndOutParams_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IParams_SumByRetVal_Proxy( 
    IParams __RPC_FAR * This,
    /* [in] */ long x,
    /* [in] */ long y,
    /* [retval][out] */ long __RPC_FAR *answer);


void __RPC_STUB IParams_SumByRetVal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IParams_INTERFACE_DEFINED__ */


#ifndef __ISafeArray_INTERFACE_DEFINED__
#define __ISafeArray_INTERFACE_DEFINED__

/* interface ISafeArray */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISafeArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DB6803AC-F6E9-426c-ADCA-395B10EB5229")
    ISafeArray : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UseThisSafeArray( 
            /* [in] */ SAFEARRAY __RPC_FAR * __RPC_FAR *ppStrings) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GiveMeSomeStrings( 
            /* [retval][out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *ppStrings) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISafeArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISafeArray __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISafeArray __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISafeArray __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *UseThisSafeArray )( 
            ISafeArray __RPC_FAR * This,
            /* [in] */ SAFEARRAY __RPC_FAR * __RPC_FAR *ppStrings);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GiveMeSomeStrings )( 
            ISafeArray __RPC_FAR * This,
            /* [retval][out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *ppStrings);
        
        END_INTERFACE
    } ISafeArrayVtbl;

    interface ISafeArray
    {
        CONST_VTBL struct ISafeArrayVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISafeArray_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISafeArray_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISafeArray_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISafeArray_UseThisSafeArray(This,ppStrings)	\
    (This)->lpVtbl -> UseThisSafeArray(This,ppStrings)

#define ISafeArray_GiveMeSomeStrings(This,ppStrings)	\
    (This)->lpVtbl -> GiveMeSomeStrings(This,ppStrings)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISafeArray_UseThisSafeArray_Proxy( 
    ISafeArray __RPC_FAR * This,
    /* [in] */ SAFEARRAY __RPC_FAR * __RPC_FAR *ppStrings);


void __RPC_STUB ISafeArray_UseThisSafeArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ISafeArray_GiveMeSomeStrings_Proxy( 
    ISafeArray __RPC_FAR * This,
    /* [retval][out] */ SAFEARRAY __RPC_FAR * __RPC_FAR *ppStrings);


void __RPC_STUB ISafeArray_GiveMeSomeStrings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISafeArray_INTERFACE_DEFINED__ */


#ifndef __IGlobalObject_INTERFACE_DEFINED__
#define __IGlobalObject_INTERFACE_DEFINED__

/* interface IGlobalObject */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGlobalObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("734CA6D8-8F66-4DDC-BB25-34875B1FBC07")
    IGlobalObject : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SomeMethod( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGlobalObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IGlobalObject __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IGlobalObject __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IGlobalObject __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SomeMethod )( 
            IGlobalObject __RPC_FAR * This);
        
        END_INTERFACE
    } IGlobalObjectVtbl;

    interface IGlobalObject
    {
        CONST_VTBL struct IGlobalObjectVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGlobalObject_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IGlobalObject_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IGlobalObject_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IGlobalObject_SomeMethod(This)	\
    (This)->lpVtbl -> SomeMethod(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IGlobalObject_SomeMethod_Proxy( 
    IGlobalObject __RPC_FAR * This);


void __RPC_STUB IGlobalObject_SomeMethod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IGlobalObject_INTERFACE_DEFINED__ */


#ifndef __IDraw_INTERFACE_DEFINED__
#define __IDraw_INTERFACE_DEFINED__

/* interface IDraw */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDraw;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3CBEA169-BBE9-4A28-B5AA-2E7C5594507E")
    IDraw : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DrawALine( 
            /* [out][in] */ MYPOINT __RPC_FAR *p1,
            /* [out][in] */ MYPOINT __RPC_FAR *p2) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDrawVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDraw __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDraw __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDraw __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DrawALine )( 
            IDraw __RPC_FAR * This,
            /* [out][in] */ MYPOINT __RPC_FAR *p1,
            /* [out][in] */ MYPOINT __RPC_FAR *p2);
        
        END_INTERFACE
    } IDrawVtbl;

    interface IDraw
    {
        CONST_VTBL struct IDrawVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDraw_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDraw_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDraw_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDraw_DrawALine(This,p1,p2)	\
    (This)->lpVtbl -> DrawALine(This,p1,p2)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IDraw_DrawALine_Proxy( 
    IDraw __RPC_FAR * This,
    /* [out][in] */ MYPOINT __RPC_FAR *p1,
    /* [out][in] */ MYPOINT __RPC_FAR *p2);


void __RPC_STUB IDraw_DrawALine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDraw_INTERFACE_DEFINED__ */



#ifndef __WIDGETSERVERLib_LIBRARY_DEFINED__
#define __WIDGETSERVERLib_LIBRARY_DEFINED__

/* library WIDGETSERVERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_WIDGETSERVERLib;

EXTERN_C const CLSID CLSID_CoWidget;

#ifdef __cplusplus

class DECLSPEC_UUID("9B74660B-7133-4B0F-B361-37CAF9511274")
CoWidget;
#endif

EXTERN_C const CLSID CLSID_GlobalObject;

#ifdef __cplusplus

class DECLSPEC_UUID("138B91B9-C70A-49C3-9768-C5202B50E708")
GlobalObject;
#endif

EXTERN_C const CLSID CLSID_Drawer;

#ifdef __cplusplus

class DECLSPEC_UUID("5F90D0BE-552A-4073-A55A-490B7AF7C3CF")
Drawer;
#endif
#endif /* __WIDGETSERVERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long __RPC_FAR *, unsigned long            , LPSAFEARRAY __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long __RPC_FAR *, LPSAFEARRAY __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

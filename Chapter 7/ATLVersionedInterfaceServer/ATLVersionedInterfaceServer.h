/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Mar 03 10:19:29 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 12\ATLVersionedInterfaceServer\ATLVersionedInterfaceServer.idl:
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

#ifndef __ATLVersionedInterfaceServer_h__
#define __ATLVersionedInterfaceServer_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IFoo_FWD_DEFINED__
#define __IFoo_FWD_DEFINED__
typedef interface IFoo IFoo;
#endif 	/* __IFoo_FWD_DEFINED__ */


#ifndef __IFoo2_FWD_DEFINED__
#define __IFoo2_FWD_DEFINED__
typedef interface IFoo2 IFoo2;
#endif 	/* __IFoo2_FWD_DEFINED__ */


#ifndef __IFoo3_FWD_DEFINED__
#define __IFoo3_FWD_DEFINED__
typedef interface IFoo3 IFoo3;
#endif 	/* __IFoo3_FWD_DEFINED__ */


#ifndef __Foo_FWD_DEFINED__
#define __Foo_FWD_DEFINED__

#ifdef __cplusplus
typedef class Foo Foo;
#else
typedef struct Foo Foo;
#endif /* __cplusplus */

#endif 	/* __Foo_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IFoo_INTERFACE_DEFINED__
#define __IFoo_INTERFACE_DEFINED__

/* interface IFoo */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IFoo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("402464FE-F5B1-4859-865F-18AC88A5D198")
    IFoo : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE A( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFooVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFoo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFoo __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFoo __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *A )( 
            IFoo __RPC_FAR * This);
        
        END_INTERFACE
    } IFooVtbl;

    interface IFoo
    {
        CONST_VTBL struct IFooVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFoo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFoo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFoo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFoo_A(This)	\
    (This)->lpVtbl -> A(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFoo_A_Proxy( 
    IFoo __RPC_FAR * This);


void __RPC_STUB IFoo_A_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFoo_INTERFACE_DEFINED__ */


#ifndef __IFoo2_INTERFACE_DEFINED__
#define __IFoo2_INTERFACE_DEFINED__

/* interface IFoo2 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IFoo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1646992B-B7DF-429b-A89A-D196DCD82BF3")
    IFoo2 : public IFoo
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE B( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFoo2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFoo2 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFoo2 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFoo2 __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *A )( 
            IFoo2 __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *B )( 
            IFoo2 __RPC_FAR * This);
        
        END_INTERFACE
    } IFoo2Vtbl;

    interface IFoo2
    {
        CONST_VTBL struct IFoo2Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFoo2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFoo2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFoo2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFoo2_A(This)	\
    (This)->lpVtbl -> A(This)


#define IFoo2_B(This)	\
    (This)->lpVtbl -> B(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFoo2_B_Proxy( 
    IFoo2 __RPC_FAR * This);


void __RPC_STUB IFoo2_B_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFoo2_INTERFACE_DEFINED__ */


#ifndef __IFoo3_INTERFACE_DEFINED__
#define __IFoo3_INTERFACE_DEFINED__

/* interface IFoo3 */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IFoo3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9FD7DBEC-497D-44cc-9E44-218AC3948328")
    IFoo3 : public IFoo2
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE C( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFoo3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFoo3 __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFoo3 __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFoo3 __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *A )( 
            IFoo3 __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *B )( 
            IFoo3 __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *C )( 
            IFoo3 __RPC_FAR * This);
        
        END_INTERFACE
    } IFoo3Vtbl;

    interface IFoo3
    {
        CONST_VTBL struct IFoo3Vtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFoo3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFoo3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFoo3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFoo3_A(This)	\
    (This)->lpVtbl -> A(This)


#define IFoo3_B(This)	\
    (This)->lpVtbl -> B(This)


#define IFoo3_C(This)	\
    (This)->lpVtbl -> C(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFoo3_C_Proxy( 
    IFoo3 __RPC_FAR * This);


void __RPC_STUB IFoo3_C_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFoo3_INTERFACE_DEFINED__ */



#ifndef __ATLVERSIONEDINTERFACESERVERLib_LIBRARY_DEFINED__
#define __ATLVERSIONEDINTERFACESERVERLib_LIBRARY_DEFINED__

/* library ATLVERSIONEDINTERFACESERVERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ATLVERSIONEDINTERFACESERVERLib;

EXTERN_C const CLSID CLSID_Foo;

#ifdef __cplusplus

class DECLSPEC_UUID("67BF3E05-E310-46CC-B16D-A34474EA1B01")
Foo;
#endif
#endif /* __ATLVERSIONEDINTERFACESERVERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

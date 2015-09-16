/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Dec 14 10:03:57 2001
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 3\CustomIDLServer\CustomIDLServer.idl:
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

#ifndef __CustomIDLServer_h__
#define __CustomIDLServer_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IFoo_FWD_DEFINED__
#define __IFoo_FWD_DEFINED__
typedef interface IFoo IFoo;
#endif 	/* __IFoo_FWD_DEFINED__ */


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
/* [unique][helpstring][custom][uuid][object] */ 


EXTERN_C const IID IID_IFoo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("267943B0-50E4-400C-8F79-4B68D4A839FA")
    IFoo : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MethodA( void) = 0;
        
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *MethodA )( 
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


#define IFoo_MethodA(This)	\
    (This)->lpVtbl -> MethodA(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IFoo_MethodA_Proxy( 
    IFoo __RPC_FAR * This);


void __RPC_STUB IFoo_MethodA_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFoo_INTERFACE_DEFINED__ */



#ifndef __CUSTOMIDLSERVERLib_LIBRARY_DEFINED__
#define __CUSTOMIDLSERVERLib_LIBRARY_DEFINED__

/* library CUSTOMIDLSERVERLib */
/* [custom][helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CUSTOMIDLSERVERLib;

EXTERN_C const CLSID CLSID_Foo;

#ifdef __cplusplus

class DECLSPEC_UUID("EA0AF1B1-5EA7-4352-AF6D-E78606614CCA")
Foo;
#endif
#endif /* __CUSTOMIDLSERVERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

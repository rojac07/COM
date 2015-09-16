/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Mar 03 16:28:19 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 12\AnotherAtlCarServer\AnotherAtlCarServer.idl:
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

#ifndef __AnotherAtlCarServer_h__
#define __AnotherAtlCarServer_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IStartable_FWD_DEFINED__
#define __IStartable_FWD_DEFINED__
typedef interface IStartable IStartable;
#endif 	/* __IStartable_FWD_DEFINED__ */


#ifndef __IStoppable_FWD_DEFINED__
#define __IStoppable_FWD_DEFINED__
typedef interface IStoppable IStoppable;
#endif 	/* __IStoppable_FWD_DEFINED__ */


#ifndef __CoTruck_FWD_DEFINED__
#define __CoTruck_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoTruck CoTruck;
#else
typedef struct CoTruck CoTruck;
#endif /* __cplusplus */

#endif 	/* __CoTruck_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IStartable_INTERFACE_DEFINED__
#define __IStartable_INTERFACE_DEFINED__

/* interface IStartable */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IStartable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7FE41805-124B-44AE-BEAE-C3491E35372B")
    IStartable : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStartableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IStartable __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IStartable __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IStartable __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Start )( 
            IStartable __RPC_FAR * This);
        
        END_INTERFACE
    } IStartableVtbl;

    interface IStartable
    {
        CONST_VTBL struct IStartableVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStartable_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IStartable_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IStartable_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IStartable_Start(This)	\
    (This)->lpVtbl -> Start(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IStartable_Start_Proxy( 
    IStartable __RPC_FAR * This);


void __RPC_STUB IStartable_Start_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IStartable_INTERFACE_DEFINED__ */


#ifndef __IStoppable_INTERFACE_DEFINED__
#define __IStoppable_INTERFACE_DEFINED__

/* interface IStoppable */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IStoppable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B001A308-8D66-4d23-84A4-B67615646ABB")
    IStoppable : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Break( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStoppableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IStoppable __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IStoppable __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IStoppable __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Break )( 
            IStoppable __RPC_FAR * This);
        
        END_INTERFACE
    } IStoppableVtbl;

    interface IStoppable
    {
        CONST_VTBL struct IStoppableVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStoppable_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IStoppable_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IStoppable_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IStoppable_Break(This)	\
    (This)->lpVtbl -> Break(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IStoppable_Break_Proxy( 
    IStoppable __RPC_FAR * This);


void __RPC_STUB IStoppable_Break_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IStoppable_INTERFACE_DEFINED__ */



#ifndef __ANOTHERATLCARSERVERLib_LIBRARY_DEFINED__
#define __ANOTHERATLCARSERVERLib_LIBRARY_DEFINED__

/* library ANOTHERATLCARSERVERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ANOTHERATLCARSERVERLib;

EXTERN_C const CLSID CLSID_CoTruck;

#ifdef __cplusplus

class DECLSPEC_UUID("862C5338-8AD7-43A3-A9A7-F21B145D61D0")
CoTruck;
#endif
#endif /* __ANOTHERATLCARSERVERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

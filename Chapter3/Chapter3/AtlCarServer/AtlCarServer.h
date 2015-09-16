/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Sep 16 15:55:46 2015
 */
/* Compiler settings for C:\Learning\COM\Chapter3\Chapter3\AtlCarServer\AtlCarServer.idl:
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

#ifndef __AtlCarServer_h__
#define __AtlCarServer_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IComCar_FWD_DEFINED__
#define __IComCar_FWD_DEFINED__
typedef interface IComCar IComCar;
#endif 	/* __IComCar_FWD_DEFINED__ */


#ifndef __ITurbo_FWD_DEFINED__
#define __ITurbo_FWD_DEFINED__
typedef interface ITurbo ITurbo;
#endif 	/* __ITurbo_FWD_DEFINED__ */


#ifndef __IJet_FWD_DEFINED__
#define __IJet_FWD_DEFINED__
typedef interface IJet IJet;
#endif 	/* __IJet_FWD_DEFINED__ */


#ifndef __IComBoat_FWD_DEFINED__
#define __IComBoat_FWD_DEFINED__
typedef interface IComBoat IComBoat;
#endif 	/* __IComBoat_FWD_DEFINED__ */


#ifndef __ComCar_FWD_DEFINED__
#define __ComCar_FWD_DEFINED__

#ifdef __cplusplus
typedef class ComCar ComCar;
#else
typedef struct ComCar ComCar;
#endif /* __cplusplus */

#endif 	/* __ComCar_FWD_DEFINED__ */


#ifndef __JetPlane_FWD_DEFINED__
#define __JetPlane_FWD_DEFINED__

#ifdef __cplusplus
typedef class JetPlane JetPlane;
#else
typedef struct JetPlane JetPlane;
#endif /* __cplusplus */

#endif 	/* __JetPlane_FWD_DEFINED__ */


#ifndef __ComBoat_FWD_DEFINED__
#define __ComBoat_FWD_DEFINED__

#ifdef __cplusplus
typedef class ComBoat ComBoat;
#else
typedef struct ComBoat ComBoat;
#endif /* __cplusplus */

#endif 	/* __ComBoat_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_AtlCarServer_0000 */
/* [local] */ 

typedef 
enum RADIOTYPE
    {	EIGHT_TRACK	= 0,
	CD	= EIGHT_TRACK + 1,
	AM_RADIO	= CD + 1,
	FM_RADIO	= AM_RADIO + 1,
	NONE	= FM_RADIO + 1,
	NONE1	= NONE + 1
    }	RADIOTYPE;



extern RPC_IF_HANDLE __MIDL_itf_AtlCarServer_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AtlCarServer_0000_v0_0_s_ifspec;

#ifndef __IComCar_INTERFACE_DEFINED__
#define __IComCar_INTERFACE_DEFINED__

/* interface IComCar */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IComCar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B836F694-809C-4F12-A423-BBE031B1BB2A")
    IComCar : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SpeedUp( 
            /* [in] */ long delta) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TurnOnRadio( 
            /* [in] */ RADIOTYPE make) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IComCarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IComCar __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IComCar __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IComCar __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SpeedUp )( 
            IComCar __RPC_FAR * This,
            /* [in] */ long delta);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TurnOnRadio )( 
            IComCar __RPC_FAR * This,
            /* [in] */ RADIOTYPE make);
        
        END_INTERFACE
    } IComCarVtbl;

    interface IComCar
    {
        CONST_VTBL struct IComCarVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComCar_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IComCar_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IComCar_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IComCar_SpeedUp(This,delta)	\
    (This)->lpVtbl -> SpeedUp(This,delta)

#define IComCar_TurnOnRadio(This,make)	\
    (This)->lpVtbl -> TurnOnRadio(This,make)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IComCar_SpeedUp_Proxy( 
    IComCar __RPC_FAR * This,
    /* [in] */ long delta);


void __RPC_STUB IComCar_SpeedUp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IComCar_TurnOnRadio_Proxy( 
    IComCar __RPC_FAR * This,
    /* [in] */ RADIOTYPE make);


void __RPC_STUB IComCar_TurnOnRadio_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IComCar_INTERFACE_DEFINED__ */


#ifndef __ITurbo_INTERFACE_DEFINED__
#define __ITurbo_INTERFACE_DEFINED__

/* interface ITurbo */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ITurbo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E98B898C-5C0A-4318-AFCB-541695E4945D")
    ITurbo : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TurboBlast( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITurboVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITurbo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITurbo __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITurbo __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TurboBlast )( 
            ITurbo __RPC_FAR * This);
        
        END_INTERFACE
    } ITurboVtbl;

    interface ITurbo
    {
        CONST_VTBL struct ITurboVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITurbo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITurbo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITurbo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITurbo_TurboBlast(This)	\
    (This)->lpVtbl -> TurboBlast(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ITurbo_TurboBlast_Proxy( 
    ITurbo __RPC_FAR * This);


void __RPC_STUB ITurbo_TurboBlast_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITurbo_INTERFACE_DEFINED__ */


#ifndef __IJet_INTERFACE_DEFINED__
#define __IJet_INTERFACE_DEFINED__

/* interface IJet */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IJet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("011BF6AC-3C5D-420E-A1B6-2221FE6C8FC5")
    IJet : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TakeOff( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IJetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IJet __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IJet __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IJet __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *TakeOff )( 
            IJet __RPC_FAR * This);
        
        END_INTERFACE
    } IJetVtbl;

    interface IJet
    {
        CONST_VTBL struct IJetVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJet_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IJet_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IJet_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IJet_TakeOff(This)	\
    (This)->lpVtbl -> TakeOff(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IJet_TakeOff_Proxy( 
    IJet __RPC_FAR * This);


void __RPC_STUB IJet_TakeOff_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IJet_INTERFACE_DEFINED__ */


#ifndef __IComBoat_INTERFACE_DEFINED__
#define __IComBoat_INTERFACE_DEFINED__

/* interface IComBoat */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IComBoat;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56C51EA3-47EB-4FCF-B546-8869B969782D")
    IComBoat : public IUnknown
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IComBoatVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IComBoat __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IComBoat __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IComBoat __RPC_FAR * This);
        
        END_INTERFACE
    } IComBoatVtbl;

    interface IComBoat
    {
        CONST_VTBL struct IComBoatVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComBoat_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IComBoat_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IComBoat_Release(This)	\
    (This)->lpVtbl -> Release(This)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComBoat_INTERFACE_DEFINED__ */



#ifndef __ATLCARSERVERLib_LIBRARY_DEFINED__
#define __ATLCARSERVERLib_LIBRARY_DEFINED__

/* library ATLCARSERVERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ATLCARSERVERLib;

EXTERN_C const CLSID CLSID_ComCar;

#ifdef __cplusplus

class DECLSPEC_UUID("3C4F2B7A-F23E-47A7-ACF0-224DDDAD1D83")
ComCar;
#endif

EXTERN_C const CLSID CLSID_JetPlane;

#ifdef __cplusplus

class DECLSPEC_UUID("F37C6BDC-F790-45A9-91CA-1A3DCDAC7C42")
JetPlane;
#endif

EXTERN_C const CLSID CLSID_ComBoat;

#ifdef __cplusplus

class DECLSPEC_UUID("762363AD-24EA-4D0D-8D59-BBAD50CC2681")
ComBoat;
#endif
#endif /* __ATLCARSERVERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

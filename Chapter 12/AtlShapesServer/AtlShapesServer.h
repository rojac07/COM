/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Mar 03 16:51:22 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 12\AtlShapesServer\AtlShapesServer.idl:
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

#ifndef __AtlShapesServer_h__
#define __AtlShapesServer_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IDrawable_FWD_DEFINED__
#define __IDrawable_FWD_DEFINED__
typedef interface IDrawable IDrawable;
#endif 	/* __IDrawable_FWD_DEFINED__ */


#ifndef __CoHexagon_FWD_DEFINED__
#define __CoHexagon_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoHexagon CoHexagon;
#else
typedef struct CoHexagon CoHexagon;
#endif /* __cplusplus */

#endif 	/* __CoHexagon_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_AtlShapesServer_0000 */
/* [local] */ 

typedef 
enum SHAPECOLOR
    {	RED	= 0,
	PINK	= RED + 1,
	RUST	= PINK + 1
    }	SHAPECOLOR;



extern RPC_IF_HANDLE __MIDL_itf_AtlShapesServer_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AtlShapesServer_0000_v0_0_s_ifspec;

#ifndef __IDrawable_INTERFACE_DEFINED__
#define __IDrawable_INTERFACE_DEFINED__

/* interface IDrawable */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDrawable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B1691C03-7EA8-4DAB-86CC-7D6CD859671A")
    IDrawable : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ int top,
            /* [in] */ int left,
            /* [in] */ int bottom,
            /* [in] */ int right) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetColor( 
            /* [in] */ SHAPECOLOR c) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDrawableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDrawable __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDrawable __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDrawable __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDrawable __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDrawable __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDrawable __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDrawable __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Draw )( 
            IDrawable __RPC_FAR * This,
            /* [in] */ int top,
            /* [in] */ int left,
            /* [in] */ int bottom,
            /* [in] */ int right);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetColor )( 
            IDrawable __RPC_FAR * This,
            /* [in] */ SHAPECOLOR c);
        
        END_INTERFACE
    } IDrawableVtbl;

    interface IDrawable
    {
        CONST_VTBL struct IDrawableVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDrawable_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDrawable_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDrawable_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDrawable_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDrawable_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDrawable_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDrawable_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDrawable_Draw(This,top,left,bottom,right)	\
    (This)->lpVtbl -> Draw(This,top,left,bottom,right)

#define IDrawable_SetColor(This,c)	\
    (This)->lpVtbl -> SetColor(This,c)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDrawable_Draw_Proxy( 
    IDrawable __RPC_FAR * This,
    /* [in] */ int top,
    /* [in] */ int left,
    /* [in] */ int bottom,
    /* [in] */ int right);


void __RPC_STUB IDrawable_Draw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IDrawable_SetColor_Proxy( 
    IDrawable __RPC_FAR * This,
    /* [in] */ SHAPECOLOR c);


void __RPC_STUB IDrawable_SetColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDrawable_INTERFACE_DEFINED__ */



#ifndef __ATLSHAPESSERVERLib_LIBRARY_DEFINED__
#define __ATLSHAPESSERVERLib_LIBRARY_DEFINED__

/* library ATLSHAPESSERVERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ATLSHAPESSERVERLib;

EXTERN_C const CLSID CLSID_CoHexagon;

#ifdef __cplusplus

class DECLSPEC_UUID("204F9A4B-4D22-451B-BE2F-338F2917E7F5")
CoHexagon;
#endif
#endif /* __ATLSHAPESSERVERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

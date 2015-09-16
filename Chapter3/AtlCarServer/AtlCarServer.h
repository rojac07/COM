/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Sep 16 10:18:18 2015
 */
/* Compiler settings for C:\New folder\COM\Chapter3\AtlCarServer\AtlCarServer.idl:
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


#ifndef __ComCar_FWD_DEFINED__
#define __ComCar_FWD_DEFINED__

#ifdef __cplusplus
typedef class ComCar ComCar;
#else
typedef struct ComCar ComCar;
#endif /* __cplusplus */

#endif 	/* __ComCar_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IComCar_INTERFACE_DEFINED__
#define __IComCar_INTERFACE_DEFINED__

/* interface IComCar */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IComCar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("900099E7-ADD4-4847-B369-715EE0CD6EBD")
    IComCar : public IUnknown
    {
    public:
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


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComCar_INTERFACE_DEFINED__ */



#ifndef __ATLCARSERVERLib_LIBRARY_DEFINED__
#define __ATLCARSERVERLib_LIBRARY_DEFINED__

/* library ATLCARSERVERLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ATLCARSERVERLib;

EXTERN_C const CLSID CLSID_ComCar;

#ifdef __cplusplus

class DECLSPEC_UUID("9BE1798A-37E4-4E2D-BAB2-A36C8947FD41")
ComCar;
#endif
#endif /* __ATLCARSERVERLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

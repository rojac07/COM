/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Mar 03 16:28:19 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 12\AnotherAtlCarServer\AnotherAtlCarServer.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 440
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "AnotherAtlCarServer.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   23                                

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IStartable, ver. 0.0,
   GUID={0x7FE41805,0x124B,0x44AE,{0xBE,0xAE,0xC3,0x49,0x1E,0x35,0x37,0x2B}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStartable_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IStartable_FormatStringOffsetTable[] = 
    {
    0
    };

static const MIDL_SERVER_INFO IStartable_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IStartable_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IStartable_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IStartable_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IStartableProxyVtbl = 
{
    &IStartable_ProxyInfo,
    &IID_IStartable,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IStartable::Start */
};

const CInterfaceStubVtbl _IStartableStubVtbl =
{
    &IID_IStartable,
    &IStartable_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IStoppable, ver. 0.0,
   GUID={0xB001A308,0x8D66,0x4d23,{0x84,0xA4,0xB6,0x76,0x15,0x64,0x6A,0xBB}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStoppable_ServerInfo;

#pragma code_seg(".orpc")

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x50100a4, /* MIDL Version 5.1.164 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    1,  /* Flags */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static const unsigned short IStoppable_FormatStringOffsetTable[] = 
    {
    0
    };

static const MIDL_SERVER_INFO IStoppable_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IStoppable_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IStoppable_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IStoppable_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IStoppableProxyVtbl = 
{
    &IStoppable_ProxyInfo,
    &IID_IStoppable,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IStoppable::Break */
};

const CInterfaceStubVtbl _IStoppableStubVtbl =
{
    &IID_IStoppable,
    &IStoppable_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#pragma data_seg(".rdata")

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub because it uses these features:
#error   -Oif or -Oicf, more than 32 methods in the interface.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Break */


	/* Procedure Start */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */

/* 16 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };

const CInterfaceProxyVtbl * _AnotherAtlCarServer_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IStartableProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStoppableProxyVtbl,
    0
};

const CInterfaceStubVtbl * _AnotherAtlCarServer_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IStartableStubVtbl,
    ( CInterfaceStubVtbl *) &_IStoppableStubVtbl,
    0
};

PCInterfaceName const _AnotherAtlCarServer_InterfaceNamesList[] = 
{
    "IStartable",
    "IStoppable",
    0
};


#define _AnotherAtlCarServer_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _AnotherAtlCarServer, pIID, n)

int __stdcall _AnotherAtlCarServer_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _AnotherAtlCarServer, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _AnotherAtlCarServer, 2, *pIndex )
    
}

const ExtendedProxyFileInfo AnotherAtlCarServer_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _AnotherAtlCarServer_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _AnotherAtlCarServer_StubVtblList,
    (const PCInterfaceName * ) & _AnotherAtlCarServer_InterfaceNamesList,
    0, // no delegation
    & _AnotherAtlCarServer_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};

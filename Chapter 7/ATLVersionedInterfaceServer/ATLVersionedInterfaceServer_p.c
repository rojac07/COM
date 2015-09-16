/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Mar 03 10:19:29 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 12\ATLVersionedInterfaceServer\ATLVersionedInterfaceServer.idl:
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


#include "ATLVersionedInterfaceServer.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   67                                

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


/* Object interface: IFoo, ver. 0.0,
   GUID={0x402464FE,0xF5B1,0x4859,{0x86,0x5F,0x18,0xAC,0x88,0xA5,0xD1,0x98}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFoo_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IFoo_FormatStringOffsetTable[] = 
    {
    0
    };

static const MIDL_SERVER_INFO IFoo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IFoo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFoo_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IFoo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IFooProxyVtbl = 
{
    &IFoo_ProxyInfo,
    &IID_IFoo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IFoo::A */
};

const CInterfaceStubVtbl _IFooStubVtbl =
{
    &IID_IFoo,
    &IFoo_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IFoo2, ver. 0.0,
   GUID={0x1646992B,0xB7DF,0x429b,{0xA8,0x9A,0xD1,0x96,0xDC,0xD8,0x2B,0xF3}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFoo2_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IFoo2_FormatStringOffsetTable[] = 
    {
    0,
    22
    };

static const MIDL_SERVER_INFO IFoo2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IFoo2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFoo2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IFoo2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IFoo2ProxyVtbl = 
{
    &IFoo2_ProxyInfo,
    &IID_IFoo2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IFoo::A */ ,
    (void *)-1 /* IFoo2::B */
};

const CInterfaceStubVtbl _IFoo2StubVtbl =
{
    &IID_IFoo2,
    &IFoo2_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IFoo3, ver. 0.0,
   GUID={0x9FD7DBEC,0x497D,0x44cc,{0x9E,0x44,0x21,0x8A,0xC3,0x94,0x83,0x28}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFoo3_ServerInfo;

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

static const unsigned short IFoo3_FormatStringOffsetTable[] = 
    {
    0,
    22,
    44
    };

static const MIDL_SERVER_INFO IFoo3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IFoo3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFoo3_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IFoo3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _IFoo3ProxyVtbl = 
{
    &IFoo3_ProxyInfo,
    &IID_IFoo3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IFoo::A */ ,
    (void *)-1 /* IFoo2::B */ ,
    (void *)-1 /* IFoo3::C */
};

const CInterfaceStubVtbl _IFoo3StubVtbl =
{
    &IID_IFoo3,
    &IFoo3_ServerInfo,
    6,
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

	/* Procedure A */

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

/* 16 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure B */

/* 22 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 24 */	NdrFcLong( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 32 */	NdrFcShort( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x8 ),	/* 8 */
/* 36 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 40 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure C */

/* 44 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 60 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 62 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 64 */	0x8,		/* FC_LONG */
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

const CInterfaceProxyVtbl * _ATLVersionedInterfaceServer_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IFoo2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFoo3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFooProxyVtbl,
    0
};

const CInterfaceStubVtbl * _ATLVersionedInterfaceServer_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IFoo2StubVtbl,
    ( CInterfaceStubVtbl *) &_IFoo3StubVtbl,
    ( CInterfaceStubVtbl *) &_IFooStubVtbl,
    0
};

PCInterfaceName const _ATLVersionedInterfaceServer_InterfaceNamesList[] = 
{
    "IFoo2",
    "IFoo3",
    "IFoo",
    0
};


#define _ATLVersionedInterfaceServer_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ATLVersionedInterfaceServer, pIID, n)

int __stdcall _ATLVersionedInterfaceServer_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ATLVersionedInterfaceServer, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ATLVersionedInterfaceServer, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ATLVersionedInterfaceServer, 3, *pIndex )
    
}

const ExtendedProxyFileInfo ATLVersionedInterfaceServer_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ATLVersionedInterfaceServer_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ATLVersionedInterfaceServer_StubVtblList,
    (const PCInterfaceName * ) & _ATLVersionedInterfaceServer_InterfaceNamesList,
    0, // no delegation
    & _ATLVersionedInterfaceServer_IID_Lookup, 
    3,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};

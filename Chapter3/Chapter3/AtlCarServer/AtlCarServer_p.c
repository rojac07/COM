/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Sep 17 15:31:33 2015
 */
/* Compiler settings for C:\Learning\COM\Chapter3\Chapter3\AtlCarServer\AtlCarServer.idl:
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


#include "AtlCarServer.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   79                                

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


/* Standard interface: __MIDL_itf_AtlCarServer_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IComCar, ver. 0.0,
   GUID={0xB836F694,0x809C,0x4F12,{0xA4,0x23,0xBB,0xE0,0x31,0xB1,0xBB,0x2A}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IComCar_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IComCar_FormatStringOffsetTable[] = 
    {
    0,
    28
    };

static const MIDL_SERVER_INFO IComCar_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IComCar_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IComCar_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IComCar_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IComCarProxyVtbl = 
{
    &IComCar_ProxyInfo,
    &IID_IComCar,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IComCar::SpeedUp */ ,
    (void *)-1 /* IComCar::TurnOnRadio */
};

const CInterfaceStubVtbl _IComCarStubVtbl =
{
    &IID_IComCar,
    &IComCar_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITurboBoat, ver. 0.0,
   GUID={0xEE6EBFBB,0x3DA6,0x4cce,{0xA8,0x67,0x03,0x24,0x1E,0x47,0x65,0x59}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITurboBoat_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITurboBoat_FormatStringOffsetTable[] = 
    {
    56
    };

static const MIDL_SERVER_INFO ITurboBoat_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITurboBoat_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITurboBoat_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITurboBoat_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _ITurboBoatProxyVtbl = 
{
    &ITurboBoat_ProxyInfo,
    &IID_ITurboBoat,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITurboBoat::TurboSwimming */
};

const CInterfaceStubVtbl _ITurboBoatStubVtbl =
{
    &IID_ITurboBoat,
    &ITurboBoat_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITurbo, ver. 0.0,
   GUID={0xE98B898C,0x5C0A,0x4318,{0xAF,0xCB,0x54,0x16,0x95,0xE4,0x94,0x5D}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITurbo_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITurbo_FormatStringOffsetTable[] = 
    {
    56
    };

static const MIDL_SERVER_INFO ITurbo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITurbo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITurbo_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITurbo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _ITurboProxyVtbl = 
{
    &ITurbo_ProxyInfo,
    &IID_ITurbo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITurbo::TurboBlast */
};

const CInterfaceStubVtbl _ITurboStubVtbl =
{
    &IID_ITurbo,
    &ITurbo_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IJet, ver. 0.0,
   GUID={0x011BF6AC,0x3C5D,0x420E,{0xA1,0xB6,0x22,0x21,0xFE,0x6C,0x8F,0xC5}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IJet_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IJet_FormatStringOffsetTable[] = 
    {
    56
    };

static const MIDL_SERVER_INFO IJet_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IJet_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IJet_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IJet_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IJetProxyVtbl = 
{
    &IJet_ProxyInfo,
    &IID_IJet,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IJet::TakeOff */
};

const CInterfaceStubVtbl _IJetStubVtbl =
{
    &IID_IJet,
    &IJet_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IComBoat, ver. 0.0,
   GUID={0x56C51EA3,0x47EB,0x4FCF,{0xB5,0x46,0x88,0x69,0xB9,0x69,0x78,0x2D}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IComBoat_ServerInfo;

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

static const unsigned short IComBoat_FormatStringOffsetTable[] = 
    {
    56
    };

static const MIDL_SERVER_INFO IComBoat_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IComBoat_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IComBoat_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IComBoat_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IComBoatProxyVtbl = 
{
    &IComBoat_ProxyInfo,
    &IID_IComBoat,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IComBoat::Swimming */
};

const CInterfaceStubVtbl _IComBoatStubVtbl =
{
    &IID_IComBoat,
    &IComBoat_ServerInfo,
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

	/* Procedure SpeedUp */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter delta */

/* 16 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 22 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TurnOnRadio */

/* 28 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 30 */	NdrFcLong( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 38 */	NdrFcShort( 0x6 ),	/* 6 */
/* 40 */	NdrFcShort( 0x8 ),	/* 8 */
/* 42 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter make */

/* 44 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 48 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 50 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 54 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Swimming */


	/* Procedure TakeOff */


	/* Procedure TurboBlast */


	/* Procedure TurboSwimming */

/* 56 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 58 */	NdrFcLong( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 76 */	0x8,		/* FC_LONG */
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

const CInterfaceProxyVtbl * _AtlCarServer_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ITurboProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IComCarProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IComBoatProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IJetProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITurboBoatProxyVtbl,
    0
};

const CInterfaceStubVtbl * _AtlCarServer_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ITurboStubVtbl,
    ( CInterfaceStubVtbl *) &_IComCarStubVtbl,
    ( CInterfaceStubVtbl *) &_IComBoatStubVtbl,
    ( CInterfaceStubVtbl *) &_IJetStubVtbl,
    ( CInterfaceStubVtbl *) &_ITurboBoatStubVtbl,
    0
};

PCInterfaceName const _AtlCarServer_InterfaceNamesList[] = 
{
    "ITurbo",
    "IComCar",
    "IComBoat",
    "IJet",
    "ITurboBoat",
    0
};


#define _AtlCarServer_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _AtlCarServer, pIID, n)

int __stdcall _AtlCarServer_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _AtlCarServer, 5, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _AtlCarServer, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _AtlCarServer, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _AtlCarServer, 5, *pIndex )
    
}

const ExtendedProxyFileInfo AtlCarServer_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _AtlCarServer_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _AtlCarServer_StubVtblList,
    (const PCInterfaceName * ) & _AtlCarServer_InterfaceNamesList,
    0, // no delegation
    & _AtlCarServer_IID_Lookup, 
    5,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};

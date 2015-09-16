/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Mar 06 22:33:27 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 4\WidgetServer\WidgetServer.idl:
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


#include "WidgetServer.h"

#define TYPE_FORMAT_STRING_SIZE   1005                              
#define PROC_FORMAT_STRING_SIZE   255                               

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


/* Standard interface: __MIDL_itf_WidgetServer_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IParams, ver. 0.0,
   GUID={0xF11657E4,0x8C9E,0x40EB,{0x8A,0xFD,0x31,0x2B,0xBD,0x9D,0x60,0x6C}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IParams_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IParams_FormatStringOffsetTable[] = 
    {
    0,
    34,
    68,
    102
    };

static const MIDL_SERVER_INFO IParams_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IParams_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IParams_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IParams_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IParamsProxyVtbl = 
{
    &IParams_ProxyInfo,
    &IID_IParams,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IParams::InParamsOnly */ ,
    (void *)-1 /* IParams::OutParamsOnly */ ,
    (void *)-1 /* IParams::InAndOutParams */ ,
    (void *)-1 /* IParams::SumByRetVal */
};

const CInterfaceStubVtbl _IParamsStubVtbl =
{
    &IID_IParams,
    &IParams_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISafeArray, ver. 0.0,
   GUID={0xDB6803AC,0xF6E9,0x426c,{0xAD,0xCA,0x39,0x5B,0x10,0xEB,0x52,0x29}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISafeArray_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ISafeArray_FormatStringOffsetTable[] = 
    {
    142,
    170
    };

static const MIDL_SERVER_INFO ISafeArray_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISafeArray_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISafeArray_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISafeArray_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _ISafeArrayProxyVtbl = 
{
    &ISafeArray_ProxyInfo,
    &IID_ISafeArray,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ISafeArray::UseThisSafeArray */ ,
    (void *)-1 /* ISafeArray::GiveMeSomeStrings */
};

const CInterfaceStubVtbl _ISafeArrayStubVtbl =
{
    &IID_ISafeArray,
    &ISafeArray_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IGlobalObject, ver. 0.0,
   GUID={0x734CA6D8,0x8F66,0x4DDC,{0xBB,0x25,0x34,0x87,0x5B,0x1F,0xBC,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IGlobalObject_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IGlobalObject_FormatStringOffsetTable[] = 
    {
    198
    };

static const MIDL_SERVER_INFO IGlobalObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IGlobalObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IGlobalObject_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IGlobalObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IGlobalObjectProxyVtbl = 
{
    &IGlobalObject_ProxyInfo,
    &IID_IGlobalObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IGlobalObject::SomeMethod */
};

const CInterfaceStubVtbl _IGlobalObjectStubVtbl =
{
    &IID_IGlobalObject,
    &IGlobalObject_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IDraw, ver. 0.0,
   GUID={0x3CBEA169,0xBBE9,0x4A28,{0xB5,0xAA,0x2E,0x7C,0x55,0x94,0x50,0x7E}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDraw_ServerInfo;

#pragma code_seg(".orpc")
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[1];

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
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    1,  /* Flags */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static const unsigned short IDraw_FormatStringOffsetTable[] = 
    {
    220
    };

static const MIDL_SERVER_INFO IDraw_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDraw_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDraw_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDraw_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IDrawProxyVtbl = 
{
    &IDraw_ProxyInfo,
    &IID_IDraw,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IDraw::DrawALine */
};

const CInterfaceStubVtbl _IDrawStubVtbl =
{
    &IID_IDraw,
    &IDraw_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[1] = 
        {
            
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            }

        };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub because it uses these features:
#error   -Oif or -Oicf, [wire_marshal] or [user_marshal] attribute, more than 32 methods in the interface.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure InParamsOnly */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 10 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x4,		/* Oi2 Flags:  has return, */
			0x3,		/* 3 */

	/* Parameter x */

/* 16 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 22 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 28 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 32 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OutParamsOnly */

/* 34 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 36 */	NdrFcLong( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 42 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x18 ),	/* 24 */
/* 48 */	0x4,		/* Oi2 Flags:  has return, */
			0x3,		/* 3 */

	/* Parameter x */

/* 50 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 54 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 56 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 60 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 62 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 66 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InAndOutParams */

/* 68 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 70 */	NdrFcLong( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 76 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 78 */	NdrFcShort( 0x10 ),	/* 16 */
/* 80 */	NdrFcShort( 0x18 ),	/* 24 */
/* 82 */	0x4,		/* Oi2 Flags:  has return, */
			0x3,		/* 3 */

	/* Parameter x */

/* 84 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 90 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SumByRetVal */

/* 102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 112 */	NdrFcShort( 0x10 ),	/* 16 */
/* 114 */	NdrFcShort( 0x10 ),	/* 16 */
/* 116 */	0x4,		/* Oi2 Flags:  has return, */
			0x4,		/* 4 */

	/* Parameter x */

/* 118 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 120 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 126 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter answer */

/* 130 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 132 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 138 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UseThisSafeArray */

/* 142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 150 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppStrings */

/* 158 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
#ifndef _ALPHA_
/* 160 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 162 */	NdrFcShort( 0x3c8 ),	/* Type Offset=968 */

	/* Return value */

/* 164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 166 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GiveMeSomeStrings */

/* 170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 178 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 184 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppStrings */

/* 186 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
#ifndef _ALPHA_
/* 188 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 190 */	NdrFcShort( 0x3de ),	/* Type Offset=990 */

	/* Return value */

/* 192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 194 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SomeMethod */

/* 198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 206 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 212 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 216 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DrawALine */

/* 220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 228 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 230 */	NdrFcShort( 0x20 ),	/* 32 */
/* 232 */	NdrFcShort( 0x28 ),	/* 40 */
/* 234 */	0x4,		/* Oi2 Flags:  has return, */
			0x3,		/* 3 */

	/* Parameter p1 */

/* 236 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
#ifndef _ALPHA_
/* 238 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 240 */	NdrFcShort( 0x3a0 ),	/* Type Offset=928 */

	/* Parameter p2 */

/* 242 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
#ifndef _ALPHA_
/* 244 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 246 */	NdrFcShort( 0x3a0 ),	/* Type Offset=928 */

	/* Return value */

/* 248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 250 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  8 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0x0,	/* FC_RP */
/* 12 */	NdrFcShort( 0x3bc ),	/* Offset= 956 (968) */
/* 14 */	
			0x12, 0x10,	/* FC_UP */
/* 16 */	NdrFcShort( 0x2 ),	/* Offset= 2 (18) */
/* 18 */	
			0x12, 0x0,	/* FC_UP */
/* 20 */	NdrFcShort( 0x3a2 ),	/* Offset= 930 (950) */
/* 22 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 24 */	NdrFcShort( 0x18 ),	/* 24 */
/* 26 */	NdrFcShort( 0xa ),	/* 10 */
/* 28 */	NdrFcLong( 0x8 ),	/* 8 */
/* 32 */	NdrFcShort( 0x6c ),	/* Offset= 108 (140) */
/* 34 */	NdrFcLong( 0xd ),	/* 13 */
/* 38 */	NdrFcShort( 0x9e ),	/* Offset= 158 (196) */
/* 40 */	NdrFcLong( 0x9 ),	/* 9 */
/* 44 */	NdrFcShort( 0xcc ),	/* Offset= 204 (248) */
/* 46 */	NdrFcLong( 0xc ),	/* 12 */
/* 50 */	NdrFcShort( 0x292 ),	/* Offset= 658 (708) */
/* 52 */	NdrFcLong( 0x24 ),	/* 36 */
/* 56 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (754) */
/* 58 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 62 */	NdrFcShort( 0x2d6 ),	/* Offset= 726 (788) */
/* 64 */	NdrFcLong( 0x10 ),	/* 16 */
/* 68 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (818) */
/* 70 */	NdrFcLong( 0x2 ),	/* 2 */
/* 74 */	NdrFcShort( 0x306 ),	/* Offset= 774 (848) */
/* 76 */	NdrFcLong( 0x3 ),	/* 3 */
/* 80 */	NdrFcShort( 0x31e ),	/* Offset= 798 (878) */
/* 82 */	NdrFcLong( 0x14 ),	/* 20 */
/* 86 */	NdrFcShort( 0x336 ),	/* Offset= 822 (908) */
/* 88 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (87) */
/* 90 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 92 */	NdrFcShort( 0x2 ),	/* 2 */
/* 94 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 96 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 98 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 100 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (90) */
/* 106 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 108 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 110 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 112 */	NdrFcShort( 0x4 ),	/* 4 */
/* 114 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 120 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 122 */	NdrFcShort( 0x4 ),	/* 4 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	0x12, 0x0,	/* FC_UP */
/* 134 */	NdrFcShort( 0xffffffde ),	/* Offset= -34 (100) */
/* 136 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 138 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 140 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 146 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 152 */	0x11, 0x0,	/* FC_RP */
/* 154 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (110) */
/* 156 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 158 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 160 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 172 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 174 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 176 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 178 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 190 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 192 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (160) */
/* 194 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 196 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x6 ),	/* Offset= 6 (208) */
/* 204 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 206 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 208 */	
			0x11, 0x0,	/* FC_RP */
/* 210 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (178) */
/* 212 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 214 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 224 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 226 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 228 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 230 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 242 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (212) */
/* 246 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 248 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x6 ),	/* Offset= 6 (260) */
/* 256 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 258 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 260 */	
			0x11, 0x0,	/* FC_RP */
/* 262 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (230) */
/* 264 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 266 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 268 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 270 */	NdrFcShort( 0x2 ),	/* Offset= 2 (272) */
/* 272 */	NdrFcShort( 0x10 ),	/* 16 */
/* 274 */	NdrFcShort( 0x2b ),	/* 43 */
/* 276 */	NdrFcLong( 0x3 ),	/* 3 */
/* 280 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 282 */	NdrFcLong( 0x11 ),	/* 17 */
/* 286 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 288 */	NdrFcLong( 0x2 ),	/* 2 */
/* 292 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 294 */	NdrFcLong( 0x4 ),	/* 4 */
/* 298 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 300 */	NdrFcLong( 0x5 ),	/* 5 */
/* 304 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 306 */	NdrFcLong( 0xb ),	/* 11 */
/* 310 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 312 */	NdrFcLong( 0xa ),	/* 10 */
/* 316 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 318 */	NdrFcLong( 0x6 ),	/* 6 */
/* 322 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (536) */
/* 324 */	NdrFcLong( 0x7 ),	/* 7 */
/* 328 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 330 */	NdrFcLong( 0x8 ),	/* 8 */
/* 334 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (542) */
/* 336 */	NdrFcLong( 0xd ),	/* 13 */
/* 340 */	NdrFcShort( 0xffffff4c ),	/* Offset= -180 (160) */
/* 342 */	NdrFcLong( 0x9 ),	/* 9 */
/* 346 */	NdrFcShort( 0xffffff7a ),	/* Offset= -134 (212) */
/* 348 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 352 */	NdrFcShort( 0xc2 ),	/* Offset= 194 (546) */
/* 354 */	NdrFcLong( 0x24 ),	/* 36 */
/* 358 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (550) */
/* 360 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 364 */	NdrFcShort( 0xba ),	/* Offset= 186 (550) */
/* 366 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 370 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (602) */
/* 372 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 376 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (606) */
/* 378 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 382 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (610) */
/* 384 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 388 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (614) */
/* 390 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 394 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (618) */
/* 396 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 400 */	NdrFcShort( 0xce ),	/* Offset= 206 (606) */
/* 402 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 406 */	NdrFcShort( 0xcc ),	/* Offset= 204 (610) */
/* 408 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 412 */	NdrFcShort( 0xd2 ),	/* Offset= 210 (622) */
/* 414 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 418 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (618) */
/* 420 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 424 */	NdrFcShort( 0xca ),	/* Offset= 202 (626) */
/* 426 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 430 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (630) */
/* 432 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 436 */	NdrFcShort( 0xc6 ),	/* Offset= 198 (634) */
/* 438 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 442 */	NdrFcShort( 0xc4 ),	/* Offset= 196 (638) */
/* 444 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 448 */	NdrFcShort( 0xbe ),	/* Offset= 190 (638) */
/* 450 */	NdrFcLong( 0x10 ),	/* 16 */
/* 454 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 456 */	NdrFcLong( 0x12 ),	/* 18 */
/* 460 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 462 */	NdrFcLong( 0x13 ),	/* 19 */
/* 466 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 468 */	NdrFcLong( 0x16 ),	/* 22 */
/* 472 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 474 */	NdrFcLong( 0x17 ),	/* 23 */
/* 478 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 480 */	NdrFcLong( 0xe ),	/* 14 */
/* 484 */	NdrFcShort( 0x9e ),	/* Offset= 158 (642) */
/* 486 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 490 */	NdrFcShort( 0xa4 ),	/* Offset= 164 (654) */
/* 492 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 496 */	NdrFcShort( 0x6a ),	/* Offset= 106 (602) */
/* 498 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 502 */	NdrFcShort( 0x68 ),	/* Offset= 104 (606) */
/* 504 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 508 */	NdrFcShort( 0x66 ),	/* Offset= 102 (610) */
/* 510 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 514 */	NdrFcShort( 0x60 ),	/* Offset= 96 (610) */
/* 516 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 520 */	NdrFcShort( 0x5a ),	/* Offset= 90 (610) */
/* 522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x0 ),	/* Offset= 0 (526) */
/* 528 */	NdrFcLong( 0x1 ),	/* 1 */
/* 532 */	NdrFcShort( 0x0 ),	/* Offset= 0 (532) */
/* 534 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (533) */
/* 536 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 540 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 542 */	
			0x12, 0x0,	/* FC_UP */
/* 544 */	NdrFcShort( 0xfffffe44 ),	/* Offset= -444 (100) */
/* 546 */	
			0x12, 0x0,	/* FC_UP */
/* 548 */	NdrFcShort( 0x192 ),	/* Offset= 402 (950) */
/* 550 */	
			0x12, 0x0,	/* FC_UP */
/* 552 */	NdrFcShort( 0x1e ),	/* Offset= 30 (582) */
/* 554 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 556 */	NdrFcLong( 0x2f ),	/* 47 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 566 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 568 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 570 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 572 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 576 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 578 */	NdrFcShort( 0x4 ),	/* 4 */
/* 580 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 582 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 584 */	NdrFcShort( 0x10 ),	/* 16 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0xa ),	/* Offset= 10 (598) */
/* 590 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 592 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 594 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (554) */
/* 596 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 598 */	
			0x12, 0x0,	/* FC_UP */
/* 600 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (572) */
/* 602 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 604 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 606 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 608 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 610 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 612 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 614 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 616 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 618 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 620 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 622 */	
			0x12, 0x0,	/* FC_UP */
/* 624 */	NdrFcShort( 0xffffffa8 ),	/* Offset= -88 (536) */
/* 626 */	
			0x12, 0x10,	/* FC_UP */
/* 628 */	NdrFcShort( 0xffffffaa ),	/* Offset= -86 (542) */
/* 630 */	
			0x12, 0x10,	/* FC_UP */
/* 632 */	NdrFcShort( 0xfffffe28 ),	/* Offset= -472 (160) */
/* 634 */	
			0x12, 0x10,	/* FC_UP */
/* 636 */	NdrFcShort( 0xfffffe58 ),	/* Offset= -424 (212) */
/* 638 */	
			0x12, 0x10,	/* FC_UP */
/* 640 */	NdrFcShort( 0xffffffa2 ),	/* Offset= -94 (546) */
/* 642 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 644 */	NdrFcShort( 0x10 ),	/* 16 */
/* 646 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 648 */	0x2,		/* FC_CHAR */
			0x38,		/* FC_ALIGNM4 */
/* 650 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 652 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 654 */	
			0x12, 0x0,	/* FC_UP */
/* 656 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (642) */
/* 658 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 660 */	NdrFcShort( 0x20 ),	/* 32 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* Offset= 0 (664) */
/* 666 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 668 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 670 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 672 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 674 */	NdrFcShort( 0xfffffe66 ),	/* Offset= -410 (264) */
/* 676 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 678 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 680 */	NdrFcShort( 0x4 ),	/* 4 */
/* 682 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 688 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 690 */	NdrFcShort( 0x4 ),	/* 4 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	0x12, 0x0,	/* FC_UP */
/* 702 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (658) */
/* 704 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 706 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 708 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x6 ),	/* Offset= 6 (720) */
/* 716 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 718 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 720 */	
			0x11, 0x0,	/* FC_RP */
/* 722 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (678) */
/* 724 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 726 */	NdrFcShort( 0x4 ),	/* 4 */
/* 728 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 734 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 736 */	NdrFcShort( 0x4 ),	/* 4 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	0x12, 0x0,	/* FC_UP */
/* 748 */	NdrFcShort( 0xffffff5a ),	/* Offset= -166 (582) */
/* 750 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 752 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 754 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x6 ),	/* Offset= 6 (766) */
/* 762 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 764 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 766 */	
			0x11, 0x0,	/* FC_RP */
/* 768 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (724) */
/* 770 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 774 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 776 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 778 */	NdrFcShort( 0x10 ),	/* 16 */
/* 780 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 782 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 784 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (770) */
			0x5b,		/* FC_END */
/* 788 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 790 */	NdrFcShort( 0x18 ),	/* 24 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0xa ),	/* Offset= 10 (804) */
/* 796 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 798 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 800 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (776) */
/* 802 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 804 */	
			0x11, 0x0,	/* FC_RP */
/* 806 */	NdrFcShort( 0xfffffd8c ),	/* Offset= -628 (178) */
/* 808 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 812 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 818 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 822 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 824 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 828 */	NdrFcShort( 0x4 ),	/* 4 */
/* 830 */	0x12, 0x0,	/* FC_UP */
/* 832 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (808) */
/* 834 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 836 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 838 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 840 */	NdrFcShort( 0x2 ),	/* 2 */
/* 842 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 848 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 852 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 854 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 856 */	NdrFcShort( 0x4 ),	/* 4 */
/* 858 */	NdrFcShort( 0x4 ),	/* 4 */
/* 860 */	0x12, 0x0,	/* FC_UP */
/* 862 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (838) */
/* 864 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 866 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 868 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 870 */	NdrFcShort( 0x4 ),	/* 4 */
/* 872 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 876 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 878 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 882 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 884 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 886 */	NdrFcShort( 0x4 ),	/* 4 */
/* 888 */	NdrFcShort( 0x4 ),	/* 4 */
/* 890 */	0x12, 0x0,	/* FC_UP */
/* 892 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (868) */
/* 894 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 896 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 898 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 902 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 908 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 912 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 914 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 916 */	NdrFcShort( 0x4 ),	/* 4 */
/* 918 */	NdrFcShort( 0x4 ),	/* 4 */
/* 920 */	0x12, 0x0,	/* FC_UP */
/* 922 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (898) */
/* 924 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 926 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 928 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 932 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 934 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 936 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 940 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 942 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 944 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 946 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (928) */
/* 948 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 950 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 952 */	NdrFcShort( 0x28 ),	/* 40 */
/* 954 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (936) */
/* 956 */	NdrFcShort( 0x0 ),	/* Offset= 0 (956) */
/* 958 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 960 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 962 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 964 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffc51 ),	/* Offset= -943 (22) */
			0x5b,		/* FC_END */
/* 968 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x4 ),	/* 4 */
/* 974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 976 */	NdrFcShort( 0xfffffc3e ),	/* Offset= -962 (14) */
/* 978 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 980 */	NdrFcShort( 0xa ),	/* Offset= 10 (990) */
/* 982 */	
			0x13, 0x10,	/* FC_OP */
/* 984 */	NdrFcShort( 0x2 ),	/* Offset= 2 (986) */
/* 986 */	
			0x13, 0x0,	/* FC_OP */
/* 988 */	NdrFcShort( 0xffffffda ),	/* Offset= -38 (950) */
/* 990 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x4 ),	/* 4 */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0xfffffff0 ),	/* Offset= -16 (982) */
/* 1000 */	
			0x11, 0x0,	/* FC_RP */
/* 1002 */	NdrFcShort( 0xffffffb6 ),	/* Offset= -74 (928) */

			0x0
        }
    };

const CInterfaceProxyVtbl * _WidgetServer_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDrawProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISafeArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IGlobalObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IParamsProxyVtbl,
    0
};

const CInterfaceStubVtbl * _WidgetServer_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDrawStubVtbl,
    ( CInterfaceStubVtbl *) &_ISafeArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IGlobalObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IParamsStubVtbl,
    0
};

PCInterfaceName const _WidgetServer_InterfaceNamesList[] = 
{
    "IDraw",
    "ISafeArray",
    "IGlobalObject",
    "IParams",
    0
};


#define _WidgetServer_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _WidgetServer, pIID, n)

int __stdcall _WidgetServer_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _WidgetServer, 4, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _WidgetServer, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _WidgetServer, 4, *pIndex )
    
}

const ExtendedProxyFileInfo WidgetServer_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _WidgetServer_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _WidgetServer_StubVtblList,
    (const PCInterfaceName * ) & _WidgetServer_InterfaceNamesList,
    0, // no delegation
    & _WidgetServer_IID_Lookup, 
    4,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};

/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Dec 14 10:03:57 2001
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 3\CustomIDLServer\CustomIDLServer.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IFoo = {0x267943B0,0x50E4,0x400C,{0x8F,0x79,0x4B,0x68,0xD4,0xA8,0x39,0xFA}};


const IID LIBID_CUSTOMIDLSERVERLib = {0x365739ED,0xEE97,0x4F7C,{0xA0,0x50,0xBC,0x15,0x7F,0x04,0x66,0x3A}};


const CLSID CLSID_Foo = {0xEA0AF1B1,0x5EA7,0x4352,{0xAF,0x6D,0xE7,0x86,0x06,0x61,0x4C,0xCA}};


#ifdef __cplusplus
}
#endif


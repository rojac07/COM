/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Mar 03 10:19:29 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 12\ATLVersionedInterfaceServer\ATLVersionedInterfaceServer.idl:
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

const IID IID_IFoo = {0x402464FE,0xF5B1,0x4859,{0x86,0x5F,0x18,0xAC,0x88,0xA5,0xD1,0x98}};


const IID IID_IFoo2 = {0x1646992B,0xB7DF,0x429b,{0xA8,0x9A,0xD1,0x96,0xDC,0xD8,0x2B,0xF3}};


const IID IID_IFoo3 = {0x9FD7DBEC,0x497D,0x44cc,{0x9E,0x44,0x21,0x8A,0xC3,0x94,0x83,0x28}};


const IID LIBID_ATLVERSIONEDINTERFACESERVERLib = {0xE89EAD7D,0xC42A,0x4B0C,{0xAF,0xEA,0x7F,0x1D,0x0B,0xBA,0xE6,0x73}};


const CLSID CLSID_Foo = {0x67BF3E05,0xE310,0x46CC,{0xB1,0x6D,0xA3,0x44,0x74,0xEA,0x1B,0x01}};


#ifdef __cplusplus
}
#endif


/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Jan 22 16:30:00 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 7\COM Servers\AtlComErrorServer\AtlComErrorServer.idl:
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

const IID IID_ITheBrokenObject = {0xD52B3F7A,0x1D2A,0x48F7,{0xB8,0x39,0x39,0x70,0x90,0xA7,0x65,0x6A}};


const IID LIBID_ATLCOMERRORSERVERLib = {0x6521B1E3,0xE42A,0x4B83,{0x92,0x98,0x75,0xE8,0xB0,0x79,0x5A,0xB3}};


const CLSID CLSID_TheBrokenObject = {0xDD7A12D1,0x7662,0x4F77,{0x97,0x76,0xFC,0x00,0xB1,0xAA,0x45,0xAF}};


#ifdef __cplusplus
}
#endif


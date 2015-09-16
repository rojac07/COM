/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Mar 03 16:51:22 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 12\AtlShapesServer\AtlShapesServer.idl:
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

const IID IID_IDrawable = {0xB1691C03,0x7EA8,0x4DAB,{0x86,0xCC,0x7D,0x6C,0xD8,0x59,0x67,0x1A}};


const IID LIBID_ATLSHAPESSERVERLib = {0x95FBF6E3,0x1B03,0x4904,{0xA5,0xD3,0xC7,0x7A,0x02,0x78,0x5F,0x9A}};


const CLSID CLSID_CoHexagon = {0x204F9A4B,0x4D22,0x451B,{0xBE,0x2F,0x33,0x8F,0x29,0x17,0xE7,0xF5}};


#ifdef __cplusplus
}
#endif


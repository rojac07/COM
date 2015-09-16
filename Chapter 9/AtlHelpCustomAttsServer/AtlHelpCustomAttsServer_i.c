/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Feb 20 22:17:48 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 9\AtlHelpCustomAttsServer\AtlHelpCustomAttsServer.idl:
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

const IID IID_IAdd = {0xEC7C1641,0x4031,0x45EA,{0x8B,0x61,0x7A,0xAA,0xD0,0x4A,0x0B,0xA7}};


const IID LIBID_ATLHELPCUSTOMATTSSERVERLib = {0x85CE5F31,0xAAD7,0x4C43,{0x93,0xF4,0x12,0x84,0x14,0x14,0xC8,0x22}};


const CLSID CLSID_AtlAdder = {0x4C3DB474,0x61BF,0x49BF,{0x97,0x9B,0x68,0xA5,0xFB,0x53,0xE4,0x3B}};


#ifdef __cplusplus
}
#endif


/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Dec 28 14:04:44 2001
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 2\AtlCarServer\AtlCarServer.idl:
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

const IID IID_IComCar = {0xB836F694,0x809C,0x4F12,{0xA4,0x23,0xBB,0xE0,0x31,0xB1,0xBB,0x2A}};


const IID IID_ITurbo = {0xE98B898C,0x5C0A,0x4318,{0xAF,0xCB,0x54,0x16,0x95,0xE4,0x94,0x5D}};


const IID IID_IJet = {0x011BF6AC,0x3C5D,0x420E,{0xA1,0xB6,0x22,0x21,0xFE,0x6C,0x8F,0xC5}};


const IID LIBID_ATLCARSERVERLib = {0x2EE867E1,0xC237,0x48FC,{0xB6,0xC7,0xD2,0x80,0x4F,0xB5,0x2C,0x68}};


const CLSID CLSID_ComCar = {0x3C4F2B7A,0xF23E,0x47A7,{0xAC,0xF0,0x22,0x4D,0xDD,0xAD,0x1D,0x83}};


const CLSID CLSID_JetPlane = {0xF37C6BDC,0xF790,0x45A9,{0x91,0xCA,0x1A,0x3D,0xCD,0xAC,0x7C,0x42}};


#ifdef __cplusplus
}
#endif

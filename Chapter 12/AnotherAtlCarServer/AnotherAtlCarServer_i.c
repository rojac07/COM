/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Mar 03 16:28:19 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 12\AnotherAtlCarServer\AnotherAtlCarServer.idl:
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

const IID IID_IStartable = {0x7FE41805,0x124B,0x44AE,{0xBE,0xAE,0xC3,0x49,0x1E,0x35,0x37,0x2B}};


const IID IID_IStoppable = {0xB001A308,0x8D66,0x4d23,{0x84,0xA4,0xB6,0x76,0x15,0x64,0x6A,0xBB}};


const IID LIBID_ANOTHERATLCARSERVERLib = {0x7B69AEB6,0xF0B7,0x46BB,{0x8A,0xD4,0x1C,0xAC,0xD1,0xEA,0x5A,0xE9}};


const CLSID CLSID_CoTruck = {0x862C5338,0x8AD7,0x43A3,{0xA9,0xA7,0xF2,0x1B,0x14,0x5D,0x61,0xD0}};


#ifdef __cplusplus
}
#endif


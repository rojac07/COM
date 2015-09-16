/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Sep 16 10:18:18 2015
 */
/* Compiler settings for C:\New folder\COM\Chapter3\AtlCarServer\AtlCarServer.idl:
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

const IID IID_IComCar = {0x900099E7,0xADD4,0x4847,{0xB3,0x69,0x71,0x5E,0xE0,0xCD,0x6E,0xBD}};


const IID LIBID_ATLCARSERVERLib = {0x222C8766,0x9533,0x46D6,{0xBE,0x7A,0x00,0x25,0xCD,0x9B,0x8E,0x7D}};


const CLSID CLSID_ComCar = {0x9BE1798A,0x37E4,0x4E2D,{0xBA,0xB2,0xA3,0x6C,0x89,0x47,0xFD,0x41}};


#ifdef __cplusplus
}
#endif


/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Mar 01 00:28:25 2002
 */
/* Compiler settings for C:\Apress Books\InteropBook\Labs\Chapter 2\RawComCar\RawComCar.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
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

const IID IID_ICar = {0x710D2F54,0x9289,0x4f66,{0x9F,0x64,0x20,0x1D,0x56,0xFB,0x66,0xC7}};


const IID IID_IRadio = {0x3B6C6126,0x92A8,0x47ef,{0x86,0xDA,0xA1,0x2B,0xFF,0xD9,0xBC,0x42}};


const IID IID_IScriptableCar = {0xDBAA0495,0x2F6A,0x458a,{0xA7,0x4A,0x12,0x9F,0x2C,0x45,0xB6,0x42}};


const IID LIBID_RawComCarLib = {0xD679F136,0x19C9,0x4868,{0xB2,0x29,0xF3,0x38,0xAE,0x16,0x36,0x56}};


const CLSID CLSID_ComCar = {0x096AC71D,0x3EB6,0x4974,{0xA0,0x71,0xA3,0xB1,0xC0,0xB7,0xFC,0x8D}};


const CLSID CLSID_ScriptableCar = {0x7AD9AFC9,0x771C,0x495c,{0xA3,0x30,0x00,0x6D,0x54,0xA2,0x36,0x50}};


#ifdef __cplusplus
}
#endif


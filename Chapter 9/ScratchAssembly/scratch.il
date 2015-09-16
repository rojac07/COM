
//  Microsoft (R) .NET Framework IL Disassembler.  Version 1.0.3617.0
//  Copyright (C) Microsoft Corporation 1998-2001. All rights reserved.

.assembly extern mscorlib
{
  .publickeytoken = (B7 7A 5C 56 19 34 E0 89 )                         // .z\V.4..
  .ver 1:0:3300:0
}
.assembly extern System
{
  .publickeytoken = (B7 7A 5C 56 19 34 E0 89 )                         // .z\V.4..
  .ver 1:0:3300:0
}
.assembly ScratchAssembly
{
  .custom instance void [mscorlib]System.Reflection.AssemblyCopyrightAttribute::.ctor(string) = ( 01 00 00 00 00 ) 
  // --- The following custom attribute is added automatically, do not uncomment -------
  //  .custom instance void [mscorlib]System.Diagnostics.DebuggableAttribute::.ctor(bool,
  //                                                                                bool) = ( 01 00 01 01 00 00 ) 
  .custom instance void [mscorlib]System.Reflection.AssemblyKeyNameAttribute::.ctor(string) = ( 01 00 00 00 00 ) 
  .custom instance void [mscorlib]System.Reflection.AssemblyKeyFileAttribute::.ctor(string) = ( 01 00 00 00 00 ) 
  .custom instance void [mscorlib]System.Reflection.AssemblyDelaySignAttribute::.ctor(bool) = ( 01 00 00 00 00 ) 
  .custom instance void [mscorlib]System.Reflection.AssemblyTrademarkAttribute::.ctor(string) = ( 01 00 00 00 00 ) 
  .custom instance void [mscorlib]System.Reflection.AssemblyProductAttribute::.ctor(string) = ( 01 00 00 00 00 ) 
  .custom instance void [mscorlib]System.Reflection.AssemblyCompanyAttribute::.ctor(string) = ( 01 00 00 00 00 ) 
  .custom instance void [mscorlib]System.Reflection.AssemblyConfigurationAttribute::.ctor(string) = ( 01 00 00 00 00 ) 
  .custom instance void [mscorlib]System.Reflection.AssemblyDescriptionAttribute::.ctor(string) = ( 01 00 00 00 00 ) 
  .custom instance void [mscorlib]System.Reflection.AssemblyTitleAttribute::.ctor(string) = ( 01 00 00 00 00 ) 
  .hash algorithm 0x00008004
  .ver 1:0:782:37975
}
.module ScratchAssembly.dll
// MVID: {4A7C87E7-036B-46A2-A6AC-A0B7514FC3AC}
.imagebase 0x11000000
.subsystem 0x00000003
.file alignment 512
.corflags 0x00000001
// Image base: 0x02eb0000
//
// ============== CLASS STRUCTURE DECLARATION ==================
//
.namespace ScratchAssembly
{
  .class public auto ansi beforefieldinit CustomAttString
         extends [mscorlib]System.Object
  {
  } // end of class CustomAttString

  .class public auto ansi beforefieldinit AtlAdderClass
         extends [mscorlib]System.Object
  {
  } // end of class AtlAdderClass

  .class public auto ansi beforefieldinit IDLCustomAttribute
         extends [mscorlib]System.Attribute
  {
  } // end of class IDLCustomAttribute

} // end of namespace ScratchAssembly


// =============================================================


// =============== GLOBAL FIELDS AND METHODS ===================


// =============================================================


// =============== CLASS MEMBERS DECLARATION ===================
//   note that class flags, 'extends' and 'implements' clauses
//          are provided here for information only

.namespace ScratchAssembly
{
  .class public auto ansi beforefieldinit CustomAttString
         extends [mscorlib]System.Object
  {
    .custom instance void ScratchAssembly.IDLCustomAttribute::.ctor(string,
                                                                    string) = ( 01 00 24 31 34 30 33 42 33 41 35 2D 33 38 46 45   // ..$1403B3A5-38FE
                                                                                2D 34 62 61 39 2D 39 34 45 32 2D 35 34 35 37 37   // -4ba9-94E2-54577
                                                                                46 37 31 32 45 37 41 26 54 6F 44 6F 3A 20 41 64   // F712E7A&ToDo: Ad
                                                                                64 20 73 75 62 74 72 61 63 74 69 6F 6E 20 66 75   // d subtraction fu
                                                                                6E 63 74 69 6F 6E 61 6C 69 74 79 2E 2E 2E 00 00 ) // nctionality.....
    .method public hidebysig specialname rtspecialname 
            instance void  .ctor() cil managed
    {
      // Code size       7 (0x7)
      .maxstack  1
      IL_0000:  ldarg.0
      IL_0001:  call       instance void [mscorlib]System.Object::.ctor()
      IL_0006:  ret
    } // end of method CustomAttString::.ctor

  } // end of class CustomAttString

  .class public auto ansi beforefieldinit AtlAdderClass
         extends [mscorlib]System.Object
  {
    .custom instance void [System]System.ComponentModel.DescriptionAttribute::.ctor(string) = ( 01 00 1B 54 68 69 73 20 63 6C 61 73 73 20 61 64   // ...This class ad
                                                                                                64 73 20 74 77 6F 20 6E 75 6D 62 65 72 73 00 00 ) // ds two numbers..
    .method public hidebysig specialname rtspecialname 
            instance void  .ctor() cil managed
    {
      // Code size       7 (0x7)
      .maxstack  1
      IL_0000:  ldarg.0
      IL_0001:  call       instance void [mscorlib]System.Object::.ctor()
      IL_0006:  ret
    } // end of method AtlAdderClass::.ctor

  } // end of class AtlAdderClass

  .class public auto ansi beforefieldinit IDLCustomAttribute
         extends [mscorlib]System.Attribute
  {
    .field public string theGuidName
    .field public string theStringValue
    .method public hidebysig specialname rtspecialname 
            instance void  .ctor(string g,
                                 string s) cil managed
    {
      // Code size       21 (0x15)
      .maxstack  2
      IL_0000:  ldarg.0
      IL_0001:  call       instance void [mscorlib]System.Attribute::.ctor()
      IL_0006:  ldarg.0
      IL_0007:  ldarg.1
      IL_0008:  stfld      string ScratchAssembly.IDLCustomAttribute::theGuidName
      IL_000d:  ldarg.0
      IL_000e:  ldarg.2
      IL_000f:  stfld      string ScratchAssembly.IDLCustomAttribute::theStringValue
      IL_0014:  ret
    } // end of method IDLCustomAttribute::.ctor

  } // end of class IDLCustomAttribute


// =============================================================

} // end of namespace ScratchAssembly

//*********** DISASSEMBLY COMPLETE ***********************
// WARNING: Created Win32 resource file C:\Apress Books\InteropBook\Labs\Chapter 9\ScratchAssembly\scratch.res


//  Microsoft (R) .NET Framework IL Disassembler.  Version 1.0.3617.0
//  Copyright (C) Microsoft Corporation 1998-2001. All rights reserved.

.assembly extern mscorlib
{
  .publickeytoken = (B7 7A 5C 56 19 34 E0 89 )                         // .z\V.4..
  .ver 1:0:3300:0
}

// ****** Need to add this to get DescriptionAttribute! ******
.assembly extern System
{
  .publickeytoken = (B7 7A 5C 56 19 34 E0 89 )                         // .z\V.4..
  .ver 1:0:3300:0
}


.assembly interop.AtlHelpCustomAttsServer
{
  .custom instance void [mscorlib]System.Runtime.InteropServices.ImportedFromTypeLibAttribute::.ctor(string) = ( 01 00 1A 41 54 4C 48 45 4C 50 43 55 53 54 4F 4D   // ...ATLHELPCUSTOM
                                                                                                                 41 54 54 53 53 45 52 56 45 52 4C 69 62 00 00 )    // ATTSSERVERLib..
  .custom instance void [mscorlib]System.Runtime.InteropServices.GuidAttribute::.ctor(string) = ( 01 00 24 38 35 63 65 35 66 33 31 2D 61 61 64 37   // ..$85ce5f31-aad7
                                                                                                  2D 34 63 34 33 2D 39 33 66 34 2D 31 32 38 34 31   // -4c43-93f4-12841
                                                                                                  34 31 34 63 38 32 32 00 00 )                      // 414c822..
  .hash algorithm 0x00008004
  .ver 1:0:0:0
}
.module ATLHELPCUSTOMATTSSERVERLib.dll
// MVID: {D9DA82E5-7924-404D-B8F1-77F1FD56444B}
.imagebase 0x00400000
.subsystem 0x00000003
.file alignment 512
.corflags 0x00000001
// Image base: 0x02eb0000
//
// ============== CLASS STRUCTURE DECLARATION ==================
//
.namespace interop.AtlHelpCustomAttsServer
{
  .class public auto ansi import AtlAdderClass
         extends [mscorlib]System.Object
         implements interop.AtlHelpCustomAttsServer.IAdd,
                    interop.AtlHelpCustomAttsServer.AtlAdder
  {
  } // end of class AtlAdderClass

  .class interface public abstract auto ansi import AtlAdder
         implements interop.AtlHelpCustomAttsServer.IAdd
  {
  } // end of class AtlAdder

  .class interface public abstract auto ansi import IAdd
  {
  } // end of class IAdd

  // ****** Added this. ******
  .class public auto ansi beforefieldinit IDLCustomAttribute
         extends [mscorlib]System.Attribute
  {
  } // end of class IDLCustomAttribute


} // end of namespace interop.AtlHelpCustomAttsServer


// =============================================================


// =============== GLOBAL FIELDS AND METHODS ===================


// =============================================================


// =============== CLASS MEMBERS DECLARATION ===================
//   note that class flags, 'extends' and 'implements' clauses
//          are provided here for information only

.namespace interop.AtlHelpCustomAttsServer
{
  .class public auto ansi import AtlAdderClass
         extends [mscorlib]System.Object
         implements interop.AtlHelpCustomAttsServer.IAdd,
                    interop.AtlHelpCustomAttsServer.AtlAdder
  {
    .custom instance void [mscorlib]System.Runtime.InteropServices.GuidAttribute::.ctor(string) = ( 01 00 24 34 43 33 44 42 34 37 34 2D 36 31 42 46   // ..$4C3DB474-61BF
                                                                                                    2D 34 39 42 46 2D 39 37 39 42 2D 36 38 41 35 46   // -49BF-979B-68A5F
                                                                                                    42 35 33 45 34 33 42 00 00 )                      // B53E43B..
    .custom instance void [mscorlib]System.Runtime.InteropServices.TypeLibTypeAttribute::.ctor(int16) = ( 01 00 02 00 00 00 ) 
    .custom instance void [mscorlib]System.Runtime.InteropServices.ClassInterfaceAttribute::.ctor(int16) = ( 01 00 00 00 00 00 ) 
    
    // Added this.
    .custom instance void [System]System.ComponentModel.DescriptionAttribute::.ctor(string) = ( 01 00 1B 54 68 69 73 20 63 6C 61 73 73 20 61 64   // ...This class ad
                                                                                                64 73 20 74 77 6F 20 6E 75 6D 62 65 72 73 00 00 ) // ds two numbers..
   .custom instance void interop.AtlHelpCustomAttsServer.IDLCustomAttribute::.ctor(string,
                                                                    string) = ( 01 00 24 31 34 30 33 42 33 41 35 2D 33 38 46 45   // ..$1403B3A5-38FE
                                                                                2D 34 62 61 39 2D 39 34 45 32 2D 35 34 35 37 37   // -4ba9-94E2-54577
                                                                                46 37 31 32 45 37 41 26 54 6F 44 6F 3A 20 41 64   // F712E7A&ToDo: Ad
                                                                                64 20 73 75 62 74 72 61 63 74 69 6F 6E 20 66 75   // d subtraction fu
                                                                                6E 63 74 69 6F 6E 61 6C 69 74 79 2E 2E 2E 00 00 ) // nctionality.....

    .method public specialname rtspecialname 
            instance void  .ctor() runtime managed internalcall
    {
    } // end of method AtlAdderClass::.ctor

    .method public hidebysig newslot virtual 
            instance int32  Add([in] int32 x,
                                [in] int32 y) runtime managed internalcall
    {
      .custom instance void [mscorlib]System.Runtime.InteropServices.DispIdAttribute::.ctor(int32) = ( 01 00 01 00 00 00 00 00 ) 
      .override interop.AtlHelpCustomAttsServer.IAdd::Add
    } // end of method AtlAdderClass::Add

  } // end of class AtlAdderClass

  .class interface public abstract auto ansi import AtlAdder
         implements interop.AtlHelpCustomAttsServer.IAdd
  {
    .custom instance void [mscorlib]System.Runtime.InteropServices.CoClassAttribute::.ctor(class [mscorlib]System.Type) = ( 01 00 2D 69 6E 74 65 72 6F 70 2E 41 74 6C 48 65   // ..-interop.AtlHe
                                                                                                                            6C 70 43 75 73 74 6F 6D 41 74 74 73 53 65 72 76   // lpCustomAttsServ
                                                                                                                            65 72 2E 41 74 6C 41 64 64 65 72 43 6C 61 73 73   // er.AtlAdderClass
                                                                                                                            00 00 ) 
    .custom instance void [mscorlib]System.Runtime.InteropServices.GuidAttribute::.ctor(string) = ( 01 00 24 45 43 37 43 31 36 34 31 2D 34 30 33 31   // ..$EC7C1641-4031
                                                                                                    2D 34 35 45 41 2D 38 42 36 31 2D 37 41 41 41 44   // -45EA-8B61-7AAAD
                                                                                                    30 34 41 30 42 41 37 00 00 )                      // 04A0BA7..
  } // end of class AtlAdder

  .class interface public abstract auto ansi import IAdd
  {
    .custom instance void [mscorlib]System.Runtime.InteropServices.GuidAttribute::.ctor(string) = ( 01 00 24 45 43 37 43 31 36 34 31 2D 34 30 33 31   // ..$EC7C1641-4031
                                                                                                    2D 34 35 45 41 2D 38 42 36 31 2D 37 41 41 41 44   // -45EA-8B61-7AAAD
                                                                                                    30 34 41 30 42 41 37 00 00 )                      // 04A0BA7..
    .custom instance void [mscorlib]System.Runtime.InteropServices.TypeLibTypeAttribute::.ctor(int16) = ( 01 00 40 10 00 00 )                               // ..@...
    .method public hidebysig newslot virtual abstract 
            instance int32  Add([in] int32 x,
                                [in] int32 y) runtime managed internalcall
    {
      .custom instance void [mscorlib]System.Runtime.InteropServices.DispIdAttribute::.ctor(int32) = ( 01 00 01 00 00 00 00 00 ) 
    } // end of method IAdd::Add

  } // end of class IAdd

  // ****** Added this. ******
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
      IL_0008:  stfld      string interop.AtlHelpCustomAttsServer.IDLCustomAttribute::theGuidName
      IL_000d:  ldarg.0
      IL_000e:  ldarg.2
      IL_000f:  stfld      string interop.AtlHelpCustomAttsServer.IDLCustomAttribute::theStringValue
      IL_0014:  ret
    } // end of method IDLCustomAttribute::.ctor

  } // end of class IDLCustomAttribute
// =============================================================

} // end of namespace interop.AtlHelpCustomAttsServer

//*********** DISASSEMBLY COMPLETE ***********************
// WARNING: Created Win32 resource file C:\Apress Books\InteropBook\Labs\Chapter 9\Initial interop.AtlHelpCustomAttsServer\IL Code\HelpfulATLServer.res

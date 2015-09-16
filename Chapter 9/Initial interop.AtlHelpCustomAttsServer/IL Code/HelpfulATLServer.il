
//  Microsoft (R) .NET Framework IL Disassembler.  Version 1.0.3617.0
//  Copyright (C) Microsoft Corporation 1998-2001. All rights reserved.

.assembly extern mscorlib
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


// =============================================================

} // end of namespace interop.AtlHelpCustomAttsServer

//*********** DISASSEMBLY COMPLETE ***********************
// WARNING: Created Win32 resource file C:\Apress Books\InteropBook\Labs\Chapter 9\Initial interop.AtlHelpCustomAttsServer\IL Code\HelpfulATLServer.res

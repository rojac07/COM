VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "VariantObj"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

' This function takes a variant and returns
' a string describing the underlying structure.
Public Function CheckThisVariant(ByVal v As Variant) As String
     Dim s As String
     s = "Type name: " + TypeName(v) + vbLf + "Value: " + CStr(VarType(v))
     CheckThisVariant = s
End Function

' Add two variants (if they are the same type and
' are not interfaces, structs, arrays or data access object)
Public Function AddTheseVariants(ByVal v1 As Variant, ByVal v2 As Variant) As Variant
    Dim answer As Variant
    
    If (VarType(v1) = VarType(v2)) _
      And (VarType(v1) <> vbObject _
      And VarType(v1) <> vbUserDefinedType _
      And VarType(v1) <> vbDataObject _
      And IsArray(v1) = False) Then
            answer = v1 + v2
    Else
        answer = "Bad data!"
    End If
    
    AddTheseVariants = answer
End Function

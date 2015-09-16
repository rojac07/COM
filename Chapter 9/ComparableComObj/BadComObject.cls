VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "BadComObject"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

' Remember!  VB hides underscores
' and thus we need to qualify the
' name of System.Object to avoid name
' clashes with the VB 6.0 Object type.
' Implements mscorlib.Object

' However, don't bother to implement class interfaces.
' No one but another COM client will honor
' them.

'Private Function Object_Equals(ByVal obj As Variant) As Boolean
'
'End Function
'
'Private Function Object_GetHashCode() As Long
'
'End Function
'
'Private Function Object_GetType() As mscorlib.Type
'
'End Function
'
'Private Property Get Object_ToString() As String
'
'End Property

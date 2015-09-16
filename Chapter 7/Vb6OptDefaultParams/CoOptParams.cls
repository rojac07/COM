VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "CoOptParams"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

Public Function AddTwoOrThreeNumbers(ByVal x As Integer, ByVal y As Integer, _
Optional ByVal z As Integer) As Integer
    
    Dim ans As Integer
    ans = x + y
    
    If Not IsMissing(x) Then
        ans = ans + z
    End If
    
    AddTwoOrThreeNumbers = ans
End Function

Public Function AddWithDefaults(Optional ByVal x As Integer = 2, _
Optional ByVal y As Integer = 2) As Integer
    ' No need to check if args
    ' are missing, as we always
    ' have 2+2
    AddWithDefaults = x + y
End Function

Public Sub UseThisOptionalThing(ByVal msg As String, _
Optional ByVal x As Variant = "Again")
        MsgBox msg, , "The message"
        
        ' Show the thing.
        If Not IsMissing(x) Then
            MsgBox x, , "Optional Variant is:"
        End If
End Sub


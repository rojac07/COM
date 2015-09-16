VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "SafeArrayObj"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

' This method receives an array of Strings.
Public Sub SendMeAnArrayOfStrings(strs() As String)
    Dim upperBound As Integer
    upperBound = UBound(strs)
    
    Dim strStats As String
    ' +1 to account for zero.
    strStats = "You gave me " & (upperBound + 1) & " Strings" & vbLf
    
    Dim i As Integer
    For i = 0 To upperBound
        strStats = strStats + "-> " & strs(i) & vbLf
    Next
    MsgBox strStats, , "Client supplied strings"
End Sub

' This method returns an array of 10 Integers.
Public Function GiveMeAnArrayOfInts() As Integer()
    Dim intArray(9) As Integer
    Dim i As Integer
    For i = 0 To 9
        intArray(i) = i * 100
    Next
    GiveMeAnArrayOfInts = intArray
End Function

' This method returns an array of VARIANTS
Public Function GiveMeAnArrayOfVariants() As Variant()
    Dim variantArray(4) As Variant
    variantArray(0) = "String data"
    variantArray(1) = True
    variantArray(2) = 23.4
    Set variantArray(3) = New TestObject
    variantArray(3).StringData = "Hey buddy!  You found me!"
    variantArray(4) = 8
    
    GiveMeAnArrayOfVariants = variantArray
End Function

' This method returns an array of _TestObject interfaces.
Public Function GiveMeAnArrayOfCoClasses() As TestObject()
    Dim objArray(4) As TestObject
    Set objArray(0) = New TestObject
    Set objArray(1) = New TestObject
    Set objArray(2) = New TestObject
    Set objArray(3) = New TestObject
    Set objArray(4) = New TestObject
    
    objArray(0).StringData = "Hello"
    objArray(1).StringData = "there"
    objArray(2).StringData = "from"
    objArray(3).StringData = "VB"
    objArray(4).StringData = "6.0!"
    
    GiveMeAnArrayOfCoClasses = objArray
End Function

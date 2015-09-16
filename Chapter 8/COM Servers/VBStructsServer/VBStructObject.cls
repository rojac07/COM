VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "VBStructObject"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

' A simple COM structure.
Public Type WidgetStruct
    ID As Integer
    stringName As String
End Type

' This method returns an array of COM structures to the
' caller.
Public Function UseThisArrayOfStructs() As WidgetStruct()
    Dim structs(2) As WidgetStruct
    structs(0).ID = 1
    structs(0).stringName = "Fred"
    
    structs(1).ID = 2
    structs(1).stringName = "Mary"
    
    structs(2).ID = 3
    structs(2).stringName = "Billy"
    
    UseThisArrayOfStructs = structs
End Function

Public Sub ChangeThisStruct(w As WidgetStruct)
    w.ID = 99
    w.stringName = "FooFoo"
End Sub

VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "Car"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

Private mCarID As Integer

' The Car.cls class is
' comparable via its carID.
Implements IComparable

Private Function IComparable_CompareTo(ByVal obj As Variant) As Long
    If obj.GetCarID = Me.GetCarID Then
        IComparable_CompareTo = 0
    ElseIf obj.GetCarID < Me.GetCarID Then
        IComparable_CompareTo = 1
    Else
        IComparable_CompareTo = -1
    End If
End Function

Public Sub SetCarID(ByVal id As Integer)
    mCarID = id
End Sub

Public Function GetCarID() As Integer
    GetCarID = mCarID
End Function


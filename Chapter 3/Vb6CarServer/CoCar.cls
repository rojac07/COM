VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "CoCar"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

Implements IVBTurbo

Private mCurrSpeed As Long

' A COM property.
Public Property Get Speed() As Long
    Speed = mCurrSpeed
End Property

Public Property Let Speed(ByVal delta As Long)
    mCurrSpeed = mCurrSpeed + delta
End Property

Private Sub IVBTurbo_TurboBlast()
    mCurrSpeed = mCurrSpeed + 50
End Sub


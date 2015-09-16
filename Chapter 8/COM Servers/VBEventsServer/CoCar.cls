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

' Class constant.
Const MAXSPEED = 200

' Simple state data.
Private mCurrSpeed As Integer

' The CoCar can send two events.
Public Event AboutToBlow()
Public Event Exploded()

Public Function SpeedUp() As Integer
    mCurrSpeed = mCurrSpeed + 10
    If (MAXSPEED - mCurrSpeed) = 10 Then
        RaiseEvent AboutToBlow
    End If
    
    If mCurrSpeed >= MAXSPEED Then
        RaiseEvent Exploded
    End If
    
    ' Return current speed
    SpeedUp = mCurrSpeed
End Function




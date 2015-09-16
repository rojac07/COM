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
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

Private mColor As String
Private mMake As String
Private mPetName As String
Private mCarID As Integer

Public Sub Create(ByVal Color As String, ByVal Make As String, _
  ByVal PetName As String, ByVal id As Integer)
    mColor = Color
    mPetName = PetName
    mMake = Make
    mCarID = id
End Sub

Public Property Let Color(ByVal s As String)
    mColor = s
End Property

Public Property Get Color() As String
    Color = mColor
End Property

Public Property Let Make(ByVal s As String)
    mMake = s
End Property

Public Property Get Make() As String
    Make = mMake
End Property

Public Property Let PetName(ByVal s As String)
    mPetName = s
End Property

Public Property Get PetName() As String
    PetName = mPetName
End Property

' Read only.
Public Property Get CarID() As Integer
    CarID = mCarID
End Property

VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Widget Command Center"
   ClientHeight    =   1860
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5370
   LinkTopic       =   "Form1"
   ScaleHeight     =   1860
   ScaleWidth      =   5370
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton btnUseStructure 
      Caption         =   "Do Structs"
      Height          =   495
      Left            =   2760
      TabIndex        =   3
      Top             =   960
      Width           =   2175
   End
   Begin VB.CommandButton btnAppObj 
      Caption         =   "Use [AppObject]"
      Height          =   495
      Left            =   2760
      TabIndex        =   2
      Top             =   240
      Width           =   2175
   End
   Begin VB.CommandButton btnSafeArray 
      Caption         =   "Do SafeArray"
      Height          =   495
      Left            =   360
      TabIndex        =   1
      Top             =   960
      Width           =   2175
   End
   Begin VB.CommandButton btnParams 
      Caption         =   "Do Params"
      Height          =   495
      Left            =   360
      TabIndex        =   0
      Top             =   240
      Width           =   2175
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private w As CoWidget

Private Sub btnAppObj_Click()
    GlobalObject.SomeMethod
End Sub

Private Sub btnParams_Click()
    Dim x As Long, y As Long, z As Long
    
    ' Use [out] params.
    w.OutParamsOnly x, y
    MsgBox "x = " & x & vbLf & "y = " & y, , "After [out] call"
    
    ' Use [in, out] params.
    w.InAndOutParams x, y
    MsgBox "x = " & x & vbLf & "y = " & y, , "After [in, out] call"
    
    ' Use [out, retval]
    z = w.SumByRetVal(x, y)
    MsgBox "x = " & x & vbLf & "y = " & y & vbLf & "z = " & z _
    , , "After [out, retval] call"
End Sub

Private Sub btnSafeArray_Click()
    Dim itfSA As ISafeArray
    Set itfSA = w
    
    ' Send strings to object.
    Dim theStrings(2) As String
    theStrings(0) = "Hello"
    theStrings(1) = "from"
    theStrings(2) = "Visual Basic!"
    itfSA.UseThisSafeArray theStrings
    
    ' Get strings from object.
    Dim moreStrings() As String
    moreStrings = itfSA.GiveMeSomeStrings()
    Dim i As Integer
    For i = 0 To UBound(moreStrings)
        MsgBox moreStrings(i), , "Strings from COM object"
    Next i
End Sub

Private Sub btnUseStructure_Click()
    Dim o As Drawer
    Set o = New Drawer
    
    ' COM structs map to VB 6.0 Types.
    Dim p1 As MYPOINT, p2 As MYPOINT
    p1.xPos = 100
    p1.yPos = 100
    p2.xPos = 300
    p2.yPos = 100
    o.DrawALine p1, p2
End Sub

Private Sub Form_Load()
    Set w = New CoWidget
End Sub

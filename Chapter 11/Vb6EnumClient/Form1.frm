VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "VB .NET Enum Client"
   ClientHeight    =   1005
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   3555
   LinkTopic       =   "Form1"
   ScaleHeight     =   1005
   ScaleWidth      =   3555
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton btnUseEnum 
      Caption         =   "Use Enum"
      Height          =   495
      Left            =   120
      TabIndex        =   0
      Top             =   240
      Width           =   3255
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub btnUseEnum_Click()
    ' The Car type.
    Dim c As Car
    Set c = New Car
    
    ' Set and get the car make.
    c.CarMake = CarMake_Yugo
    MsgBox c.CarMake
    
    ' Make use of CarMake variable
    Dim e As CarMake
    e = CarMake_BMW
    c.CarMake = e
    MsgBox c.CarMake
    
    c.DisplayCarMake e
End Sub


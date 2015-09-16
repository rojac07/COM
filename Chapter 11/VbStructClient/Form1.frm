VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Structure Client"
   ClientHeight    =   1125
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   1125
   ScaleWidth      =   4680
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton btnUseStruct 
      Caption         =   "Use this struct?"
      Height          =   495
      Left            =   1560
      TabIndex        =   1
      Top             =   240
      Width           =   2775
   End
   Begin VB.CommandButton btnStructMe 
      Caption         =   "Struct Me"
      Height          =   495
      Left            =   120
      TabIndex        =   0
      Top             =   240
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub btnStructMe_Click()
    Dim pt As MYPOINT
    
    Dim o As StructUser
    Set o = New StructUser
    pt = o.PointFactory()
    MsgBox "X: " & pt.xPos & " Y: " & pt.yPos, , "The MYPOINT is:"
End Sub

Private Sub btnUseStruct_Click()
    Dim pt As MYPOINT
    pt.xPos = 99
    pt.yPos = 8
    Dim o As StructUser
    Set o = New StructUser
    o.DisplayPointInfo pt
End Sub

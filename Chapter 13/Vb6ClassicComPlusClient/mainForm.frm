VERSION 5.00
Begin VB.Form mainForm 
   Caption         =   "COM+ Client"
   ClientHeight    =   3456
   ClientLeft      =   60
   ClientTop       =   456
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   3456
   ScaleWidth      =   4680
   StartUpPosition =   2  'CenterScreen
   Begin VB.TextBox txtDotNetMsg 
      Height          =   495
      Left            =   1920
      TabIndex        =   5
      Text            =   "Hello there from VB 6.0"
      Top             =   2400
      Width           =   2535
   End
   Begin VB.CommandButton btnSendDotNetMesage 
      Caption         =   "Send Message"
      Height          =   495
      Left            =   120
      TabIndex        =   4
      Top             =   2400
      Width           =   1575
   End
   Begin VB.TextBox txtMessage 
      Height          =   495
      Left            =   1920
      TabIndex        =   1
      Text            =   "Hello there from VB 6.0"
      Top             =   840
      Width           =   2535
   End
   Begin VB.CommandButton btnSendMesage 
      Caption         =   "Send Message"
      Height          =   495
      Left            =   120
      TabIndex        =   0
      Top             =   840
      Width           =   1575
   End
   Begin VB.Label Label2 
      Caption         =   "Use the .NET COM+ Component"
      Height          =   375
      Left            =   240
      TabIndex        =   3
      Top             =   1800
      Width           =   4215
   End
   Begin VB.Line Line1 
      X1              =   120
      X2              =   4440
      Y1              =   1560
      Y2              =   1560
   End
   Begin VB.Label Label1 
      Caption         =   "Use the Classic COM+ Component"
      Height          =   375
      Left            =   120
      TabIndex        =   2
      Top             =   240
      Width           =   4335
   End
End
Attribute VB_Name = "mainForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Sub btnSendDotNetMesage_Click()
    Dim o As SimpleServicedType
    Set o = New SimpleServicedType
    o.DisplayMessage txtDotNetMsg.Text
    o.ShowObjCtxInfo
End Sub

Private Sub btnSendMesage_Click()
    Dim o As MsgClass
    Set o = New MsgClass
    o.DisplayMessage txtMessage.Text
End Sub

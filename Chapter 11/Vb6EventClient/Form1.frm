VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "VB COM Client using .NET Delegate"
   ClientHeight    =   1170
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5145
   LinkTopic       =   "Form1"
   ScaleHeight     =   1170
   ScaleWidth      =   5145
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton btnDoIt 
      Caption         =   "Trigger Event"
      Height          =   495
      Left            =   240
      TabIndex        =   0
      Top             =   240
      Width           =   4695
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private WithEvents eventObj As DotNetEventSender
Attribute eventObj.VB_VarHelpID = -1

Private Sub btnDoIt_Click()
    eventObj.FireTheEvent
End Sub

Private Sub eventObj_TheEvent(ByVal msg As String)
    MsgBox msg, , "Message from event object"
End Sub

Private Sub Form_Load()
    Set eventObj = New DotNetEventSender
End Sub

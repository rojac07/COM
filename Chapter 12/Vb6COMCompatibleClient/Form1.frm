VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Binary Compatible Type Client"
   ClientHeight    =   1860
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   1860
   ScaleWidth      =   4680
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton btnStopObjs 
      Caption         =   "Stop All Objects"
      Height          =   495
      Left            =   240
      TabIndex        =   1
      Top             =   960
      Width           =   4215
   End
   Begin VB.CommandButton btnStartObjs 
      Caption         =   "Start All Objects"
      Height          =   495
      Left            =   240
      TabIndex        =   0
      Top             =   240
      Width           =   4215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Private theObjs As Collection

' Loop through the collection
' and start everything.
Private Sub btnStartObjs_Click()
    Dim temp As IStartable
    Dim i As Integer
    For i = 0 To theObjs.Count - 1
        Set temp = theObjs(i + 1)
        temp.Start
    Next
End Sub

Private Sub btnStopObjs_Click()
    Dim temp As IStoppable
    Dim i As Integer
    For i = 0 To theObjs.Count - 1
        Set temp = theObjs(i + 1)
        temp.Break
    Next
End Sub

' Fill the collection with some
' binary compatible types.
Private Sub Form_Load()
    Set theObjs = New Collection
    theObjs.Add New CoTruck
    theObjs.Add New UFO
    theObjs.Add New DotNetLawnMower
    theObjs.Add New DvdPlayer
End Sub

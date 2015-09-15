VERSION 5.00
Begin VB.Form Form1 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "ComCar Command Center"
   ClientHeight    =   2535
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   4560
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   2535
   ScaleWidth      =   4560
   ShowInTaskbar   =   0   'False
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton btnTurnOnRadio 
      Caption         =   "Turn on Radio"
      Height          =   495
      Left            =   120
      TabIndex        =   3
      Top             =   1920
      Width           =   1215
   End
   Begin VB.TextBox txtCurrSpeed 
      Height          =   495
      Left            =   1680
      TabIndex        =   2
      Text            =   "0"
      Top             =   960
      Width           =   2655
   End
   Begin VB.CommandButton btnUseRawCar 
      Caption         =   "Speed Up Raw Com Car"
      Height          =   495
      Left            =   120
      TabIndex        =   0
      Top             =   240
      Width           =   4335
   End
   Begin VB.Label Label1 
      Caption         =   "Current Speed"
      Height          =   495
      Left            =   120
      TabIndex        =   1
      Top             =   960
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

' The car.
Private theRawCar As ComCar

Private Sub btnTurnOnRadio_Click()
    Dim itfRadio As IRadio
    Set itfRadio = theRawCar  ' Calls QueryInterface() for IID_IRadio
    itfRadio.CrankTunes
    Set itfRadio = Nothing
End Sub

Private Sub btnUseRawCar_Click()
    ' speed up raw car.
    theRawCar.SpeedUp 10
    txtCurrSpeed.Text = theRawCar.CurrentSpeed()
End Sub

Private Sub Form_Load()
    Set theRawCar = New ComCar
End Sub

Private Sub Form_Unload(Cancel As Integer)
    ' Explicitly decrement ref count.
    Set theRawCar = Nothing
End Sub

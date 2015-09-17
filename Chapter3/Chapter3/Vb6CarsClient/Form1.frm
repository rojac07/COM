VERSION 5.00
Begin VB.Form Form1 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "ComCar Command Center"
   ClientHeight    =   6330
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   5415
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   6330
   ScaleWidth      =   5415
   ShowInTaskbar   =   0   'False
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton Command1 
      Caption         =   "Command1"
      Height          =   735
      Left            =   240
      TabIndex        =   4
      Top             =   2040
      Width           =   3975
   End
   Begin VB.TextBox txtCurrVbSpeed 
      Height          =   495
      Left            =   1920
      TabIndex        =   2
      Text            =   "0"
      Top             =   3240
      Width           =   2535
   End
   Begin VB.CommandButton btnUseVb6Car 
      Caption         =   "Use VB 6.0 ComCar"
      Height          =   495
      Left            =   120
      TabIndex        =   1
      Top             =   1440
      Width           =   4215
   End
   Begin VB.CommandButton btnATLCoCar 
      Caption         =   "Use ATL ComCar"
      Height          =   495
      Left            =   120
      TabIndex        =   0
      Top             =   240
      Width           =   4215
   End
   Begin VB.Label Label2 
      Caption         =   "Current Speed"
      Height          =   495
      Left            =   480
      TabIndex        =   3
      Top             =   3360
      Width           =   1215
   End
   Begin VB.Line Line3 
      X1              =   0
      X2              =   4560
      Y1              =   1080
      Y2              =   1080
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

' The cars.
 Private vbCar As Vb6CarServer.CoCar
 Private atlCar As ATLCARSERVERLib.ComCar
 Private atlBoat As ATLCARSERVERLib.ComBoat
 
 

Private Sub btnATLCoCar_Click()
    ' Speed up car and crank some tunes.
    atlCar.SpeedUp 10
    atlCar.TurnOnRadio EIGHT_TRACK
    
    ' Turbo boost.
    Dim itfTurbo As ATLCARSERVERLib.ITurbo
    Set itfTurbo = atlCar
    itfTurbo.TurboBlast
    Set itfTurbo = Nothing
End Sub

Private Sub btnUseVb6Car_Click()
    ' Use [default] interface.
    vbCar.Speed = vbCar.Speed + 10
        
    ' Get IVBTurbo
    MsgBox "Turbo boosting", , "Message from Car Command..."
    Dim itfVbTurbo As IVBTurbo
    Set itfVbTurbo = vbCar
    itfVbTurbo.TurboBlast

    txtCurrVbSpeed.Text = vbCar.Speed
    Set itfVbTurbo = Nothing
End Sub

Private Sub Command1_Click()
  
   atlBoat.Swimming
   
   
   
   Dim iTurboBoat As ATLCARSERVERLib.iTurboBoat
   Set iTurboBoat = atlBoat
   iTurboBoat.TurboSwimming

  
 
End Sub

Private Sub Form_Load()
    Set vbCar = New Vb6CarServer.CoCar
    Set atlCar = New ATLCARSERVERLib.ComCar
    
    Set atlBoat = New ATLCARSERVERLib.ComBoat
    
End Sub

Private Sub Form_Unload(Cancel As Integer)
    ' Explicitly decrement ref counts.
    Set vbCar = Nothing
    Set atlCar = Nothing

        Set atlBoat = Nothing
End Sub

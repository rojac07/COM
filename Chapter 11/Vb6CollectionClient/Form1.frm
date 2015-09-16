VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "VB .NET Collection Client"
   ClientHeight    =   5670
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   4515
   LinkTopic       =   "Form1"
   ScaleHeight     =   5670
   ScaleWidth      =   4515
   StartUpPosition =   2  'CenterScreen
   Begin VB.Frame Frame2 
      Caption         =   "Remove Car"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1215
      Left            =   240
      TabIndex        =   10
      Top             =   4080
      Width           =   3975
      Begin VB.CommandButton btnRemoveCar 
         Caption         =   "Remove"
         Height          =   495
         Left            =   1920
         TabIndex        =   12
         Top             =   480
         Width           =   1815
      End
      Begin VB.TextBox txtCarToRemove 
         Height          =   495
         Left            =   120
         TabIndex        =   11
         Top             =   480
         Width           =   1575
      End
   End
   Begin VB.CommandButton btnClearCars 
      Caption         =   "Empty Cars From Collection"
      Height          =   495
      Left            =   2400
      TabIndex        =   3
      Top             =   240
      Width           =   1815
   End
   Begin VB.Frame Frame1 
      Caption         =   "Add Car"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   2775
      Left            =   240
      TabIndex        =   1
      Top             =   960
      Width           =   3975
      Begin VB.TextBox txtPetName 
         Height          =   375
         Left            =   1080
         TabIndex        =   9
         Top             =   1680
         Width           =   2655
      End
      Begin VB.TextBox txtColor 
         Height          =   375
         Left            =   1080
         TabIndex        =   8
         Top             =   1080
         Width           =   2655
      End
      Begin VB.TextBox txtMake 
         Height          =   375
         Left            =   1080
         TabIndex        =   7
         Top             =   480
         Width           =   2655
      End
      Begin VB.CommandButton btnAddCar 
         Caption         =   "Add"
         Height          =   315
         Left            =   1440
         TabIndex        =   2
         Top             =   2280
         Width           =   2295
      End
      Begin VB.Label Label3 
         Caption         =   "PetName"
         Height          =   375
         Left            =   120
         TabIndex        =   6
         Top             =   1680
         Width           =   975
      End
      Begin VB.Label Label2 
         Caption         =   "Color"
         Height          =   375
         Left            =   120
         TabIndex        =   5
         Top             =   1080
         Width           =   975
      End
      Begin VB.Label Label1 
         Caption         =   "Make"
         Height          =   375
         Left            =   120
         TabIndex        =   4
         Top             =   480
         Width           =   1095
      End
   End
   Begin VB.CommandButton btnListCars 
      Caption         =   "List Cars"
      Height          =   495
      Left            =   240
      TabIndex        =   0
      Top             =   240
      Width           =   1815
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Private coll As DotNetCollection.CarCollection

Private Sub btnAddCar_Click()
    Dim c As New Car
    c.SetCarState txtMake.Text, txtColor.Text, txtPetName.Text
    coll.AddCar c
End Sub

Private Sub btnClearCars_Click()
    coll.ClearCars
End Sub

Private Sub btnListCars_Click()
    Dim s As String
    Dim temp As Car
    For Each temp In coll
        s = s + temp.GetCarState() & vbLf
    Next
    MsgBox s, , "The Cars"
End Sub

Private Sub btnRemoveCar_Click()
On Error GoTo OOPS
    coll.RemoveCar CInt(txtCarToRemove.Text)
    Exit Sub
OOPS:
    MsgBox Err.Description, , Err.Source
End Sub

Private Sub Form_Load()
    Set coll = New CarCollection
End Sub

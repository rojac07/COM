VERSION 5.00
Begin VB.UserControl LameColorControl 
   BorderStyle     =   1  'Fixed Single
   ClientHeight    =   2625
   ClientLeft      =   0
   ClientTop       =   0
   ClientWidth     =   4365
   ScaleHeight     =   2625
   ScaleWidth      =   4365
   Begin VB.CommandButton btnYellow 
      Caption         =   "Yellow"
      Height          =   495
      Left            =   3000
      TabIndex        =   2
      Top             =   1800
      Width           =   1215
   End
   Begin VB.CommandButton btnGreen 
      Caption         =   "Green"
      Height          =   495
      Left            =   120
      TabIndex        =   1
      Top             =   1800
      Width           =   1215
   End
   Begin VB.CommandButton btnBlack 
      Caption         =   "Black"
      Height          =   495
      Left            =   1560
      TabIndex        =   0
      Top             =   1800
      Width           =   1215
   End
   Begin VB.Label txtLabel 
      Alignment       =   2  'Center
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Default Text"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   13.5
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   555
      Left            =   240
      TabIndex        =   3
      Top             =   240
      Width           =   3855
   End
End
Attribute VB_Name = "LameColorControl"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

' Private data.
Private mBkColor As OLE_COLOR
Private mText As String

' The single event
Public Event TextChanged()

' Public properties.
Public Property Get TheText() As String
Attribute TheText.VB_Description = "This sets the text which is to be displayed in the label."
    TheText = mText
End Property

Public Property Let TheText(ByVal newText As String)
    mText = newText
    txtLabel = mText
    RaiseEvent TextChanged 'fire event!
End Property

Public Property Get BackGroundColor() As OLE_COLOR
Attribute BackGroundColor.VB_Description = "This lets you set the background color to any RGB value."
Attribute BackGroundColor.VB_UserMemId = -501
    BackColor = mBkColor
End Property

Public Property Let BackGroundColor(ByVal newColor As OLE_COLOR)
    mBkColor = newColor
End Property

' Button click handlers.
Private Sub btnBlack_Click()
    mBkColor = vbBlack
    BackColor = mBkColor
End Sub

Private Sub btnGreen_Click()
    mBkColor = vbGreen
    BackColor = mBkColor
End Sub

Private Sub btnYellow_Click()
    mBkColor = vbYellow
    BackColor = mBkColor
End Sub

Private Sub UserControl_Initialize()
    mBkColor = vbRed
    BackColor = mBkColor
End Sub

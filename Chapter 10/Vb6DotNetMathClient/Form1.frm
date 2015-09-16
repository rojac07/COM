VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "VB 6.0 to .NET Client"
   ClientHeight    =   4275
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   4275
   ScaleWidth      =   4680
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton btnSolid 
      Caption         =   "Use Explict Interfaces"
      Height          =   495
      Left            =   240
      TabIndex        =   9
      Top             =   2880
      Width           =   4215
   End
   Begin VB.CommandButton btnObj 
      Caption         =   "System.Object Members"
      Height          =   735
      Left            =   240
      TabIndex        =   8
      Top             =   1800
      Width           =   1215
   End
   Begin VB.CommandButton btnSub 
      Caption         =   "Subtract"
      Height          =   495
      Left            =   240
      TabIndex        =   7
      Top             =   1080
      Width           =   1215
   End
   Begin VB.TextBox txtAnswer 
      Height          =   495
      Left            =   3240
      TabIndex        =   6
      Text            =   "0"
      Top             =   2160
      Width           =   1215
   End
   Begin VB.TextBox txtNumb1 
      Height          =   495
      Left            =   3240
      TabIndex        =   2
      Text            =   "0"
      Top             =   360
      Width           =   1215
   End
   Begin VB.TextBox txtNumb2 
      Height          =   495
      Left            =   3240
      TabIndex        =   1
      Text            =   "0"
      Top             =   1080
      Width           =   1215
   End
   Begin VB.CommandButton btnAdd 
      Caption         =   "Add"
      Height          =   495
      Left            =   240
      TabIndex        =   0
      Top             =   360
      Width           =   1215
   End
   Begin VB.Label Label3 
      Caption         =   "Answer"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1920
      TabIndex        =   5
      Top             =   2160
      Width           =   1215
   End
   Begin VB.Label Label2 
      Caption         =   "Number 1"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1920
      TabIndex        =   4
      Top             =   360
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "Number 2"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1920
      TabIndex        =   3
      Top             =   1080
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Private c As DotNetCalc

Private Sub btnAdd_Click()
    txtAnswer.Text = c.Add(txtNumb1.Text, txtNumb2.Text)
End Sub

Private Sub btnSolid_Click()
    Dim objItf As mscorlib.Object
    Dim c As DotNetCalcWithInterface
    Set c = New DotNetCalcWithInterface
    MsgBox c.Add(100, 43), , "Adding 100 + 43"
    Set objItf = c
    MsgBox objItf.ToString(), , "My fully qualified name..."
End Sub

Private Sub btnSub_Click()
    txtAnswer.Text = c.Subtract(txtNumb1.Text, txtNumb2.Text)
End Sub

Private Sub Form_Load()
    Set c = New DotNetCalc
End Sub

Private Sub btnObj_Click()
    ' Call ToString()
    MsgBox c.ToString, , "ToString() says..."
    Dim s As String
    Dim t As mscorlib.Type
    Set t = c.GetType()
    
    ' Call GetHashCode()
    MsgBox c.GetHashCode(), , "GetHashCode() says..."
    
    ' Get some stats about the DotNetCalc.
    s = "Is this a COM object? : " & t.IsCOMObject & vbLf
    s = s + "Assembly stats? : " & t.Assembly.FullName & vbLf
    s = s + "Is this a Class? : " & t.IsClass & vbLf
    s = s + "Base type? : " & t.BaseType.FullName & vbLf
    s = s + "Abstract class? : " & t.IsAbstract & vbLf & vbLf
    
    ' List all methods of the DotNetCalc class.
    Dim mi() As MethodInfo
    mi = t.GetMethods_2()
    Dim i As Integer
    For i = 0 To UBound(mi)
        s = s + "Method " & i & ": " & mi(i).Name & vbLf
    Next
    
    MsgBox s, , "Select info ala System.Type"
End Sub


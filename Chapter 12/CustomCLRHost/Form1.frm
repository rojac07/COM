VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Visual Basic 6.0 Custom CLR Host"
   ClientHeight    =   2610
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6150
   LinkTopic       =   "Form1"
   ScaleHeight     =   2610
   ScaleWidth      =   6150
   StartUpPosition =   2  'CenterScreen
   Begin VB.CommandButton btnListLoadedAsms 
      Caption         =   "List loaded assemblies in AppDomain"
      Height          =   495
      Left            =   240
      TabIndex        =   2
      Top             =   1800
      Width           =   5655
   End
   Begin VB.CommandButton btnLoadFromGAC 
      Caption         =   "Create System.Collection.ArrayList from GAC"
      Height          =   495
      Left            =   240
      TabIndex        =   1
      Top             =   1080
      Width           =   5655
   End
   Begin VB.CommandButton btnLoadFromPrivateAsm 
      Caption         =   "Create Unregistered .NET Class from Private Assembly"
      Height          =   495
      Left            =   240
      TabIndex        =   0
      Top             =   240
      Width           =   5655
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

' The types we need to host the CLR.
Private myAppDomain As AppDomain
Private myCLRHost As CorRuntimeHost

' Load the CLR and set app domain.
Private Sub Form_Load()
    Set myCLRHost = New CorRuntimeHost
    myCLRHost.Start
    myCLRHost.GetDefaultDomain myAppDomain
End Sub

' Unload the CLR.
Private Sub Form_Unload(Cancel As Integer)
    myCLRHost.Stop
End Sub

' List all the loaded assemblies.
Private Sub btnListLoadedAsms_Click()
    Dim loadedAsms() As Assembly
    loadedAsms = myAppDomain.GetAssemblies()
    
    Dim theAsms As String
    Dim i As Integer
    For i = 0 To UBound(loadedAsms)
        theAsms = theAsms + loadedAsms(i).FullName + vbLf
    Next
    MsgBox theAsms
End Sub

Private Sub btnLoadFromGAC_Click()
    Dim arLst As ArrayList
    Dim obj As ObjectHandle
    Set obj = myAppDomain.CreateInstance("mscorlib", "System.Collections.ArrayList")
    Set arLst = obj.Unwrap
    
    arLst.Add "Hello there!"
    arLst.Add 12
    arLst.Add True
    
    Dim items As String
    items = items + arLst(0) + vbLf
    items = items + CStr(arLst(1)) + vbLf
    items = items + CStr(arLst(2)) + vbLf
    
    MsgBox items
End Sub

' NOTE!!!  Because VB projects do not directly
' run from the application directory within
' the IDE, you will
' need to run the EXE to use this function.
Private Sub btnLoadFromPrivateAsm_Click()
    Dim adder As AnotherAdder
    Dim obj As ObjectHandle
    Set obj = myAppDomain.CreateInstance("UnregisteredAssembly", _
        "UnregisteredAssembly.AnotherAdder")
    Set adder = obj.Unwrap
    MsgBox adder.Add(99, 3)
End Sub


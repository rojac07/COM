Imports Vb6CarServer

Public Class Form1
    Inherits System.Windows.Forms.Form

#Region " Windows Form Designer generated code "

    Public Sub New()
        MyBase.New()

        'This call is required by the Windows Form Designer.
        InitializeComponent()

        'Add any initialization after the InitializeComponent() call

    End Sub

    'Form overrides dispose to clean up the component list.
    Protected Overloads Overrides Sub Dispose(ByVal disposing As Boolean)
        If disposing Then
            If Not (components Is Nothing) Then
                components.Dispose()
            End If
        End If
        MyBase.Dispose(disposing)
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    Friend WithEvents btnUseVb6ComType As System.Windows.Forms.Button
    <System.Diagnostics.DebuggerStepThrough()> Private Sub InitializeComponent()
        Me.btnUseVb6ComType = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'btnUseVb6ComType
        '
        Me.btnUseVb6ComType.Location = New System.Drawing.Point(16, 24)
        Me.btnUseVb6ComType.Name = "btnUseVb6ComType"
        Me.btnUseVb6ComType.Size = New System.Drawing.Size(256, 23)
        Me.btnUseVb6ComType.TabIndex = 0
        Me.btnUseVb6ComType.Text = "Use VB 6.0 COM Type"
        '
        'Form1
        '
        Me.AutoScaleBaseSize = New System.Drawing.Size(5, 13)
        Me.ClientSize = New System.Drawing.Size(292, 78)
        Me.Controls.AddRange(New System.Windows.Forms.Control() {Me.btnUseVb6ComType})
        Me.Name = "Form1"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "VB.NET VB 6.0 Client"
        Me.ResumeLayout(False)

    End Sub

#End Region

    Private Sub btnUseVb6ComType_Click(ByVal sender As System.Object, _
        ByVal e As System.EventArgs) Handles btnUseVb6ComType.Click
        Dim vbComCar As New CoCarClass()
        vbComCar.TurboBlast()
        vbComCar.Speed = 20
        MessageBox.Show(vbComCar.Speed.ToString(), "Speed of VB 6.0 Car is:")
    End Sub
End Class

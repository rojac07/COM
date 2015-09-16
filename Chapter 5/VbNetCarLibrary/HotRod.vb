Public Class HotRod
    Inherits Car
    Implements IConvertible

    ' IConvertible impl.
    Public Overridable Sub OpenSunRoof(ByVal openIt As Boolean) Implements IConvertible.OpenSunRoof
        If (openIt) Then
            MessageBox.Show("Sun roof is open!", "VB.NET Car Library")
        Else
            MessageBox.Show("Closing sun roof...", "VB.NET Car Library")
        End If
    End Sub

#Region "Constructors"
    Public Sub New()
    End Sub

    Public Sub New(ByVal name As String, ByVal color As CarColor)
        MyBase.new(name, color)
    End Sub
    Public Sub New(ByVal name As String, ByVal color As CarColor, ByVal sp As Integer)
        MyBase.new(name, color, sp)
    End Sub
#End Region

#Region "Overrides"
    ' Overrides.
    Public Overrides Sub SpeedUp()
        mCurrSpeed += 20
    End Sub
    Public Overrides Sub DisplayBumperStickerText()
        MessageBox.Show("Taking names and kickin' butt...", "VB.NET Car Library")
    End Sub
#End Region

End Class
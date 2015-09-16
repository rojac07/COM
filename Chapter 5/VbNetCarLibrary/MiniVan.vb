Public Class MiniVan
    Inherits Car

#Region "Constructors"
    Public Sub New()
    End Sub

    Public Sub New(ByVal name As String, ByVal color As CarColor)
        MyBase.New(name, color)
    End Sub

    Public Sub New(ByVal name As String, ByVal color As CarColor, ByVal sp As Integer)
        MyBase.New(name, color, sp)
    End Sub
#End Region

#Region "Overrides"
    ' Overrides.
    Public Overrides Sub SpeedUp()
        mCurrSpeed += 5
    End Sub
	Public Overrides Sub DisplayBumperStickerText()
		MessageBox.Show("All my kids and money go to the U of Mn", "VB.NET Car Library")
	End Sub
#End Region
End Class


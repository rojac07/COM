Public Class Roadster
    Inherits HotRod
    ' Implements IConvertible

#Region "Constructors"
    Public Sub New()
    End Sub

    Public Sub New(ByVal name As String, ByVal color As CarColor)
        MyBase.New(name, color)
    End Sub

    Public Sub New(ByVal name As String, ByVal color As CarColor, ByVal sp As Integer)
        MyBase.New(name, color, sp)
    End Sub
    Public Sub New(ByVal name As String, ByVal color As CarColor, ByVal sp As Integer, ByVal trunkSpace As Short)
        MyBase.New(name, color, sp)
        mTrunkSpace = trunkSpace
    End Sub
#End Region

#Region "Overrides"
    Public Overrides Sub SpeedUp()
        mCurrSpeed += 20
    End Sub
    Public Overrides Sub DisplayBumperStickerText()
        MessageBox.Show("Faster is better.", "VB.NET Car Library")
    End Sub
#End Region

    ' IConvertible impl.
    Public Overrides Sub OpenSunRoof(ByVal openIt As Boolean) ' Implements IConvertible.OpenSunRoof

        If (openIt) Then
            MessageBox.Show("Sun roof is open!", "VB.NET Car Library")
        Else
            MessageBox.Show("Looking through small plastic window...", "VB.NET Car Library")
        End If
    End Sub

    ' Custom state data.
    Private mTrunkSpace As Short
    Public Property TrunkSpace() As Short
        Get
            Return mTrunkSpace
        End Get
        Set(ByVal Value As Short)
            mTrunkSpace = Value
        End Set
    End Property

    ' Change ToString() for Cars.
    Public Overrides Function ToString() As String
        Dim sb As StringBuilder = New StringBuilder()
        sb.AppendFormat(MyBase.ToString())
        sb.AppendFormat(" Trunk Space: {0}", mTrunkSpace)
        Return sb.ToString()
    End Function
End Class
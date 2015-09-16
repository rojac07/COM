' Car color.
Public Enum CarColor
    Red
    Green
    Blue
    Pink
    Yellow
    Black
End Enum

' Some cars are convertibles.
Public Interface IConvertible
    Sub OpenSunRoof(ByVal openIt As Boolean)
End Interface

' The base class.
Public MustInherit Class Car

    ' Polymorphic interface.
    Public MustOverride Sub SpeedUp()
    Public Overridable Sub DisplayBumperStickerText()
        MessageBox.Show("If you can read this you're too close.", "VB.NET Car Library")
    End Sub

    ' State data.
    Protected mPetName As String
    Protected mCarColor As CarColor
    Protected mCurrSpeed As Integer

#Region "Class Constructors"
    Public Sub New()
    End Sub

    Public Sub New(ByVal name As String, ByVal color As CarColor)
        MyClass.New(name, color, 0)
    End Sub

    Public Sub New(ByVal name As String, ByVal color As CarColor, ByVal sp As Integer)
        mPetName = name
        mCarColor = color
        mCurrSpeed = sp
    End Sub
#End Region

#Region "Properties"
    Public Property PetName() As String
        Get
            Return mPetName
        End Get
        Set(ByVal Value As String)
            mPetName = Value
        End Set
    End Property
    Public Property Color() As CarColor
        Get
            Return mCarColor
        End Get
        Set(ByVal Value As CarColor)
        End Set
    End Property
    Public Property Speed() As Integer
        Get
            Return mCurrSpeed
        End Get
        Set(ByVal Value As Integer)
            mCurrSpeed = Value
        End Set
    End Property
#End Region

    ' Change ToString() for Cars.
    Public Overrides Function ToString() As String
        Dim sb As StringBuilder = New StringBuilder()
        sb.AppendFormat("[VB.NET] PetName: {0} Color: {1} CurrentSpeed: {2}", _
          mPetName, mCarColor, mCurrSpeed)
        Return sb.ToString()
    End Function
End Class
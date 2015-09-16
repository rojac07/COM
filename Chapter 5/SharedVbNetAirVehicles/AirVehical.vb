Public Enum AirLine
	SunnyCountry
	SouthEastAirlines
	Unknown
	ChucksInternationalAir
End Enum

Public Interface IHover
	Function CanHoverWithoutDetection() As Boolean
	Sub Hover()
End Interface

Public MustInherit Class AirVehicle
	' polymorphic interface
	Public MustOverride Sub RetractLandingGear()

	' state data.
	Protected mAirLineName As AirLine

#Region "Constructors"
	' constructors.
	Public Sub New()
	End Sub

	Public Sub New(ByVal al As AirLine)
		mAirLineName = al
	End Sub
#End Region

	' Properties.
	Public Property AirLineName() As AirLine
		Get
			Return mAirLineName
		End Get
		Set(ByVal Value As AirLine)
			mAirLineName = Value
		End Set
	End Property
End Class

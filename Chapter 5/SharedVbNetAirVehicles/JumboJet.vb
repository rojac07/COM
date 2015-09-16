Public Class JumboJet
	Inherits AirVehicle

	Public Overrides Sub RetractLandingGear()
		Dim s As String
		s = "Thanks for flying with " & Me.AirLineName.ToString()
		MessageBox.Show(s)
	End Sub

	Public Sub New(ByVal al As AirLine)
		Me.AirLineName = al
	End Sub
End Class

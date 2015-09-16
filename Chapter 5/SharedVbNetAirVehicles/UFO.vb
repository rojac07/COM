Public Class UFO
	Inherits AirVehicle
	Implements IHover

	Private canHover As Boolean

	' Overrides
	Public Overrides Sub RetractLandingGear()
		Dim s As String
		s = "UFO's don't have landing gear" _
		+ vbLf + "Activating molocule stimulator..."
		MessageBox.Show(s)
	End Sub

#Region "IHover Impl"
	Public Function CanHoverWithoutDetection() As Boolean _
	Implements SharedVbNetAirVehicles.IHover.CanHoverWithoutDetection
		Return canHover
	End Function

	Public Sub Hover() _
		Implements SharedVbNetAirVehicles.IHover.Hover
		If (CanHoverWithoutDetection()) Then
			MessageBox.Show("waiting and watching...")
		Else
			MessageBox.Show("Located by Earthling...Applying InvisoShield")
		End If
	End Sub
#End Region

	Public Sub AbductHuman()
		MessageBox.Show("Welcome aboard human...")
	End Sub

	Public Sub New()
		AirLineName = AirLine.Unknown
		canHover = True
	End Sub
End Class

Public Class MotherShip
	Inherits UFO

	Public Sub AbductOtherUFOs()
		MessageBox.Show("You have failed your mission...")
	End Sub
End Class
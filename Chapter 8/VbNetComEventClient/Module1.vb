Imports VBComEventsServer

Module Module1

    ' We want the events...
    Public WithEvents car As New CoCarClass()

    Sub Main()
        ' Speed things up.
        Dim i As Integer
        For i = 0 To 19
            Console.WriteLine("Current speed: {0}", car.SpeedUp())
        Next
    End Sub

    ' Sinks.
    Public Sub car_AboutToBlow() Handles car.AboutToBlow
        Console.WriteLine("Dude!  Slow down!")
    End Sub

    Public Sub car_Exploded() Handles car.Exploded
        Console.WriteLine("You're toast...")
    End Sub
End Module

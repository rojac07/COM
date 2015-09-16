Imports interop.AnotherAtlCarServer
Imports System.Windows.Forms
Imports System.Runtime.InteropServices

<ClassInterface(ClassInterfaceType.AutoDual)> _
Public Class UFO
    Implements IStartable, IStoppable

    Public Sub Start() _
        Implements interop.AnotherAtlCarServer.IStartable.Start
        MessageBox.Show("VB.NET UFO starting", "UFO says:")
    End Sub

    Public Sub Break() Implements interop.AnotherAtlCarServer.IStoppable.Break
        MessageBox.Show("VB.NET UFO stopping", "UFO says:")
    End Sub
End Class

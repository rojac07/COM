Imports System.Runtime.InteropServices

' This is the name of the event interface to be
' generated.
<InterfaceType(ComInterfaceType.InterfaceIsIDispatch), _
Guid("68E53BB4-48F9-45cc-96C6-72033295E26A")> _
Public Interface _DEventInterface
    <DispId(1)> Sub TheEvent(ByVal msg As String)
End Interface

<ClassInterface(ClassInterfaceType.AutoDual), _
Guid("7D6A1F10-0224-4fbf-8C17-B7A4B707372A"), _
ComSourceInterfaces(GetType(_DEventInterface))> _
Public Class VbDotNetEventSender
    Public Event TheEvent(ByVal msg As String)

    Public Sub FireTheEvent()
        RaiseEvent TheEvent("Hello from the DotNetEventSender")
    End Sub
End Class
VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "CarCollection"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit

Private mCarColl As Collection

Public Function AddCar(ByVal Color As String, ByVal Make As String, _
    ByVal PetName As String, ByVal id As Integer) As CoCar
    ' make a new car and add it to the collection.
    Dim c As CoCar
    Set c = New CoCar
    c.Create Color, Make, PetName, id
    mCarColl.Add c
    Set AddCar = c
End Function

Public Function GetCar(ByVal index As Integer) As CoCar
    ' get car from collection.
    Set GetCar = mCarColl.Item(index)
End Function

Public Function NumberOfCars() As Integer
    ' Return number of cars.
    NumberOfCars = mCarColl.Count()
End Function

Public Sub RemoveCar(ByVal index As Integer)
    ' Return number of cars.
    mCarColl.Remove (index)
End Sub

' Required to support For Each iteration.
Public Function NewEnum() As IUnknown
Attribute NewEnum.VB_UserMemId = -4
Attribute NewEnum.VB_MemberFlags = "40"
    Set NewEnum = mCarColl.[_NewEnum]
End Function

Private Sub Class_Initialize()
    Set mCarColl = New Collection
    
    ' Add some initial cars to the collection.
    AddCar "Red", "Viper", "Fred", 1
    AddCar "Yellow", "SlugBug", "Pippy", 2
    AddCar "Black", "BMW", "Buddha", 3
    AddCar "Gold", "Colt", "Goldy", 4
    AddCar "Pink", "Caravan", "Illness", 5
End Sub

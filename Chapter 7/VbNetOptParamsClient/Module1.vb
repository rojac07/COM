Imports VbOptParamsServer

Module Module1
    Sub Main()
        Dim c As New CoOptParamsClass()
        Dim i As Integer

        ' work with optional params.
        i = c.AddTwoOrThreeNumbers(20, 20)
        Console.WriteLine("20 + 20 is {0}", i)

        i = c.AddTwoOrThreeNumbers(10, 20, 40)
        Console.WriteLine("10 + 20 + 40 is {0}", i)

        ' Work with default params.
        i = c.AddWithDefaults()
        Console.WriteLine("2 + 2 is {0}", i)

        i = c.AddWithDefaults(3)
        Console.WriteLine("3 + 2 is {0}", i)

        i = c.AddWithDefaults(4, 2)
        Console.WriteLine("4 + 2 is {0}", i)

        ' Optional variants.
        Dim o As Object = Type.Missing
        c.UseThisOptionalThing("Hello", o)
        c.UseThisOptionalThing("Hello")
        c.UseThisOptionalThing("Hello", "From VB .NET")

    End Sub
End Module

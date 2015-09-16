using System;
using System.Data;

namespace FunWithType
{
	/// <summary>
	/// Summary description for Class1.
	/// </summary>
	class SimpleTypeReader
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Just get some type info and display basic stats.
			// Get a Type reference using GetType().
			Console.WriteLine("Using System.Object.GetType()!");
			Type t = 12.GetType();
			Console.WriteLine("->Containing assembly: {0}", t.Assembly);
			Console.WriteLine("->Base class: {0}", t.BaseType);
			Console.WriteLine("->Full Name: {0}", t.FullName);
			Console.WriteLine("->Is this an array? : {0}", t.IsArray);
			Console.WriteLine("->Is this a COM object? : {0}", t.IsCOMObject);
			
			Console.WriteLine("\n");
			
			// Now get a type in a different assembly using
			// the static Type.GetType() method.
			Console.WriteLine("Using static Type.GetType()!");
			Type t2 = Type.GetType("ComplexTypeLibrary.SimpleClass, ComplexTypeLibrary");
			Console.WriteLine("->Containing assembly: {0}", t2.Assembly);
			Console.WriteLine("->Base class: {0}", t2.BaseType);
			Console.WriteLine("->Full Name: {0}", t2.FullName);
			Console.WriteLine("->Is this an array? : {0}", t2.IsArray);
			Console.WriteLine("->Is this a COM object? : {0}", t2.IsCOMObject);

			Console.WriteLine("\n");

			// Now use typeof operator.
			Console.WriteLine("Using typeof operator!");
			Type t3 = typeof(DataSet);
			Console.WriteLine("->Containing assembly: {0}", t3.Assembly);
			Console.WriteLine("->Base class: {0}", t3.BaseType);
			Console.WriteLine("->Full Name: {0}", t3.FullName);
			Console.WriteLine("->Is this an array? : {0}", t3.IsArray);
			Console.WriteLine("->Is this a COM object? : {0}", t3.IsCOMObject);

			Console.WriteLine("\n");
		}
	}
}

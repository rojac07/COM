using System;
using System.Reflection;
using ComplexTypeLibrary;
using ComplexTypeLibrary.TheTypes;

namespace AttributeReader
{
	public class AttReader
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Get the Type of TheEnum.
			Type t = typeof(TheEnum);
		
			// Get all attributes on this type.
			object[] customAtts = t.GetCustomAttributes(false);
		
			// List TODO comment.
			foreach(ToDoAttribute a in customAtts)
				Console.WriteLine("ToDo: {0}", a.Comment);		
		}
	}
}

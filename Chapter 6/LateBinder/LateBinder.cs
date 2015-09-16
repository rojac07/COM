using System;
using System.Reflection;

namespace LateBinder
{
	public class LateBoundClient
	{
		[STAThread]
		static void Main(string[] args)
		{
			//////////////////////////////////////////////////////////////////////
			// Bind late to an private assembly.
			//////////////////////////////////////////////////////////////////////
			Assembly asm = Assembly.Load("ComplexTypeLibrary");

			// Get type in the assembly.
			string typeIWant 
				= "ComplexTypeLibrary.TheTypes.TheNestingClass+TheNestedClass";
			Type t = asm.GetType(typeIWant);
		
			// Create TheNestedClass on the fly.
			object obj = Activator.CreateInstance(t); 
			
			// Get info for GetInternalString.
			MethodInfo mi = t.GetMethod("GetInternalString");	

			// Invoke method ('null' for no parameters).
			object retval = mi.Invoke(obj, null);
			Console.WriteLine(((string)retval).ToString());

			// Invoke method with parameters.
			short numbOfTimes = 5;
			object[] theParams = {"Oi!", numbOfTimes};
			mi = t.GetMethod("ShowMessage");
			mi.Invoke(obj, theParams);

			//////////////////////////////////////////////////////////////////////
			// Bind late to shared assembly in GAC.
			// NOTE:  You may need to update the strong name based
			// on your version of the .NET framework.
			//////////////////////////////////////////////////////////////////////
			Console.WriteLine("Late binding to OpenFileDialog");
			string strongName = "System.Windows.Forms,";
			strongName += "PublicKeyToken=b77a5c561934e089, Version=1.0.3300.0";

			Assembly asm2 = Assembly.LoadWithPartialName(strongName);

			// Get type in the assembly.
			Type t2 = asm2.GetType("System.Windows.Forms.OpenFileDialog");
			object obj2 = Activator.CreateInstance(t2); 
			
			// Get info for ShowDialog.
			MethodInfo mi2 = t2.GetMethod("ShowDialog", new Type[0]);

			// Launch the dialog!
			mi2.Invoke(obj2, null);
		}
	}
}

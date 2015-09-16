using System;
using interop.AtlHelpCustomAttsServer;
using System.ComponentModel;
using System.Reflection;

namespace CustomInteropAsmClient
{
	class TheClient
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Trigger functionality.
			AtlAdderClass c = new AtlAdderClass();
			Console.WriteLine("10 + 10 is {0}", c.Add(10, 10));

			// Get all the custom atts.
			object[] theAtts = c.GetType().GetCustomAttributes(false);

			foreach(object o in theAtts)
			{
				if(o is DescriptionAttribute)
					Console.WriteLine("Helpstring: {0}", 
						((DescriptionAttribute)o).Description);
				if(o is IDLCustomAttribute)
				{
					Console.WriteLine("Guid: {0}", 
						((IDLCustomAttribute)o).theGuidName);
					Console.WriteLine("Value: {0}", 
						((IDLCustomAttribute)o).theStringValue);
				}
			}
		}
	}
}

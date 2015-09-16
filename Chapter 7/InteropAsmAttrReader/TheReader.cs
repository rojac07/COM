using System;
using System.Reflection;
using System.Runtime.InteropServices;

namespace InteropAsmAttrReader
{
	class InteropAsmAttrReaderApp
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Load the assembly from the GAC and see if it is
			// a primary interop assembly.
			string strongName = "PrimarySharedLameServer,";
			strongName += "PublicKeyToken=47ae2f12896460f7, Version=1.0.0.0";

			// Load from GAC.
			Assembly asm = Assembly.LoadWithPartialName(strongName);
			object[] atts = asm.GetCustomAttributes(true);

			// Dump out manifest metadata.
			Console.WriteLine("***** Manifest metadata *****");
			foreach(object o in atts)
			{
				if(o is ImportedFromTypeLibAttribute)
				{
					Console.WriteLine("Library Name: " + 
						((ImportedFromTypeLibAttribute)o).Value);
				}
				if(o is GuidAttribute)
				{
					Console.WriteLine("LIBID: " + 
						((GuidAttribute)o).Value);
				}
				if(o is PrimaryInteropAssemblyAttribute)
				{
					Console.WriteLine("This is a primary interop assembly!");
					Console.WriteLine("COM Minor {0}\nCOM Minor {1}",
						((PrimaryInteropAssemblyAttribute)o).MajorVersion,
						((PrimaryInteropAssemblyAttribute)o).MinorVersion);
				}
			}

			// Get attributes for HelloClass type.
			Type t = asm.GetType("PrimarySharedLameServer.HelloClass");
			object[] moreAtts = t.GetCustomAttributes(true);
			Console.WriteLine("\n***** HelloClass metadata *****");
			foreach(object o in moreAtts)
			{
				// Get TYPEFLAGS for HelloClass. 
				if(o is TypeLibTypeAttribute)
				{
					Console.WriteLine("TYPEFLAGS: " + 
						((TypeLibTypeAttribute)o).Value);
				}
				if(o is GuidAttribute)
				{
					Console.WriteLine("CLSID: " + 
						((GuidAttribute)o).Value);
				}
			}

			// Get attributes for SayHello method.
			MethodInfo mi = t.GetMethod("SayHello");
			object[] evenMoreAtts = mi.GetCustomAttributes(true);
			Console.WriteLine("\n***** SayHello metadata *****");
			foreach(object o in evenMoreAtts)
			{
				if(o is DispIdAttribute)
				{
					Console.WriteLine("DISPID of SayHello: {0}", 
						((DispIdAttribute)o).Value);
				}
			}

			// Get type information for HelloClass.
			Console.WriteLine("\n***** HelloClass type info *****");
			Type helloTypeInfo = Type.GetType("PrimarySharedLameServer.HelloClass");
			Console.WriteLine("Base type: {0}", t.BaseType); 
			Console.WriteLine("GUID: {0}", t.GUID); 
			Console.WriteLine("COM Object?: {0}", t.IsCOMObject);
			Console.WriteLine("Defining Namespace: {0}\n", t.Namespace); 		
		}
	}
}

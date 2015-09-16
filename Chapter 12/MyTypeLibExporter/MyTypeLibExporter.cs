using System;
using System.Runtime.InteropServices;
using System.Reflection;

namespace MyTypeLibExporter
{
	/// <summary>
	/// Helper for the conversion process.
	/// </summary>
	internal class ExporterNotiferSink : ITypeLibExporterNotifySink
	{
		public void ReportEvent(System.Runtime.InteropServices.ExporterEventKind eventKind, 
			int eventCode, string eventMsg)
		{
			Console.WriteLine("Event reported: {0}", eventMsg);
		}
		public object ResolveRef(System.Reflection.Assembly assembly)
		{
			// If the assembly we are converting reference another assembly,
			// we need to generate a *tlb for it as well.
			string pathToAsm;
			Console.WriteLine("MyTypeLibExporter encountered an assembly");
			Console.WriteLine("which referenced another assembly...");
			Console.WriteLine("Please enter the location to {0}", assembly.FullName);
			pathToAsm = Console.ReadLine();
			return MyTypeLibExporter.GenerateTLBFromAsm(pathToAsm);
		}
	}

	/// <summary>
	/// Managed definition of ICreateTypeLib.
	/// </summary>
	[ComImport,
	GuidAttribute("00020406-0000-0000-C000-000000000046"),
	InterfaceTypeAttribute(ComInterfaceType.InterfaceIsIUnknown),
	ComVisible(false)]
	internal interface UCOMICreateTypeLib	// Naming convention. UCOM = unmanaged COM.
	{
		// IntPtr is a hack to avoid having
		// to define ICreateTypeInfo (which is HUGE).
		IntPtr CreateTypeInfo(string name, TYPEKIND kind);       
		void SetName(string name);       
		void SetVersion(short major, short minor);        
		void SetGuid(ref Guid theGuid);
		void SetDocString(string doc);
		void SetHelpFileName(string helpFile);        
		void SetHelpContext(int helpCtx);
		void SetLcid(int lcid);
		void SetLibFlags(uint flags);
		void SaveAllChanges();
	}

	class MyTypeLibExporter
	{		
		static void Main(string[] args)
		{
			// Get the path to the assembly.
			Console.WriteLine("Please enter the path to the .NET binary");
			Console.WriteLine(@"Example: C:\MyStuff\Blah\myDotNetServer.dll");
			Console.Write("Path: ");
			string pathToAssembly = Console.ReadLine();  

			// Generate type lib for this assembly.
			UCOMITypeLib i = GenerateTLBFromAsm(pathToAssembly);
		
			// Ask if user wants to register this server with COM.		
			int regValue;
			Console.WriteLine("Would you like to register this .NET library with COM?");
			Console.Write("1 = yes or 0 = no ");
			regValue = Console.Read();

			if(regValue == 1)
			{
				RegistrationServices rs = new RegistrationServices();
				Assembly asm = Assembly.LoadFrom(pathToAssembly);
				rs.RegisterAssembly(asm, AssemblyRegistrationFlags.None);
				Console.WriteLine(".NET assembly registered with COM!");
			}
		}

		/// <summary>
		/// This method creates (and saves) a COM type library given a .NET 
		/// assembly.
		/// </summary>
		public static UCOMITypeLib GenerateTLBFromAsm(string pathToAssmebly)
		{
			UCOMITypeLib managedITypeLib = null;
			ExporterNotiferSink sink = new ExporterNotiferSink();
			
			// Load the assembly to convert.
			Assembly asm = Assembly.LoadFrom(pathToAssmebly);
			if (asm != null)
			{
				try
				{
					// Create name of type library based on .NET assembly.
					string tlbname = asm.GetName().Name + ".tlb";

					// Convert the assembly.
					ITypeLibConverter TLBConv = new TypeLibConverter();
					managedITypeLib = (UCOMITypeLib)TLBConv.ConvertAssemblyToTypeLib(asm, tlbname, 0, sink);
					try
					{
						UCOMICreateTypeLib managedICreateITypeLib = (UCOMICreateTypeLib)managedITypeLib;
						managedICreateITypeLib.SaveAllChanges();
					}
					catch (COMException e)
					{
						throw new Exception("Error saving the typeLib : " 
							+ e.ErrorCode.ToString("x"));
					}
				}
				catch (Exception e)
				{
					throw new Exception("Error Converting assembly" + e);
				}
			}
			return managedITypeLib;
		}
	}
}

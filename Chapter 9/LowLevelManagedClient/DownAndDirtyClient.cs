using System;
using Intertech.RawComCarLib;
using System.Runtime.InteropServices;

namespace LowLevelManagedClient
{
	class DownAndDirtyClient
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Make a raw COM car.
			ComCarClass c = new ComCarClass();

			// See if this guy is a COM object...
			Console.WriteLine("Am I a COM object? {0}", 
				Marshal.IsComObject(c).ToString());

			// Get IUnknown of object.
			IntPtr itfUnknownPtr = Marshal.GetIUnknownForObject(c);

			// Manually AddRef() and Release()
			// using the IUnknown pointer.
			for(int i = 0; i < 5; i++)
			{
				Console.WriteLine("AddReffing! Count: {0}", 
					Marshal.AddRef(itfUnknownPtr));
				Console.WriteLine("Releasing! Count: {0}", 
					Marshal.Release(itfUnknownPtr));
			}

			// Manually call QueryInterface().
			IntPtr itfRadioPtr;
			Guid IIDRadio = Marshal.GenerateGuidForType(typeof(IRadio));
			Marshal.QueryInterface(itfUnknownPtr, 
				ref IIDRadio, 
				out itfRadioPtr);

			// Convert raw IntPtr to IRadio and
			// manually crank tunes.
			IRadio itfRadio = (IRadio)Marshal.GetObjectForIUnknown(itfRadioPtr);
			itfRadio.CrankTunes();

			// This releases ALL interfaces
			// held by the RCW.
			ComCarClass c2 = new ComCarClass();
			Console.WriteLine("Ref Count after calling Marshal.ReleaseComObject(c2): {0}", 
				Marshal.ReleaseComObject(c2));

			// This will throw an error.
			try
			{
				c2.CrankTunes();
			}
			catch(NullReferenceException ex)
			{ 
				Console.WriteLine(ex.Message);
			}			
		}
	}
}

using System;
using ATLCOMERRORSERVERLib;
using System.Runtime.InteropServices;

namespace CSharpComErrorClient
{
	class ComErrorClient
	{
		// Helper funciton.
		static void ReportCOMError(COMException e)
		{
			Console.WriteLine("*************************************");
			Console.WriteLine("Raw HRESULT: {0}", e.ErrorCode);
			Console.WriteLine("Message: {0}", e.Message);
			Console.WriteLine("Source of error: {0}", e.Source);
			Console.WriteLine("Method Name: {0}", e.TargetSite);
			Console.WriteLine("*************************************\n");
		}

		[STAThread]
		static void Main(string[] args)
		{
			// Create the ATL coclass.
			TheBrokenObjectClass b = new TheBrokenObjectClass();
			
			// Trigger the errors.
			try
			{
				b.ReturnFailedHRESULT();
			}
			catch(COMException comEx)
			{
				ReportCOMError(comEx);
			}
			try
			{
				b.ReturnComErrorObject();
			}
			catch(COMException comEx)
			{
				ReportCOMError(comEx);
			}
		}
	}
}

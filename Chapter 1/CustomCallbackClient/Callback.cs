using System;
using System.Runtime.InteropServices;

namespace CustomCallbackClient
{
	// A simple struct to pass to the DLL.
	[StructLayout(LayoutKind.Sequential)]
	public class THEPOINT
	{
		public int x;
		public int y;
	}

	class ManagedCallBackApp
	{
		public delegate bool SendTHEPOINTHere(THEPOINT pt);
		public delegate bool ReportBackHere();

		[DllImport("MyCustomCallbackDLL.dll")]
		public static extern void VerifyAndReportBack(ReportBackHere x);

		[DllImport("MyCustomCallbackDLL.dll")]
		public static extern void ChangePOINTAndReportBack(SendTHEPOINTHere x, THEPOINT pt);

		[STAThread]
		public static void Main() 
		{
			ReportBackHere simpleCallback = new ReportBackHere(ManagedCallBackApp.Report);
			VerifyAndReportBack(simpleCallback);

			SendTHEPOINTHere theCallBack = new SendTHEPOINTHere(ManagedCallBackApp.GiveMeThePoint);
			THEPOINT pt = new THEPOINT();
			pt.x = 10;
			pt.y = 10;
			Console.WriteLine("Point is:");
			Console.WriteLine("X = {0}\nY = {1}", pt.x, pt.y);
			ChangePOINTAndReportBack(theCallBack, pt);
		}

		public static bool GiveMeThePoint(THEPOINT pt) 
		{ 
			Console.WriteLine("New Point is:");
			Console.WriteLine("X = {0}\nY = {1}", pt.x, pt.y);
			return true;
		}

		public static bool Report() 
		{ 
			Console.WriteLine("I was called by the DLL!");
			return false;
		}

	}
}



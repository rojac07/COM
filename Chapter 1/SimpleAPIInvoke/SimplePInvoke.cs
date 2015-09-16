using System;
using System.Runtime.InteropServices;

namespace SimpleAPIInvoke
{
	public class PInvokeClient
	{
		// Map the MessageBoxW function to 'DisplayMessage'.
		[DllImport("user32.dll", ExactSpelling = true,
	    CharSet=CharSet.Unicode, EntryPoint = "MessageBoxW", SetLastError = true)]
		public static extern int DisplayMessage(int hWnd, String  pText, 
			String  pCaption, int uType);

		public static int Main(string[] args)
		{
			String pText = "Hello World!";
			String pCaption = "PInvoke Test";

			// Change 99999 to 0 to run the program without error.
			Console.WriteLine("Change 99999 to 0 to run the program without error!");
			DisplayMessage(99999, pText, pCaption, 0);
			Console.WriteLine("Last Win32 Error: {0}", Marshal.GetLastWin32Error());
			return 0;
		}
	}
}

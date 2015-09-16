using System;
using System.Runtime.InteropServices;

namespace RuntimeSpy
{
	class Spy
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Check out the runtime...
			Console.WriteLine("Runtime Directory is:\n-->{0}\n",
				RuntimeEnvironment.GetRuntimeDirectory());

			Console.WriteLine("System Version is:\n-->{0}\n",
				RuntimeEnvironment.GetSystemVersion());

			Console.WriteLine("Location of system config file is:\n-->{0}\n",
				RuntimeEnvironment.SystemConfigurationFile);
		}
	}
}

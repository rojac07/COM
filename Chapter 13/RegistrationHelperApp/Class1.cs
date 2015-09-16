using System;
using System.EnterpriseServices;

namespace RegistrationHelperApp
{
	class MyRegHelper
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Register a private assembly.
			RegistrationHelper rh = new RegistrationHelper();
			try
			{
				string comPlusAppName = "NewComPlusApp";
				string typeLibName = "FooServicedComp.tlb";
				rh.InstallAssembly("FooServicedComp.dll", 
					ref comPlusAppName, 
					ref typeLibName, 
					InstallationFlagsFindOrCreateTargetApplication); 
			}
			catch(RegistrationException rhex)
			{
				Console.WriteLine(rhex.Message);
			}
		}
	}
}


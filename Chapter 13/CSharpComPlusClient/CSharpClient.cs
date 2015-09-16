using System;
using ServicedDotNetLib;
using System.EnterpriseServices;

namespace CSharpComPlusClient
{
	class CSharpClient
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Use the COM+ type.
			SimpleServicedType st = new SimpleServicedType();
			st.DisplayMessage("Hello from C#!");
			st.ShowObjCtxInfo();
 		}
	}
}

using System;
using System.Runtime.InteropServices;
using System.EnterpriseServices;
using System.Windows.Forms;
using System.Text;

namespace ServicedDotNetLib
{
	// Expose class members on the class interface
	// (_SimpleServicedType) as a [dual] interface. 
	[EventTrackingEnabled(true)]
	[ClassInterface(ClassInterfaceType.AutoDual)]
	[ConstructionEnabled(Enabled = true, Default = "Yo!")]
	public class SimpleServicedType : ServicedComponent  
	{
		// Serviced Components must support a default
		// constructor.
		public SimpleServicedType(){}

		public void DisplayMessage(string msg)
		{ MessageBox.Show(msg, "Client says:");}

		protected override void Construct(string ctorString)
		{ MessageBox.Show(ctorString, "Object Constructor string is:");}

		public void ShowObjCtxInfo()
		{
			StringBuilder sb = new StringBuilder();
			sb.AppendFormat("COM+ Applicaiton ID: {0}\n", ContextUtil.ApplicationId);
			sb.AppendFormat("Context ID: {0}\n", ContextUtil.ContextId);
			sb.AppendFormat("In a transaction? : {0}\n", ContextUtil.IsInTransaction.ToString());
			sb.AppendFormat("Security Enabled? : {0}\n", ContextUtil.IsSecurityEnabled);
			MessageBox.Show(sb.ToString(), "Object Level Contextual Information");
		}
	}
}
